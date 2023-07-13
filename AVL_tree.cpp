#include "AVL_tree.h"

AVLNode* AVLTree::copy(const AVLNode* node)
{
	AVLNode* n = nullptr;

	if (node) {
		n = new AVLNode(node->surname, node->average_mark);
		n->right = copy(node->right);
		n->left = copy(node->left);
	}

	return n;
}

int AVLTree::add(AVLNode*& node, Student& stud)
{
	int height = 0;

	if (node) {

		if (stud.average() > node->average_mark) {
			height = add(node->right, stud);
			if (height > node->hright)
				node->hright = height;
		}

		else {
			height = add(node->left, stud);
			if (height > node->hleft)
				node->hleft = height;
		}
		if (balance(node)) --height;
	}

	else
		node = new AVLNode(stud.get_surname(), stud.average());

	++height;

	return height;
}


double AVLTree::removeMin(AVLNode*& start)
{
	double min;

	if (start->left) {
		min = removeMin(start->left);
		start->hleft = height(start->left);
		balance(start);
	}

	else {
		min = start->average_mark;
		delNode(start);
	}

	return min;
}


double AVLTree::removeMax(AVLNode*& start)
{
	double max;

	if (start->right) {
		max = removeMax(start->right);
		start->hright = height(start->right);
		balance(start);
	}

	else {
		max = start->average_mark;
		delNode(start);
	}

	return max;
}


bool AVLTree::findAndDel(AVLNode*& start, Student& stud)
{
	bool isDelete = false;

	if (start) {

		if (start->average_mark == stud.average() && start->surname == stud.get_surname()) {
			delNode(start);
			isDelete = true;
		}

		else if (stud.average() > start->average_mark && start->surname == stud.get_surname()) {
			isDelete = findAndDel(start->right, stud);
			start->hright = height(start->right);
			balance(start);
		}

		else {
			isDelete = findAndDel(start->left, stud);
			start->hleft = height(start->left);
			balance(start);
		}
	}

	return isDelete;
}


void AVLTree::delNode(AVLNode*& node)
{
	if (node->right || node->left) {

		if (node->hright >= node->hleft) {
			double inf = removeMin(node->right);
			node->hright = height(node->right);
			node->average_mark = inf;
			balance(node);
		}

		else {
			double inf = removeMax(node->left);
			node->hleft = height(node->left);
			node->average_mark = inf;
			balance(node);
		}
	}

	else {
		delete node;
		node = nullptr;
	}

}


int AVLTree::height(AVLNode* node)
{
	int result;

	if (!node)
		result = 0;

	else
		result = (node->hleft > node->hright ? node->hleft : node->hright) + 1;

	return result;
}

void AVLTree::prnt(std::ostream& stream, AVLNode* node, int level)
{
	if (node) {

		prnt(stream, node->right, level + 1);

		for (int i = 0; i < level; i++)
			stream << "   ";

		stream << node->surname << ' ' << node->average_mark << '\n';
		prnt(stream, node->left, level + 1);
	}
}

void AVLTree::clr(AVLNode* node)
{
	if (node) {
		clr(node->right);
		clr(node->left);
		delete node;
	}
}

AVLTree::AVLTree(const AVLTree& tree)
{
	root = copy(tree.root);
}


AVLTree& AVLTree::addAVL(Student& stud)
{
	add(root, stud);
	return *this;
}


AVLNode* AVLTree::find(Student& stud)
{
	AVLNode* result = nullptr;

	if (root) {

		AVLNode* p = root;

		while (p && !result) {

			if (p->average_mark == stud.average() && p->surname == stud.get_surname()) {
				result = p;
			}

			else {
				if (stud.average() > p->average_mark) p = p->right;
				else  p = p->left;
			}
		}
	}

	return result;
}

bool AVLTree::deleteNode(Student& stud)
{
	return findAndDel(root, stud);
}

void AVLTree::rightTurn(AVLNode*& node)
{
	AVLNode* p = node->left;
	node->left = node->left->right;
	p->right = node;
	node = p;
	node->right->hleft = height(node->right->left);
	node->hright = height(node->right);
}


void AVLTree::leftTurn(AVLNode*& node)
{
	AVLNode* p = node->right;
	node->right = node->right->left;
	p->left = node;
	node = p;
	node->left->hright = height(node->left->right);
	node->hleft = height(node->left);
}


void AVLTree::BigLeftTurn(AVLNode*& node)
{
	rightTurn(node->right);
	leftTurn(node);
}

void AVLTree::BigRightTurn(AVLNode*& node)
{
	leftTurn(node->left);
	rightTurn(node);
}

bool AVLTree::balance(AVLNode*& node)
{
	bool isBalanced = true;

	if (node->hleft - node->hright > 1) {

		if (node->left->hright > node->left->hleft)
			BigRightTurn(node);
		else
			rightTurn(node);
	}

	else if (node->hright - node->hleft > 1) {

		if (node->right->hleft > node->right->hright)
			BigLeftTurn(node);
		else
			leftTurn(node);
	}

	else
		isBalanced = false;

	return isBalanced;
}



AVLTree& AVLTree::AVLfromStream(std::istream& stream, int n)
{
	Student stud;
	int i = 0;

	while (i<n && stream >> stud) {
		add(root, stud);
		++i;
	}

	return *this;
}


AVLTree& AVLTree::AVLfromFile(std::ifstream& file)
{
	if (file) {

		while (!file.eof()) {
			Student stud(file);
			add(root, stud);
		}
	}

	else
		std::cout << "File empty!\n";

	return *this;
}


void AVLTree::print(std::ostream& stream)
{
	if (root)
		prnt(stream, root);

	else
		stream << "Tree is empty";
}
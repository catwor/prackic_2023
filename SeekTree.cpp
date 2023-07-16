#include "SeekTree.h"

void SeekTree::remov_from_node(ptrNODE& root)
{
	if (root) {
		remov_from_node(root->left);
		remov_from_node(root->right);
		delete root;
	}
}

void SeekTree::add_node(Student& elem, ptrNODE& ptr)
{
	if (ptr == nullptr)
		ptr = new NODE(elem);

	else
		if (elem < *ptr->elem)
			add_node(elem, ptr->left);
		else
			add_node(elem, ptr->right);
}

void SeekTree::print_for_level(ptrNODE& root, int level)
{
	if (root) {

		std::string surname = root->elem->get_surname();

		print_for_level(root->right, level + 1);

		for (int i = 0; i < level; ++i)
			std::cout << "    ";

		std::cout << surname << ' ' << root->elem->average() << '\n';
		print_for_level(root->left, level + 1);
	}
}

void SeekTree::print_for_level3(ptrNODE& root, int level)
{
	if (root && level != 3) {

		std::string surname = root->elem->get_surname();

		print_for_level3(root->right, level + 1);

		for (int i = 0; i < level; ++i)
			std::cout << "    ";

		std::cout << surname << ' ' << root->elem->average() << '\n';
		print_for_level3(root->left, level + 1);
	}
}

SeekTree::SeekTree(std::ifstream& file, int elem)
{
	root = nullptr;
	for (int i = 0; i < elem; ++i)
		add(Student(file));
}

SeekTree::SeekTree()
{
	root = nullptr;
}

SeekTree::~SeekTree()
{
	delet(root);
}

ptrNODE SeekTree::get_root() const
{
	return root;
}

void SeekTree::set_root(ptrNODE& _root)
{
	root = _root;
}

void SeekTree::add(Student elem)
{
	add_node(elem, root);
}

void SeekTree::delet(ptrNODE& _root)
{
	remov_from_node(_root);
}

double SeekTree::max_average()
{
	double maxAverage;
	ptrNODE begin = root;

	while (begin->right)
		begin = begin->right;

	maxAverage = begin->elem->average();

	return maxAverage;
}

void SeekTree::best_students()
{
	double maxAverage = max_average();
	ptrNODE begin = root;
	std::string surname;

	while (begin) {

		if (begin->elem->average() == maxAverage) {
			surname = begin->elem->get_surname();
			std::cout << surname << ' ' << begin->elem->average() << '\n';
		}

		begin = begin->right;
	}
}

void SeekTree::clear()
{
	remov_from_node(root);
}

void SeekTree::print()
{
	print_for_level(root, 0);
}

void SeekTree::print3()
{
	print_for_level3(root, 0);
}
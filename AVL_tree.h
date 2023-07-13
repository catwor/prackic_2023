#pragma once
#include <fstream>
#include "Student.h"

struct AVLNode
{
	String20 surname;
	double average_mark;
	AVLNode* left, * right;
	int hleft, hright;
	AVLNode() :left(nullptr), right(nullptr), surname(), average_mark(0), hleft(0), hright(0) {};
	AVLNode(String20 surname, double average_mark, AVLNode* left = nullptr, AVLNode* right = nullptr) : surname(surname), average_mark(average_mark), left(left), right(right), hleft(0), hright(0) {};
	~AVLNode()
	{
		left = nullptr;
		right = nullptr;
	};
};

class AVLTree {
private:
	AVLNode* root;

	void clr(AVLNode* node);
	AVLNode* copy(const AVLNode* node);
	int add(AVLNode*& node, Student& stud);

	double removeMin(AVLNode*& start);
	double removeMax(AVLNode*& start);
	bool findAndDel(AVLNode*& start, Student& stud);
	void delNode(AVLNode*& node);

	int height(AVLNode* node);

	void prnt(std::ostream& stream, AVLNode* node, int level = 0);

	void rightTurn(AVLNode*& node);
	void leftTurn(AVLNode*& node);
	void BigLeftTurn(AVLNode*& node);
	void BigRightTurn(AVLNode*& node);

	bool balance(AVLNode*& node);

public:
	AVLTree() :root(nullptr) {};
	AVLTree(const AVLTree& tree);
	~AVLTree() { clr(root); };

	AVLTree& addAVL(Student& stud);
	AVLNode* find(Student& stud);
	bool deleteNode(Student& stud);

	AVLNode* getRoot() { return root; };
	void clear(AVLNode* firstNode) { clr(firstNode); };
	AVLTree& AVLfromStream(std::istream& stream, int n);
	AVLTree& AVLfromFile(std::ifstream& file);

	void print(std::ostream& stream);
};

#pragma once
#include <iostream>
#include <list>
#include "Student.h"

class NODE
{
public:
	Student* elem;
	NODE* left;
	NODE* right;

	NODE(Student _elem, NODE* _left = nullptr, NODE* _right = nullptr)
	{
		elem = new Student(_elem);
		left = _left;
		right = _right;
	}

	~NODE()
	{
		left = nullptr;
		right = nullptr;
		delete elem;
	}
};

using ptrNODE = NODE*;

class SeekTree
{
private:
	ptrNODE root;

	void remov_from_node(ptrNODE& root);
	void add_node(Student& elem, ptrNODE& ptr);
	void print_for_level(ptrNODE& root, int level);
	void print_for_level3(ptrNODE& root, int level);

public:
	SeekTree(std::ifstream& file, int elem);
	SeekTree();
	~SeekTree();

	ptrNODE get_root() const;
	void set_root(ptrNODE& _root);

	void add(Student elem);
	void delet(ptrNODE& _root);
	double max_average();
	void best_students(std::list<Student>& l);
	void clear();
	void print();
	void print3();
};
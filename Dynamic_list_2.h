#pragma once
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>

struct Node
{
	std::string surname;
	double average_mark;
	bool marks_sign; //true, if all marks == 4
	Node* next, * prev;

	Node(std::string _surname, double average_mark, bool marks_sign, Node* next = nullptr, Node* prev = nullptr) :average_mark(average_mark), marks_sign(marks_sign), next(next), prev(prev) { surname.reserve(21); surname = _surname; }
	~Node()
	{
		next = nullptr;
		prev = nullptr;
	}
};

using ptrNode = Node*;

struct DLIST
{
private:
	ptrNode begin, end;
	size_t size;
public:
	DLIST() { begin = nullptr; end = nullptr; }
	DLIST(const char* file_name);
	DLIST(std::ifstream& file);
	DLIST(const char* file_name, int n);
	DLIST(std::ifstream& file, int n);
	~DLIST() {};

	void first_Node(Student& stud);
	bool empty();
	void add_after(ptrNode ptr, Student& stud);
	void add_before(ptrNode ptr, Student& stud);
	void print();

	ptrNode get_begin()
	{
		return begin;
	}
	ptrNode get_end()
	{
		return end;
	}
};
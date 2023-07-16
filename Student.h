#pragma once
#include <fstream>
#include <iostream>
#include <string>

class Student
{
private:
	std::string name;
	std::string surname;
	const int n = 5;
	int* marks = new int[n];

public:
	Student() = default;
	Student(std::string _name, std::string _surname, int* arr, int length = 5) : name(_name), surname(_surname)
	{
		for (int i = 0; i < length; ++i)
			marks[i] = arr[i];
	}
	Student(const Student& other);
	Student(std::ifstream& file);
	~Student();

	std::string get_surname();
	std::string get_name();
	int get_n();
	int* get_marks();

	void readFile(std::ifstream& is);
	void writeFile(std::ofstream& out);
	void show();
	double average();
	bool is_all_marks_good();

	bool operator==(Student& other);
	bool operator!=(Student& other);
	bool operator<(Student& other);
	bool operator>(Student& other);

	friend std::ostream& operator<<(std::ostream& out, Student& other)
	{
		out << other.name << ' ' << other.surname;
		for (int i = 0; i < other.get_n(); ++i)
			out << ' ' << other.marks[i];
		return out;
	}

	friend std::istream& operator>>(std::istream& in, Student& other)
	{
		in >> other.name >> other.surname;
		for (int i = 0; i < other.get_n(); ++i)
			in >> other.marks[i];
		return in;
	}
};

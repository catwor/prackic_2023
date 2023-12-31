#include "Student.h"

Student::Student(const Student& other)
{
	name.reserve(21);
	surname.reserve(21);
	name = other.name;
	surname = other.surname;

	for (int i = 0; i < n; ++i)
		marks[i] = other.marks[i];
}

Student::Student(std::ifstream& file)
{
	name.reserve(21);
	surname.reserve(21);
	file >> name;
	file >> surname;

	for (int i = 0; i < n; ++i)
		file >> marks[i];

	file.ignore(32000, '\n');
}

Student::~Student()
{
	delete[] marks;
}

std::string Student::get_surname()
{
	return surname;
}

std::string Student::get_name()
{
	return name;
}

std::string Student::get_all()
{
	std::string all = name + " " + surname;
	for (int i = 0; i < n; ++i)
		all += " " + std::to_string(marks[i]);
	return all;
}

int Student::get_n()
{
	return n;
}

int* Student::get_marks()
{
	return marks;
}

void Student::readFile(std::ifstream& is)
{
	name.reserve(21);
	surname.reserve(21);
	is >> name;
	is >> surname;

	for (int i = 0; i < n; ++i)
		is >> marks[i];

	is.ignore(32000, '\n');
}

void Student::writeFile(std::ofstream& out)
{
	out << name << '\n';
	out << surname << '\n';

	for (int i = 0; i < n; ++i)
		out << marks[i] << ' ';
}

void Student::show()
{
	std::cout << name << ' ' << surname << '\n';

	for (int i = 0; i < n; ++i)
		std::cout << marks[i] << ' ';
}

double Student::average()
{
	double average = 0;

	for (int i = 0; i < n; ++i)
		average += marks[i];

	return average / n;
}

bool Student::is_all_marks_good()
{
	bool flag = true;
	int i = 0;

	while (i < n && flag) {
		if (marks[i] != 4)
			flag = false;
		++i;
	}

	return flag;
}

bool Student::operator==(Student& other)
{
	return this->average() == other.average();
}

bool Student::operator!=(Student& other)
{
	return this->average() != other.average();
}

bool Student::operator<(Student& other)
{
	return this->average() < other.average();
}

bool Student::operator>(Student& other)
{
	return this->average() > other.average();
}

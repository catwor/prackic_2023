#pragma once
#include <iostream>
#include <fstream>

class String20
{
private:
	char* arr;
	const size_t capacity = 20;
public:
	String20();
	String20(char* other);
	String20(const String20& other);
	~String20();

	size_t length();
	const char* c_str() const {
		return arr;
	}
	String20& operator=(const String20& other);
	explicit String20(const std::string& other) {
		arr = new char[capacity + 1] {'\0'};
		size_t i = 0;

		while (other[i] != '\0' && other[i] != '\n' && i != 21) {
			arr[i] = other[i];
			++i;
		}
	}
	bool operator==(const String20& other);
	bool operator!=(String20& other);
	bool operator<(String20& other);
	bool operator>(String20& other);

	friend std::istream& operator>>(std::istream& in, String20& other)
	{
		in.getline(other.arr, static_cast<std::streamsize>(other.capacity) + 1);
		other.arr[other.capacity] = '\0';
		in.clear();
		in.ignore(in.rdbuf()->in_avail(), '\n');

		return in;
	}

	friend std::ifstream& operator>>(std::ifstream& in, String20& other)
	{
		in.getline(other.arr, static_cast<std::streamsize>(other.capacity) + 1);
		other.arr[other.capacity] = '\0';
		in.clear();

		return in;
	}

	friend std::ostream& operator<<(std::ostream& out, String20& other)
	{
		size_t i = 0;

		while (other.arr[i] != '\0') {
			out << other.arr[i];
			++i;
		}

		return out;
	}

	friend std::ofstream& operator<<(std::ofstream& out, String20& other)
	{
		size_t i = 0;

		while (other.arr[i] != '\0') {
			out << other.arr[i];
			++i;
		}

		return out;
	}
};

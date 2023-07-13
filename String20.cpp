#include "String20.h"

String20::String20()
{
	arr = new char[capacity + 1] {'\0'};
}

String20::String20(char* other)
{
	arr = new char[capacity + 1] {'\0'};
	size_t i = 0;

	while (*(other + i) != '\0' && i < capacity)
		arr[i] = other[i];
	arr[capacity] = '\0';
}

String20::String20(const String20& other)
{
	arr = new char[capacity + 1] {'\0'};

	for (size_t i = 0; i < capacity; ++i)
		arr[i] = other.arr[i];
}

String20::~String20() = default;

size_t String20::length()
{
	size_t i = 0;

	while (arr[i] != '\0') {
		++i;
	}

	return i;
}

String20& String20::operator=(const String20& other)
{
	arr = new char[capacity + 1] {'\0'};
	size_t i = 0;

	while (other.arr[i] != '\0') {
		arr[i] = other.arr[i];
		++i;
	}

	return *this;
}

bool String20::operator==(const String20& other)
{
	bool result = true;

	for (int i = 0; i < capacity && result; ++i)
		if (arr[i] != other.arr[i])
			result = false;

	return result;
}

bool String20::operator!=(String20& other)
{
	return !(*this == other);
}

bool String20::operator<(String20& other)
{
	bool result = true;
	bool stop = false;
	int i = 0;

	while (arr[i] != '\0' && other.arr[i] != '\0' && !stop) {
		if (arr[i] != other.arr[i]) {
			result = arr[i] >= other.arr[i];
			stop = true;
		}
		++i;
	}

	return result;
}

bool String20::operator>(String20& other)
{
	bool result = true;
	bool stop = false;
	int i = 0;

	while (arr[i] != '\0' && other.arr[i] != '\0' && !stop) {
		if (arr[i] != other.arr[i]) {
			result = arr[i] <= other.arr[i];
			stop = true;
		}
		++i;
	}

	return result;
}
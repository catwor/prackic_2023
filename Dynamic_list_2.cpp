#include "Dynamic_list_2.h"
#include <functional>

ptrNode find_place(ptrNode begin, Student& stud)
{
	ptrNode p = begin;

	if (stud.is_all_marks_good())
	{
		while (p->marks_sign && p->next)
			p = p->next;
	}

	return p;
}

DLIST::DLIST(const char* file_name)
{
	std::ifstream file(file_name);
	Student stud(file);
	ptrNode place;
	first_Node(stud);

	while (!file.eof()) {

		Student stud(file);
		place = find_place(begin, stud);

		if (place && stud.is_all_marks_good()) {

			if (!place->marks_sign)
				add_before(place, stud);
			else
				add_after(place, stud);
		}

		else
			add_after(end, stud);
	}

	file.close();
}

//--------------------------------------------task3----------------------------------------------
ptrNode find_place_alphabet(ptrNode begin, Student& stud)
{
	ptrNode p = begin;
	std::string surname = stud.get_surname();

	while (p->next && p->surname > surname)
		p = p->next;

	return p;
}

DLIST::DLIST(std::ifstream& file)
{
	Student stud(file);
	ptrNode place;
	first_Node(stud);

	while (!file.eof()) {

		Student stud(file);
		std::string surname = stud.get_surname();
		place = find_place_alphabet(begin, stud);

		if (place) {

			if (place->surname < surname)
				add_after(place, stud);
			else
				add_before(place, stud);
		}

		else
			add_after(end, stud);
	}

	file.close();
}
DLIST::DLIST(const char* file_name, int n)
{
	std::ifstream file(file_name);
	Student stud(file);
	ptrNode place;
	first_Node(stud);

	for(int i=0;i<n-1;++i) {

		Student stud(file);
		place = find_place(begin, stud);

		if (place && stud.is_all_marks_good()) {

			if (!place->marks_sign)
				add_before(place, stud);
			else
				add_after(place, stud);
		}

		else
			add_after(end, stud);
	}

	file.close();
}
DLIST::DLIST(std::ifstream& file, int n)
{
	Student stud(file);
	ptrNode place;
	first_Node(stud);

	for(int i=0;i<n-1;++i) {

		Student stud(file);
		std::string surname = stud.get_surname();
		place = find_place_alphabet(begin, stud);

		if (place) {

			if (place->surname > surname)
				add_after(place, stud);
			else
				add_before(place, stud);
		}

		else
			add_after(end, stud);
	}

	file.close();
}
//-------------------------------------------------------------------------------------------------
void DLIST::first_Node(Student& stud)
{
	begin = new Node(stud.get_surname(), stud.average(), stud.is_all_marks_good());
	end = begin;
	size = 1;
}

bool DLIST::empty()
{
	return begin == nullptr;
}

void DLIST::add_after(ptrNode ptr, Student& stud)
{
	ptrNode p = new Node(stud.get_surname(), stud.average(), stud.is_all_marks_good(), ptr->next, ptr);

	if (ptr == end)
		end = p;
	else
		ptr->next->prev = p;

	ptr->next = p;
	++size;
}

void DLIST::add_before(ptrNode ptr, Student& stud)
{
	ptrNode p = new Node(stud.get_surname(), stud.average(), stud.is_all_marks_good(), ptr, ptr->prev);

	if (ptr == begin)
		begin = p;
	else
		ptr->prev->next = p;

	ptr->prev = p;
	++size;
}

void DLIST::print()
{
	ptrNode ptr = begin;

	while (ptr) {
		std::cout << ptr->surname << ' ' << ptr->average_mark;
		std::cout << '\n';
		ptr = ptr->next;
	}
}
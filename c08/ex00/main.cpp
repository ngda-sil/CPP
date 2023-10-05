#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	// vector 
	std::vector<int> v;

	for (int i = 0; i < 4; i++)
		v.push_back(i*i);
	
	std::cout << "Vector		: ";
	
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	
	std::cout << "\neasyfind(v, 9) 	: " << *easyfind(v, 9) << "\n";
	std::cout << "easyfind(v, 32) : " << *easyfind(v, 32) << "\n";
	std::cout << "v.end() 	: " << *v.end() << "\n\n";

	//list
	std::list<int> l;

	for (int i = 2; i < 7; i++)
		l.push_back(i*i);
	
	std::cout << "List		: ";
	
	for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
		std::cout << *it << " ";
	
	std::cout << "\neasyfind(l, 9) 	: " << *easyfind(l, 9) << "\n";
	std::cout << "easyfind(l, 32) : " << *easyfind(l, 32) << "\n";
	std::cout << "l.end() 	: " << *l.end() << "\n\n";						//*(--l.end())

	//deque
	std::deque<int> d;

	for (int i = -3; i < 3; i++)
		d.push_back(i+i);
	
	std::cout << "Deque		: ";
	
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
		std::cout << *it << " ";
	
	std::cout << "\neasyfind(l, -6) : " << *easyfind(d, -6) << "\n";
	std::cout << "easyfind(l, 320): " << *easyfind(d, 320) << "\n";
	std::cout << "l.end() 	: " << *d.end() << "\n\n";						
	return (0);
}

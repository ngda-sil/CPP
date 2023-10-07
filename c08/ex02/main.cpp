#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::stack<int> stack;
	MutantStack<int> mutantStack;

	//Member function test
	std::cout << "stack.empty() \t\t: " << stack.empty() << std::endl;
	std::cout << CYAN << "mutantStack.empty() \t: " << mutantStack.empty() << RESET << std::endl;	

	std::cout << "--------------------------------" << std::endl;
	
	std::cout << "stack.push(11)" << std::endl;
	stack.push(11);
	std::cout << "stack.push(1111)" << std::endl;
	stack.push(1111);
	std::cout << CYAN << "mutantStack.push(22)" << RESET << std::endl;	
	mutantStack.push(22);
	std::cout << CYAN << "mutantStack.push(2222)" << RESET << std::endl;	
	mutantStack.push(2222);
	std::cout << CYAN << "mutantStack.push(-42)" << RESET << std::endl;	
	mutantStack.push(-42);
	std::cout << CYAN << "mutantStack.push(42)" << RESET << std::endl;	
	mutantStack.push(42);

	std::cout << "--------------------------------" << std::endl;

	std::cout << "stack.empty() \t\t: " << stack.empty() << std::endl;
	std::cout << CYAN << "mutantStack.empty() \t: " << mutantStack.empty() << RESET << std::endl;	

	std::cout << "--------------------------------" << std::endl;

	std::cout << "stack.size() \t\t: " << stack.size() << std::endl;
	std::cout << CYAN << "mutantStack.size() \t: " << mutantStack.size() << RESET << std::endl;

	std::cout << "--------------------------------" << std::endl;

	//LIFO : top == last in
	std::cout << "stack.top() \t\t: " << stack.top() << std::endl;
	std::cout << CYAN << "mutantStack.top() \t: " << mutantStack.top() << RESET << std::endl;

	std::cout << "--------------------------------" << std::endl;


	std::cout << "stack.pop()" << std::endl;
	stack.pop();
	std::cout << CYAN << "mutantStack.pop()" << RESET << std::endl;
	mutantStack.pop();

	std::cout << "--------------------------------" << std::endl;

	std::cout << "stack.top() \t\t: " << stack.top() << std::endl;
	std::cout << CYAN << "mutantStack.top() \t: " << mutantStack.top() << RESET << std::endl;

	std::cout << "--------------------------------" << std::endl;

	std::cout << CYAN << "*mutantStack.begin() \t: " << *mutantStack.begin() << RESET << std::endl;
	std::cout << CYAN << "*++mutantStack.begin() \t: " << *++mutantStack.begin() << RESET << std::endl;
	std::cout << CYAN << "*--mutantStack.end() \t: " << *--mutantStack.end() << RESET << std::endl;
	std::cout << CYAN << "*mutantStack.end() \t: " << *mutantStack.end() << RESET << std::endl;

	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << " | ";
		++it;
		}
		std::cout << std::endl;

		std::stack<int> s(mstack);
	}
	{
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);
		
		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;
		
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << " | ";
		++it;
		}
		std::cout << std::endl;
		//std::stack<int> s(list);
	}

	return(0);
}

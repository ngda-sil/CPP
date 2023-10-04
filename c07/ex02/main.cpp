#include "Array.hpp"
#include <iostream>

int	main()
{
	Array<int>			emptyIntArr;
	Array<char> 		emptyCharArr;
	Array<std::string>	emptyStringArr;

	std::cout << "Construction with no parameter:\n\n";

	std::cout << "SIZE OF : emptyIntArr 		: " << emptyIntArr.size() << "\n"; 
	std::cout << "SIZE OF : emptyCharArr 		: " << emptyCharArr.size() << "\n"; 
	std::cout << "SIZE OF : emptyStringArr	: " << emptyStringArr.size() << "\n\n";  
	
	std::cout << "Trying to access value [2] of empty arrays:\n\n";

	try
	{
		Array<int>			emptyIntArr;
		std::cout << "emptyIntArr[-2]		:	" << emptyIntArr[-2] << "\n";
	}
	catch (std::exception& e) {std::cerr << e.what();}
	try
	{
		Array<char>			emptyCharArr;
		std::cout << "emptyCharArr[2]		:	" << emptyCharArr[2] << "\n";
	}
	catch (std::exception& e) {std::cerr << e.what();}
	try
	{
		Array<std::string>			emptystringArr;
		std::cout << "emptyStringArr[2]	:	" << emptyStringArr[2] << "\n";
	}
	catch (std::exception& e) {std::cerr << e.what();}

	std::cout << "\nConstruction with parameter: n = 5 : element initialized by default\n\n";

	Array<int>			IntArr(5);

	for (unsigned int i = 0; i < 5; i++)
		std::cout << "IntArr[" << i << "]	: " << IntArr[i] << " |	";  // initialized by default : ()
	
	std::cout << "\n\nConstruction by copy & assignment operator :\n\n";

	Array<char>			charArr(3);
	
	for (unsigned int i = 0; i < 3; i++)
		std::cout << "CharArr[" << i << "]	: " << charArr[i] << " |	";

	std::cout << "\n\n charArr[2] = 'd' :\n\n";
	charArr[2] = 'd';

	for (unsigned int i = 0; i < 3; i++)
		std::cout << "CharArr[" << i << "]	: " << charArr[i] << " |	";
	
	Array<char> 	charArrCopy(charArr);

	std::cout << "\n";

	for (unsigned int i = 0; i < 3; i++)
		std::cout << "CharArrCopy[" << i << "]	: " << charArrCopy[i] << " |	";

	std::cout << "\n\ncharArr[1] = 'c'\n";
	charArr[1] = 'c';
	std::cout << "charArrCopy[0] = 'Z'\n\n";
	charArrCopy[0] = 'Z';

	for (unsigned int i = 0; i < 3; i++)
		std::cout << "CharArr[" << i << "]	: " << charArr[i] << " |	";

	std::cout << "\n";

	for (unsigned int i = 0; i < 3; i++)
		std::cout << "CharArrCopy[" << i << "]	: " << charArrCopy[i] << " |	";

	std::cout << "\n";

	Array<std::string>	StringArr1(3);

	StringArr1[0] = "salut";
	StringArr1[1] = " les ";
	StringArr1[2] = "copains !";

	for (unsigned int i = 0; i < 3; i++)
		std::cout << StringArr1[i];

	std::cout << "\n Size of stringArr1: " << StringArr1.size();


	return(0);
}

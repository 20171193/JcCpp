#include <iostream>
#include "JcVector.h"
#include <vector>

int main()
{
	JcVector<int>* myVec = new JcVector<int>();

	myVec->push_back(1);
	myVec->push_back(2);
	myVec->push_back(3);
	myVec->push_back(4);
	myVec->push_back(5);
	myVec->push_back(6);
	myVec->push_back(7);
	myVec->push_back(8);
	std::cout << "size = " << myVec->size() << std::endl;

	myVec->push_back(9);
	myVec->push_back(10);
	std::cout << "size = " << myVec->size() << std::endl;
	
	myVec->pop_back();

	std::cout << "at 9 = " << myVec->at(9) << std::endl;

	delete myVec;


}
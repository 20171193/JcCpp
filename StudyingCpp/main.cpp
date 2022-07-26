#include <iostream>
#include "JcVector.h"
#include "JcSort.h"

int main()
{
	JcVector<int>* myVec = new JcVector<int>();

	myVec->push_back(5);
	myVec->push_back(1);
	myVec->push_back(6);
	myVec->push_back(2);
	myVec->push_back(4);
	myVec->push_back(7);
	myVec->push_back(3);
	myVec->push_back(8);
	
	//JcVector<int>::Iterator iter = myVec->end();	

	for (auto iter = myVec->begin();
		 iter != myVec->end();
		++iter)
	{
		std::cout << *iter << std::endl;
	}

	delete myVec;
}
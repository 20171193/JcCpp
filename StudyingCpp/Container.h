#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include "JcIterator.h"

template<typename T>
class Container 
{
public:
	typedef JcIterator<T> Iterator;

	virtual Iterator begin()
	{

	}
	virtual Iterator end()
	{

	}
};

#endif
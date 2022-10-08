#ifndef __JC_ALGORITHM_H__
#define __JC_ALGORITHM_H__

#include "JcIterator.h"
#include "JcContainer.h"

template<typename T>
class JcAlgorithm
{

// singleton 
private:
	JcAlgorithm() {};
	JcAlgorithm(const JcAlgorithm& other);
	~JcAlgorithm() {};

	static JcAlgorithm* instance;
public:
	static JcAlgorithm* GetInstance()
	{
		if(instance == NULL) instance = new JcAlgorithm
		return instance;
	}
// end singleton

public:
	void merge(JcIterator, JcIterator, JcIterator, JcIterator, JcContainer<T>);
	void sort();
	void mergeSort();

};

JcAlgorithm* JcAlgorithm::instance = nullptr;

#endif
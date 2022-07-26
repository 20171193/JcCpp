#ifndef __JC_ITERATOR_H__
#define __JC_ITERATOR_H__

template <typename T>
class JcIterator
{
private:
	T* curPos;

public:
	JcIterator(T* myPos = nullptr)
	{
		curPos = myPos;
	}

	~JcIterator()
	{
	}

	T& operator*()
	{
		return *curPos;
	}

	JcIterator& operator++()
	{
		++curPos;
		return *this;
	}

	JcIterator& operator--()
	{
		--curPos;
		return *this;
	}

	bool operator==(JcIterator target)
	{
		return curPos == target.curPos;
	}

	bool operator!=(JcIterator target)
	{
		return curPos != target.curPos;
	}
};

#endif
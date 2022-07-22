#ifndef __JCVECTOR_H__
#define __JCVECTOR_H__

#include <iostream>

#define DEFAULT_CAPACITY 8

template<typename T>
class JcVector
{
private:
	int vec_size;
	int vec_capacity;
	T *arr;


public:
	JcVector()
	{
		vec_size = 0;
		vec_capacity = DEFAULT_CAPACITY;
		arr = new T[vec_capacity];
	}
	~JcVector()
	{
		delete[] arr;
	}

	void push_back(T val)
	{
		if (vec_size >= vec_capacity)
		{
			extend();
		}
		arr[vec_size] = val;
		vec_size++;
	}
private:
	void extend()
	{
		// 공간 꽉 참. 여유 공간 확보
		int prevCapacity = vec_capacity;
		vec_capacity += DEFAULT_CAPACITY;
		T* tempArr = new T[vec_capacity];
		// 값 복사
		for (int i = 0; i < prevCapacity; ++i)
		{
			tempArr[i] = arr[i];
		}
		delete[] arr;
		arr = tempArr;
	}

public:
	void pop_back()
	{
		if (!empty())
		{
			arr[vec_size] = 0;
			vec_size--;
		}
	}
	T at(int num)
	{
		return arr[num];
			
	}
	T front()
	{
		return arr[0];
	}
	T back()
	{
		return arr[vec_size];
	}

	bool empty()
	{
		if (arr[0] == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int size()
	{
		return vec_size;
	}
};

#endif
#ifndef __JC_CONTAINER_H__
#define __JC_CONTAINER_H__

#include "JcIterator.h"
#include <iostream>


template <typename T>
class JcContainer
{
private:
	JcContainer<T>* sorted;

protected:
	typedef JcIterator<T> Iterator;

public:

	virtual Iterator begin() { return NULL; }

	virtual Iterator end() { return NULL; }

	virtual Iterator find_iter(Iterator start, Iterator end, T val) 
	{
		for (Iterator ptr = start; ptr != end; ++ptr)
		{
			if (*ptr == val)
			{
				return ptr;
			}
		}
		return nullptr;
	}

	virtual void swap(Iterator val_1, Iterator val_2) 
	{
		if (((val_1 != nullptr) && (val_2 != nullptr))
			&& ((*val_1 != NULL && *val_2 != NULL)))
		{
			T temp_val = *val_1;
			*val_1 = *val_2;
			*val_2 = temp_val;

			Iterator temp_iter = val_1;
			val_1 = val_2;
			val_2 = temp_iter;
		}
	}

	/*virtual JcContainer<T> merge(JcContainer<T> t_ary, int left, int right) 
	{
		JcContainer<T> temp_ary[sizeof(t_ary)/sizeof(T)](0);

		int l_ptr = left;
		int r_ptr = right;

		while (1)
		{
			if (t_ary[l_ptr] <= t_ary[(l_ptr+1)])
			{
				temp_ary[l_ptr] = t_ary[l_ptr];
				++l_ptr;
			}
			else
			{
				temp_ary[l_ptr] = t_ary[(l_ptr + 1)];

			}
		}
	}
	virtual JcContainer<T> merge_sort(JcContainer<T> t_ary, int start, int end)
	{
		if (start < end)
		{
			int mid = (start + end) / 2;
			merge_sort(t_ary, start, mid);
			merge_sort(t_ary, mid + 1, end);
			merge(t_ary, start, end);
		}
		return t_ary;
	}*/
};


#endif
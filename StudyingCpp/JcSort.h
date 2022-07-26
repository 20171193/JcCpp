//#ifndef __JC_SORT_H__
//#define __JC_SORT_H__
//
//enum SortType
//{
//	UP = 1,
//	DOWN,
//};
//
//template <typename Array>
//class JcSort
//{
//private:
//
//public:
//	JcSort() 
//	{
//
//	}
//	~JcSort()
//	{
//
//	}
//
//	void MergeSort(SortType type, Array* t_ary, int left, int right)
//	{
//
//		switch (type)
//		{
//		case UP:	// 오름차순 정렬
//			int mid = (left+right) / 2;
//			MergeSort(UP, t_ary, left, mid);
//			MergeSort(UP, t_ary, mid + 1, right);
//		case DOWN:	// 내림차순 정렬
//			int mid = (left + right) / 2;
//			MergeSort(DOWN, t_ary, left, mid);
//			MergeSort(DOWN, t_ary, mid + 1, right);
//
//		}
//
//	}
//
//	Array Merge(Array* t_ary, int left, int mid, int right)
//	{
//		
//	}
//
//
//};
//
//#endif
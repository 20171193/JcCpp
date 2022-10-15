//// F(x) 는 x를 제곱하여 10진수로 표현, 마지막 K자리를 취한 값이 x와 같으면 1 아니면 0을 반환하는 함수
//
//// 입력한 값 x에 대한 함수 F(x)를 작성.  1 <= x <= 2,100,000,000 
//
//// 나누었을때 몫이 없어진다 -> 그 다음자리
//
//#include <iostream>
//#include <list>
//
//int F(int num)
//{
//	int numLength = 0;
//	
//	int temp = num;
//	int squareNum = num * num;
//
//	while (temp != 0)
//	{
//		temp = temp / 10;
//		++numLength;
//	}
//
//	int checkNum = 10;
//	
//	for (int i = 1; i < numLength; ++i)
//	{
//		checkNum = checkNum * 10;
//	}
//
//	std::cout << "입력 값 = " << num << std::endl;
//	std::cout << "제곱 값 = " << squareNum << std::endl;
//	std::cout << "비교 대상 값 = " << squareNum % checkNum << std::endl;
//
//	if ((squareNum % checkNum) == num)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	std::cout << F(1) << std::endl;
//
//	return 0;
//}
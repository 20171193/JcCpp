// d(n) = n의 각 자릿수 숫자들과 n 자신을 더한 숫자
// n = d(n) 의 generator

// generator가 두개인 수, 없는 수가 있음.
// 없는 수를 self-number라고 함.

// 1부터 5000까지의 self-number를 모두 더해 출력하는 프로그램을 작성.

// ex) d(1) = 1 + 1 = 2, d(20) = 2 + 0 + 20, d(31) = 3 + 1 + 31 = 35

#include <iostream>

int haveList[5000] = { 0, };

int main()
{
	for (int i = 1; i <= 5000; ++i)
	{
		int dummy_num = i;
		int have_num = i;
		while (dummy_num > 0)
		{
			have_num += dummy_num % 10;
			dummy_num /= 10;
		}
		haveList[have_num] = 1;
	}
	
	int result = 0;
	for (int a = 1; a <= 5000; ++a)
	{
		if (haveList[a] == 0)
		{
			std::cout << "self-number = " << a << std::endl;
			result += a;
		}
	}

	std::cout << "result = " << result << std::endl;

	return 0;
}


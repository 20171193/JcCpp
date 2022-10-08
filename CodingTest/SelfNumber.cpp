// d(n) = n�� �� �ڸ��� ���ڵ�� n �ڽ��� ���� ����
// n = d(n) �� generator

// generator�� �ΰ��� ��, ���� ���� ����.
// ���� ���� self-number��� ��.

// 1���� 5000������ self-number�� ��� ���� ����ϴ� ���α׷��� �ۼ�.

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


// F(x) �� x�� �����Ͽ� 10������ ǥ��, ������ K�ڸ��� ���� ���� x�� ������ 1 �ƴϸ� 0�� ��ȯ�ϴ� �Լ�

// �Է��� �� x�� ���� �Լ� F(x)�� �ۼ�.  1 <= x <= 2,100,000,000 

// ���������� ���� �������� -> �� �����ڸ�

#include <iostream>
#include <list>

int F(int num)
{
	int numLength = 0;
	
	int temp = num;
	int squareNum = num * num;

	while (temp != 0)
	{
		temp = temp / 10;
		++numLength;
	}

	int checkNum = 10;
	
	for (int i = 1; i < numLength; ++i)
	{
		checkNum = checkNum * 10;
	}

	std::cout << "�Է� �� = " << num << std::endl;
	std::cout << "���� �� = " << squareNum << std::endl;
	std::cout << "�� ��� �� = " << squareNum % checkNum << std::endl;

	if ((squareNum % checkNum) == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	std::cout << F(1) << std::endl;

	return 0;
}
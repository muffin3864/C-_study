
#include <stdio.h>

int Add(int a, int b)
{
	a;
	return a + b;
}


// �Լ�
int main()
{
	int a = 100;
	a;
	int iData = Add(100, 200);

	iData = Add(400, 100);
	
	iData = Add(600, 300);
	
	iData = Add(200, 500);




	// �ݺ���
	//for(/*�ݺ��� �ʱ�ȭ*/; /*�ݺ��� ���� üũ*/; /*�ݺ��� ����*/)
	//{

	//}

	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("Output Test\n");
	}


	/*int i = 0;
	while (i < 2)
	{
		printf("Output Test\n");

		++i;
	}*/

	int i = 0;
	int i2 = 2;


	// �ܼ�
	// printf
	printf("abcdf %d \n", 10);
	printf("abcdf %f \n", 3.14f);

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i);
	}


	//scanf

	int iInput = 0;
	scanf_s("%d", &iInput);



	// �Լ��� ����ϴ� �޸� ����
	// ���� �޸� ����




	return 0;
}

// ����Ű

// ������ ���� �ּ�			: Ctrl + k, c
// ������ ���� �ּ� ����	: ctrl + k, u
// Alt Drag

// �����
// ����� ���� : F5
// ������ߴ������� �ڵ� ����

// �ߴ��� ���� �� ���� : F9
// ����� ��, ���� ���� : F10
// ����� ��, ���� ����(�Լ� ����) : F11
// ����� ��, ����� �����ϱ� : shift + F5

#include <stdlib.h>
#include <stdio.h>


void Test(int* a)
{
	*a = 500;
}

int main()
{
	// ������ ����
	// �ڷ��� ������
	int* pInt = nullptr;

	// �ּҸ� ����

	char* pChar = nullptr;
	short* pShort = nullptr;


	// ������ ������ ũ��� 8 ����Ʈ��.
	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;
	pInt += 1;

	// pInt �� int* ���� �̱� ������, ����Ű�� ���� int�� �ؼ��Ѵ�.
	// ���� �ּҰ��� 1 �����ϴ� �ǹ̴� ���� int ��ġ�� �����ϱ� ���ؼ�
	// sizeof(int) ������ �����ϰ� �ȴ�.


	// �����Ϳ� �迭
	// �迭�� Ư¡
	// 1. �޸𸮰� �������� �����̴�.
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�.

	int iArr[10] = {};

	// int ������ ����
	*(iArr + 0) = 10;	// iArr[0] = 10;
	*(iArr + 1) = 10;	// iArr[1] = 10;

	

	// ������ ���� Ȯ�� ����
	// ���� 1.
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* pI = (int*)sArr;

	int iData = *((short*)(pI + 2));

	printf("1�� ���� ���� : %d\n", iData);

	// ���� 2.
	char cArr[2] = { 1, 1 };

	short* pS = (short*)cArr;

	iData = *pS;

	printf("2�� ���� ���� : %d\n", iData);


	int a = 100;

	Test(&a);

	printf("��� : %d\n", a);

	//scanf_s("%d", &a);



	// const
	volatile const int cint = 100;

	// ���ȭ
	// l-value : ����
	// r-value : ���
	int ii = 10;
	
	pInt = (int*)&cint;
	*pInt = 300;
	printf("��� : %d\n", cint);



	return 0;
}
#include <stdio.h>

// ������ ����
// 1. ��������
// 2. ��������
// 3. ��������(static)
// 4. �ܺκ���(extern)

// �޸� ����
// 1. ���� ����
// 2. ������ ����
// 3. �б� ����(�ڵ�, ROM)
// 4. �� ����



// ��������
int g_i = 0;	// Data ����

// Data ���� Ư¡
// ���α׷� ���� �� ����
// ���α׷� ���� �� ����

#include "func.h"
#include "common.h"


int Test()
{
	static int i = 0;

	++g_i;
	++i;

	return i;
}


int main()
{
	g_iStatic = 100;
	g_iExtern = 500;

	// F12 : ���� ��ġ�� �̵�
	Add(0, 0);

	Test();
	Test();
	Test();
	Test();
	int iCall = Test();

	g_i = 0;
	printf("Test �Լ� ȣ�� Ƚ�� : %d\n", iCall);


	// ������ ����
	// �ּҸ� �����ϴ� ����
	// �ڷ��� + * ������
	// �ش� �����Ϳ��� ���޵� �ּҸ� �ؼ��ϴ� ����
	int i = 100;
	float f = 3.f;

	int* pInt = (int*)&f;
	
	// �ּҷ� ����
	i = *pInt;

	// �ּ��� ����
	// BYTE



	return 0;
}
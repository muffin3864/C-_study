#include <stdlib.h>
#include <stdio.h>

// �޸� ����
// 1. ����
// 2. ������ 
// 3. ��
// 4. ROM(�ڵ�)




void Output(const int * pI)
{
	int i = *pI;

}


int main()
{
	// 1. const
	const int i = 100;

	// const �� ������
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// =============
	// const  ������
	// =============
	int b = 0;
	const int* pConstInt = &a;

	//*pConstInt = 100;
	pConstInt = &b;

	// =============
	// ������ const
	// =============
	int* const pIntConst = &a;

	*pIntConst = 400;
	//pIntConst& b;

	// �ʱ�ȭ �� ����Ų ��� ����Ŵ, ����Ű�� ������ ���� �� �� ����
	const int* const pConstIntConst = nullptr;


	{
		int a = 0;
		const int* pInt = &a;
		// *pInt = 100;
		// a = 100;

		int* p = &a;
		*p = 100;
	}


	a = 100;
	Output(&a);

	// void *
	// 1. ������ �ڷ����� ������ ����
	// 2. ��� Ÿ���� ������ �ּҵ� �� ���� ����
	// 3. ������ �Ұ��� 
	// 4. �ּ� ���� �Ұ���
	void* pVoid = nullptr;
	float* pFloat = nullptr;

	{
		int a = 0;
		float f = 0.f;
		double d = 0.;
		long long ll = 0;

		pVoid = &a;
		pVoid = &f;
		pVoid = &d;
		pVoid = &ll;

		//*pVoid;
		//pVoid + 1;
	}

	{
	// ����
	wchar_t wc = 49;
	short s = 49;

	char c = 1;
	c = '1';



	wc = 459;
	"4 59";



	int i = 0;
	}



	return 0;
}

// ����Ű
// Crtl + Shift + Space
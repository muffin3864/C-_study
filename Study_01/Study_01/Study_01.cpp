

#define HUNGRY 0x1
#define THIRSTY 0x2
#define TIRED 0x4
#define FIRE 0x8 

#define COLD 0x10
#define POISON 0x20
#define POISON 0x20
#define POISON 0x40
#define POISON 0x80

#define POISON 0x100
#define POISON 0x200
#define POISON 0x400
#define POISON 0x800


// 1. ������
// 2. ��������


// �ּ�
// ����, ����, �ڵ�� �νĵ��� �ʴ´�.

// ��������
int global = 0;

int Add(int left, int right)
{
	return left + right;
}

// �Լ�.
int main()
{
	// �ڷ��� (ũ�� ����, byte) Data Type
	// ������ : char(1), short(2), int(4), long(4), long long(8)
	// �Ǽ��� : float(4), double(8)
	int i = 0;

	// 1����Ʈ�� ����� ǥ��
	// 256 ���� -> 0 ~ 255
	unsigned char c = 0;
	c = 0;
	// c = 255;
	c = -1;

	// 1����Ʈ�� ���, ���� �Ѵ� ǥ��
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = -1;

	// ���� ���� ã��(2�� ������)
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�.

	int a = 4 + (int)4.0;

	// ����ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���
	// �Ǽ� ǥ������� ���е��� �����Ѵ�.
	// ���� double(8) �ڷ����� float(4) ���� �� �Ʒ��� �Ҽ�������
	// ��Ȯ�ϰ� ǥ���� �����ϴ�.

	// ������ ��������, �Ǽ��� �Ǽ����� �����ϵ�,
	// �� ǥ������� �� �����ڰ� ����� ��� ��������� ��ȯ����.
	float f = 10.2415f + (float)20;

	// �Ǽ��� ����� ���� ��� �Ҽ��� �ڿ� f�� ���̸� float �ڷ�������,
	// f�� ������ ������ double �ڷ������� �����Ѵ�.
	// 0.1f; 0.1;


	// ������
	// ���� ������, =

	// ��� ������
	// +, -, *, /, %(��ⷯ��, ������, �ǿ����ڰ� ��� ����)
	// ++, -- (���� ������)
	// �� �ܰ� ���� �Ǵ� ����
	int data = 10 + 10;
	// data = data + 20;
	data += 20;

	data = (int)(10.f / 3.f);


	data = 0;
	++data;	// ����(��ġ)
	data++;	// ����(��ġ)
	// ���� �����ڷ� ����ϴ� ���, ������ �켱������ ���� �������� �и���.


	data = 0;

	a = 10;
	data = a++;	// 10
	data = ++a;	// 11

	data = 0;
	data--;
	data--;

	// �� ������
	// !(��), &&(And), ||(Or)
	// ��(true), ����(false)
	// �� : 0�� �ƴ� ��, �ַ� 1
	// ���� : 0
	bool truefalse = false;
	bool Istrue = 100;

	Istrue = true;
	Istrue = !Istrue;

	int iTrue = 100;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 0 || 0;

	// �� ������
	// ==, !=, <, <=, >, >=
	// ��, ����


	// ����
	// if, else
	data = 0;
	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// if �� ���� ��� ����
	}
	else
	{
		// if �� ������ ��� ����
	}


	// switch case

	int iTest = 20;
	switch (iTest)
	{
	case 10:
	case 20:
	case 30:



		break;
	default:

		break;
	}


	if (iTest == 10 || iTest == 20 || iTest == 30)
	{

	}
	else if (iTest == 20)
	{

	}
	else
	{

	}


	// ���� ������
	// :?
	iTest == 20 ? iTest = 100 : iTest = 200;

	// ���� �ǹ�
	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}


	// ��Ʈ ������
	// ����Ʈ <<, >>
	unsigned char byte = 13;
	byte <<= 3;	// 2^n ���
	byte >>= 2; // 2^n ���� ��

	// ��Ʈ ��(&), ��(|), xor(^), ����(~)
	// ��Ʈ������ ������ ����,
	// & �Ѵ� 1�� ��� 1
	// | ���� �ϳ��� 1�̸� 1
	// ^ ������ 0, �ٸ��� 1
	// ~ 1�� 0����, 0�� 1��

	unsigned int iStatus = 0;


	// ���� �߰�
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// ���� Ȯ��
	if (iStatus & THIRSTY)
	{

	}

	// Ư�� �ڸ� ��Ʈ ����
	iStatus &= ~THIRSTY;


	// ����
	// 1. ��������
	// 2. ��������
	// 3. ��������
	// 4. �ܺκ���





	// ���� ����
	int iName = 0;

	// ��ȣ �ȿ� ����� ����(�Լ�, ����)
	{
		// ������ ��Ģ
		int iName = 100;
		iName;
		{
			{

			}
		}
	}


	iName = 100;

	// �Լ�
	data = Add(10, 20);



	return 0;
}
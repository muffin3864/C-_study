

// �ּ�
// ����, ����, �ڵ�� �νĵ��� �ʴ´�.

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
	// �� ǥ������� �� �����ڰ� ����� ��� ���������� ��ȯ����.
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



	
	return 0;
}
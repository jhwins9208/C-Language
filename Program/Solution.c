#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	//int array[5];

	//// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	//for (int i = 0; i < 5; i++)
	//{
	//	array[i] = (i + 1) * 100;
	//	printf("array[%d]�� �� : %d\n", i, array[i]);
	//}

	//// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	//// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	//// ������ ������ �˴ϴ�.

	//int list[] = { 10,20,30,45 };
	//
	//int size = sizeof(list) / sizeof(int);

	//printf("�迭�� ������ : %d\n", size);

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	//int* ptr = NULL;

	//int intList[ ] = { 1,2,3,4,5 };
	//
	//ptr = intList;

	//printf("ptr ������ �� : %p\n", ptr);
	//printf("intList �迭�� ���� �ּ� : %p\n", intList);

	//ptr = ptr + 1;

	//*ptr = 99;

	//printf("ptr ������ �� : %p\n", ptr);
	//printf("ptr ������ ����Ű�� �� : %d\n", *ptr);
	//printf("intList �迭[1]�� �ּ� : %p\n", &intList[1]);

	// �迭�� �������� �޸� ������ ������, �迭�� �̸��� �迭��
	// ���� �ּҸ� �ǹ��մϴ�.


#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ����
	// ������ �����Դϴ�.

	//const char * string = "Computer";

	//// *string[0] = 'A'; (ERROR)

	//// %s : ���ڿ��� ����ϴ� ���� ������
	//printf("string ������ �� : %s\n", string);

	//// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� �����
	//// ����Ű���� �� �� ������, ���ڿ� ����� ������ ����
	//// �� �б� ���� ������ ����Ǳ� ������ ���ڿ���
	//// ���� ������ �� �����ϴ�.

	//string = "Hello";

	//printf("string ������ �� : %s\n", string);
	
	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ�
	// ũ�Ⱑ �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ�
	// ���� ���ڰ� �߰��˴ϴ�.

	// [A][l][i][s][t][a][r][\0][][]
	//char name[10] = { "Alistar" };

	//printf("name ������ �� : %s\n", name);

	//name[4] = '\0';

	//// ���ڿ��� �����ϰ� �Ǹ� �� �������� ��ȿ��
	//// ���ڱ��� �޸� ������ ����˴ϴ�.
	//printf("name ������ �� : %s\n", name);

	//// ���ڿ��� ��� ���� �������� �޸� ��������
	//// ����Ǿ� ������, ���� �迭 ���̿� ��ȿ�� ���ڸ�
	//// �ְ� �Ǹ� ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�.

#pragma endregion

#pragma region �ִ񰪰� �ּڰ�

	// [10] [22] [35] [2] [5]
	int dataList[] = { 10,22,35,2,5 };

	int max = 0;
	int min = 0;
	// �ִ� : 35
	// �ּڰ� : 2

	int arraySize = sizeof(dataList) / sizeof(int);

	max = dataList[0];
	min = dataList[0];

	for (int i = 0; i < arraySize; i++)
	{
		if (max < dataList[i])
		{
			max = dataList[i];
		}
	}

	printf("dataList�� �ִ� : %d\n", max);

	for (int i = 0; i < arraySize; i++)
	{
		if (min > dataList[i])
		{
			min = dataList[i];
		}
	}

	printf("dataList�� �ּڰ� : %d\n", min);

#pragma endregion

}
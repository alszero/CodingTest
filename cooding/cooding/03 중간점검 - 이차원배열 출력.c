#include <stdio.h>

int main(void)
{
	//�������迭 �ƹ��ų� ������ ������ ���Ҹ� ����ϱ�
	//int arr[3][4] = {
	//	{ 1,2,3,4 },
	//	{5,6,7,8 },
	//	{9,10,11,12 }
	//};
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
	//{
	//	for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++) {
	//		printf("%d", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	////���ڿ��� ���̸� ���Ͻÿ�
	//char str[300] = "Hello kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk";
	//int length = 0;
	//for (int i = 0; i < str[i]; i++)length++;
	//printf("Length of string '%s': %d\n", str, length);
	/*char str[30] = "Hello";
	int length = 0;
	for (int i = 0; i < str[i]; i++) length++;
		printf("length of string %d\n", length);*/

	char str[30] = "Hello";
	int length = 0; //���ڿ��� ����

	//���ڷ� �Ǻ��� ��� length�� ī����(1�� ����)
	for (int i = 0; str[i] != '\0'; i++)
	{
			length++;
	}
	printf("���̴� %d", length);
	return 0;
}
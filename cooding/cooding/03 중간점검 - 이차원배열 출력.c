#include <stdio.h>

int main(void)
{
	//이차원배열 아무거나 만들어보고 각각의 원소를 출력하기
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

	////문자열의 길이를 구하시오
	//char str[300] = "Hello kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk";
	//int length = 0;
	//for (int i = 0; i < str[i]; i++)length++;
	//printf("Length of string '%s': %d\n", str, length);
	/*char str[30] = "Hello";
	int length = 0;
	for (int i = 0; i < str[i]; i++) length++;
		printf("length of string %d\n", length);*/

	char str[30] = "Hello";
	int length = 0; //문자열의 길이

	//문자로 판별될 경우 length를 카운팅(1씩 증가)
	for (int i = 0; str[i] != '\0'; i++)
	{
			length++;
	}
	printf("길이는 %d", length);
	return 0;
}
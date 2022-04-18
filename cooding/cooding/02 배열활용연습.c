#include <stdio.h>

//배열 요소중 최대값과 그에 해당하는 idx값을 구하시오
void getMax(int* arr, int length)
{
	int temp = -1; //비교대상
	int idx = 99;//인덱스값

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp) {
			temp = arr[i];
			idx = i;
		}
	}

	printf("최대값은:%d 인덱스 값은:%d \n", temp, idx);
}

void getMin(int* arr, int length)
{
	int temp = 100;
	int idx = 99;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < temp) {
			temp = arr[i];
			idx = i;
		}
	}

	printf("최소값은:%d 인덱스 값은:%d \n", temp, idx);
}
int main(void) {
	//최대값은 14(arr[9])
	int arr1[10] = { 8,5,1,6,4,9,10,7,11,14 };
	int temp = 100; //비교대상
	int idx = 99; //인덱스 값
	getMax(arr1, 10);
	getMin(arr1, 10);
	/*for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	{
		if (arr1[i] <  temp) {
			temp = arr1[i];
			idx = i;
		}
	}
	printf("최소값은:%d 인덱스 값은:%d \n", temp, idx);*/
	return 0;
}
#include <stdio.h>

int main(void) {
	//�ִ밪�� 14(arr[9])
	int arr[10] = { 8,5,1,6,4,9,10,7,11,14 };
	//int max = arr[0];
	int temp = -1; //�񱳴��
	int idx = 99;
	//�迭 ����� �ִ밪�� �׿� �ش��ϴ� idx���� ���Ͻÿ�
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > temp) {
			temp = arr[i];
			idx = i;
		}
	}
	
	printf("�ִ밪��:%d �ε��� ����:%d \n", temp, idx);
	/*for (int i = 0; i < 10; i++) {
		if (arr[i] > max) max = arr[i];
	}
	printf("max = %d\n", max);*/
	return 0;
}
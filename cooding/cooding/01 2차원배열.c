#include <stdio.h>

int main(void) {
	int arr[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//�Ǽ� 1 idx ���� �ʰ� + 2���� ���
	
	// �ݺ�Ƚ���� 12�� ����(�������� ���� �ڵ�)
	// sizeof(arr) �迭 arr�� ũ��: 4*12 = 48
	// sizeof(int) int�� ������ ũ��: 4
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
}
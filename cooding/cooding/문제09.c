#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// answer ������ ��û����� ����ִ� �迭
// shirt_size[0]: "XS" ������ ��û���� ��
// shirt_size[1]: "S" ������ ��û���� ��
// shirt_size[2]: "M" ������ ��û���� ��
// shirt_size[3]: "L" ������ ��û���� ��
// shirt_size[4]: "XL" ������ ��û���� ��
// shirt_size[5]: "XXL" ������ ��û���� ��

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	// ���⿡ �ڵ带 �ۼ����ּ���.
	// shirt_size�� �ִ� ��� ���Ҹ� ������ counting
	for (int i = 0; i < shirt_size_len; i++) {
		// shirt_size[i]�� "XS"�� anser[0]++
		// shirt_size[i]�� "S"�� anser[1]++
		// shirt_size[i]�� "M"�� anser[2]++
		// shirt_size[i]�� "L"�� anser[3]++
		// shirt_size[i]�� "XL"�� anser[4]++
		// shirt_size[i]�� "XXL"�� anser[5]++
	}
	return answer;
}


int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" }; //������ ����
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);



























	printf("solution �Լ��� ��ȯ ���� {");
	for (int i = 0; i < 6; i++) {
		if (i != 0)
		printf(", ");
		printf("%d", ret[i]);
	}
	printf("} �Դϴ�.\n");
}

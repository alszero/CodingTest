#include <string.h>
#include <stdio.h>

int main(void)
{
	// �迭�� 20���� ������ ��������, ������ ���̴� 3
	char str[20] = "YSY";

	// ������ ���̸� ���ϴ� �Լ�
	int length = strlen(str);
	printf("%d\n", length);

	// ���ڿ� ���� strcpy(������ ���, ������ ���ڿ�)
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s\n", copy_str);

	// ���ڿ� �����̱� strcat(������ ���, ������ ���ڿ�)
	strcat(copy_str, "BLY");
	printf("%s\n", copy_str);

	// ���ڿ� ���ϱ�
	if (strcmp(str, "YSY") == 0)
		printf("�缭�� �Դϴ�. \n");
	else
		printf("�缭���� �ƴմϴ�. \n");

	// �迭�� 20���� ���� �����, ������ ���̴� 3
	char str1[20] = "KMY";

	// ������ ���̸� ���ϴ� �Լ� strlen
	int length1 = strlen(str1);
	printf("%d\n", length1);

	// ���ڿ� ���� strcpy(������, ���繮�ڿ�)
	char copy_copy[10];
	strcpy(copy_copy, str1);
	printf("%s\n", copy_copy);

	//���ڿ� �����̱� strcat(������ ���, ������ ���ڿ�)
	strcat(copy_copy, "HIHI");
	printf("%s\n", copy_copy);

	//���ڿ� ���ϱ�
	if (strcmp(str, "KMKM") == 0) {
		printf("��ο��Դϴ�.\n");
	}
	else {
		printf("��ο��� �ƴϳ׿�\n");
	}


	// ���� 1 ���ڿ��� ���� ���ϱ�
	char sstr[30] = "samgyetang";
	int llength = strlen(sstr);
	printf("������� ���̴� %d\n", llength);

	// ���� 2 copy_sstr�� "iceshu" ����ֱ�(�����ϱ�)
	char copy_sstr[30];
	strcpy(copy_sstr, "iceshu");
	printf("������ ���ڿ��� %s \n", copy_sstr);

	// ����3 copy_sstr�� "delicious" �����̱�
	strcat(copy_sstr, "delicious");
	printf("������ ���ڿ��� %s \n", copy_sstr);

	// ����4 "BMW"�� "benz"�� �� ���ڿ��� ������ �ٸ����� �Ǻ�
	if (strcmp("BMW", "benz") == 0)
		printf("�� ���ڿ��� �����ϴ�.\n");
	else
		printf("�� ���ڿ��� ���� �ʽ��ϴ�.\n");
}

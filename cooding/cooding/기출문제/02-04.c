#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// words �׳� ���ڿ��� �� �ִ� ��
// 5���̻��� ���ڿ��� �ɷ��� �ִ´�
char* solution(char* words[], int words_len) {
    char* answer = "";
    // words[0]�� 5���� �̻��̸�
        // answer�� words[0] �߰�
    for(int i=0; i<words_len; i++)
    if (strlen(words[i]) >= 5)
        strcat(answer, words[i]);
    
    // words[1]�� 5���� �̻��̸�
        // answer�� words[1] �߰�
    // words[2]�� 5���� �̻��̸�
        // answer�� words[2] �߰�
    // words[3]�� 5���� �̻��̸�
        // answer�� words[3] �߰�
    // words[4]�� 5���� �̻��̸�
        // answer�� words[4] �߰�

    return answer;
}

int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);
}
//����9498��
//���� ������ �Է¹޾� 90 ~100���� A, 80 ~89���� B, 70 ~79���� C, 60 ~69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ���� ������ �־�����.���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
//
//���
//���� ������ ����Ѵ�.

#include <stdio.h>

int main() {

	int score;

	printf("������ �Է� ���ּ���. >>> ");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100) {
		printf("A");
	}
	else if (score >= 80 && score <= 89) {
		printf("B");
	}
	else if (score >= 70 && score <= 79) {
		printf("C");
	}
	else if (score >= 60 && score <= 69) {
		printf("D");
	}
	else if (score >= 0 && score <= 59) {
		printf("F");
	}
	else {
		printf("�� �� �Է��߽��ϴ�.");
	}

	return 0;
}

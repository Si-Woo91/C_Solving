//2525�� ���� �ð�
//
//����
//KOI ���ڿ����� �ǰ��� ���� ���ִ� ������������ �丮�� �����ϰ� ����� �ΰ����� ������ �����Ϸ��� �Ѵ�. �ΰ����� ������ ����ϴ� ����� ������ ���� ���� ���� ��Ḧ �ΰ����� ���쿡 ������ �ȴ�. �׷��� �ΰ����� ������ ���챸�̰� ������ �ð��� �� ������ �ڵ������� ����Ѵ�. 
//
//����, KOI ������ �ΰ����� ���� �ո鿡�� ����ڿ��� ������������ �丮�� ������ �ð��� �˷� �ִ� ������ �ð谡 �ִ�. 
//
//�����������̸� �����ϴ� �ð��� ���챸�̸� �ϴ� �� �ʿ��� �ð��� �д����� �־����� ��, ���챸�̰� ������ �ð��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ��� ���� �ð��� ���´�. ���� �ð��� �� A (0 �� A �� 23) �� �� B (0 �� B �� 59)�� ������ ��ĭ�� ���̿� �ΰ� ������� �־�����. �� ��° �ٿ��� �丮�ϴ� �� �ʿ��� �ð� C (0 �� C �� 1,000)�� �� ������ �־�����. 
//
//���
//ù° �ٿ� ����Ǵ� �ð��� �ÿ� ���� ������ ���̿� �ΰ� ����Ѵ�. (��, �ô� 0���� 23������ ����, ���� 0���� 59������ �����̴�. ������ �ð�� 23�� 59�п��� 1���� ������ 0�� 0���� �ȴ�.)

#include <stdio.h>


int main() {

	int time[2];
	int cook;
	
	for (int i = 0; i < 2; i++) {

		if (i == 0) {
			printf("�� �� �Դϱ�?>>");
		}
		else {
			printf("�� �� �Դϱ�?>>");
		}
		scanf_s("%d", &time[i]);
	}

	printf("�丮�ϴ� �� �ʿ��� �ð� >> ");
	scanf_s("%d", &cook);


	int h = time[0];
	int m = time[1];

	if (0 <= h && h <= 23) {
		if (0 <= m && m <= 59) {

			h += cook / 60;
			m += cook % 60;

			if (m >= 60) {
				h += 1;
				m -= 60;
			}

			if (h >= 24) {
				h -= 24;
			}

			printf("%d�� %d�� �Դϴ�.", h, m);

		}
		else {
			printf("�� �� �Է��߽��ϴ�.");
		}
	}
	else {
		printf("�� �� �Է� �߽��ϴ�.");
	}


	return 0;


}
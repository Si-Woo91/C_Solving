#include <stdio.h>
#include <iostream>

//2884�� �˶� �ð�
//
//����
//����̴� ���� ��ħ �˶��� ��� �Ͼ��. �˶��� ��� �ٷ� �Ͼ�� �����̰�����, �׻� ���ݸ� �� �ڷ��� ���� ������ ���� �б��� �����ϰ� �ִ�.
//
//����̴� ��� ����� �����غ�������, ���ݸ� �� �ڷ��� ������ �� � �͵� ���� ���� ������.
//
//�̷� ����̸� �ҽ��ϰ� ���� â���̴� �ڽ��� ����ϴ� ����� ��õ�� �־���.
//
//�ٷ� "45�� ���� �˶� �����ϱ�"�̴�.
//
//�� ����� �ܼ��ϴ�. ���� �����Ǿ� �ִ� �˶��� 45�� �ռ��� �ð����� �ٲٴ� ���̴�. ������ �˶� �Ҹ��� ������, �˶��� ���� ���� �� �� ���̱� �����̴�. �� ����� ����ϸ�, ���� ��ħ �� ��ٴ� ����� ���� �� �ְ�, �б��� �������� �ʰ� �ȴ�.
//
//���� ����̰� ������ �˶� �ð��� �־����� ��, â������ ����� ����Ѵٸ�, �̸� ������ ���ľ� �ϴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �� ���� H�� M�� �־�����. (0 �� H �� 23, 0 �� M �� 59) �׸��� �̰��� ���� ����̰� ������ ���� �˶� �ð� H�� M���� �ǹ��Ѵ�.
//
//�Է� �ð��� 24�ð� ǥ���� ����Ѵ�. 24�ð� ǥ������ �Ϸ��� ������ 0:0(����)�̰�, ���� 23:59(������ ���� 1�� ��)�̴�. �ð��� ��Ÿ�� ��, ���ʿ��� 0�� ������� �ʴ´�.
//
//���
//ù° �ٿ� ����̰� â������ ����� ����� ��, �����ؾ� �ϴ� �˶� �ð��� ����Ѵ�. (�Է°� ���� ���·� ����ϸ� �ȴ�.)


int main() {

	int h;
	int m;

	printf("�� �� �ΰ���?\n");
	scanf_s("%d", &h);

	if (h < 0 || 24 < h) {							// �ð� ����

		printf("�� �� �Է��߽��ϴ�.\n");

	}
	else {

		printf("�� �� �ΰ���?\n");
		scanf_s("%d", &m);

		if (0 <= m && m < 59) {						// �� ����
			if (m < 45) {
				h--;								// �� ����
				m = m + 15; 						// 60 + m - 45

				if (h < 0) {
					h = 23;
				}
			}
			else if (m < 60) {
				m = m - 45;
			}
			printf("%d�� %d�� �Դϴ�.\n", h, m);
		}
		else {
			printf("�� �� �Է��߽��ϴ�.\n");
		}

	}

	return 0;
}
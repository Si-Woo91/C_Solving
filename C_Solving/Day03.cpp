#include <stdio.h>
#include <iostream>


//14681�� ��и� ����
//����
//���� ���� ���� �� �ϳ��� �־��� ���� ��� ��и鿡 ���ϴ��� �˾Ƴ��� ���̴�. ��и��� �Ʒ� �׸�ó�� 1���� 4���� ��ȣ�� ���´�. "Quadrant n"�� "��n��и�"�̶�� ���̴�.
//
//���� ���, ��ǥ�� (12, 5)�� �� A�� x��ǥ�� y��ǥ�� ��� ����̹Ƿ� ��1��и鿡 ���Ѵ�. �� B�� x��ǥ�� �����̰� y��ǥ�� ����̹Ƿ� ��2��и鿡 ���Ѵ�.
//
//���� ��ǥ�� �Է¹޾� �� ���� ��� ��и鿡 ���ϴ��� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, x��ǥ�� y��ǥ�� ��� ����� ������� �����Ѵ�.
//
//�Է�
//ù �ٿ��� ���� x�� �־�����. (?1000 �� x �� 1000; x �� 0) ���� �ٿ��� ���� y�� �־�����. (?1000 �� y �� 1000; y �� 0)
//
//���
//�� (x, y)�� ��и� ��ȣ(1, 2, 3, 4 �� �ϳ�)�� ����Ѵ�.

typedef struct input {
	int x;
	int y;
}Ip;


int coordinate(Ip ip);

int main() {

	int x =0;
	int y = 0;

	printf("x��ǥ >> ");
	scanf_s("%d", &x);
	printf("y��ǥ >> ");
	scanf_s("%d", &y);

	Ip ip = { x , y };
	//printf("%d", ip.x);	//���°� Ȯ��
	//printf("%d", ip.y);	//���°� Ȯ��

	if (coordinate(ip) != 0) {
		printf("%d ��и�", coordinate(ip));
	}
	else {
		printf("(0,0) �Դϴ�.");
	}

	return 0;
}

int coordinate(Ip ip) {

	int temp;

	if (ip.x * ip.y > 0) {
		if (ip.x > 0) {

			temp = 1;
			//			printf("1��и�");
		}
		else {
			temp = 3;
			//			printf("3��и�");
		}
	}
	else if (ip.x * ip.y < 0) {
		if (ip.x < 0) {

			temp = 2;
			//			printf("2��и�");
		}
		else {

			temp = 4;
			//			printf("4��и�");
		}
	}
	else {
		temp = 0;
		//		printf("(0,0)");
	}

	return temp;
}



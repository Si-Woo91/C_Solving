//문제9498번
//시험 점수를 입력받아 90 ~100점은 A, 80 ~89점은 B, 70 ~79점은 C, 60 ~69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 시험 점수가 주어진다.시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
//
//출력
//시험 성적을 출력한다.

#include <stdio.h>

int main() {

	int score;

	printf("점수를 입력 해주세요. >>> ");
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
		printf("잘 못 입력했습니다.");
	}

	return 0;


}


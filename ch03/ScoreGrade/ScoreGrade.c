#include <stdio.h>
int main(void) {
	int score;
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &score);
	if (score >= 90)
		printf("%d점은 A학점입니다.", score);
	else if (score >= 80)
		printf("%d점은 B학점입니다.", score);
	else if (score >= 70)
		printf("%d점은 C학점입니다.", score);
	else if (score >= 60)
		printf("%d점은 D학점입니다.", score);
	else
		printf("과락입니다.", score);
	return 0;
}
#include <stdio.h>
int main(void) {
	int height;
	printf("키를 입력하시오. : ");
	scanf_s("%d", &height);
	if (height >= 140)
		printf("이용 가능합니다.");
	else
		printf("이용 불가합니다.");
	return 0;
}
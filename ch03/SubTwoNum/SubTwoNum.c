#include <stdio.h>
int main(void) {
	//두 개의 정수형 변수(num1,num2)를 선언
	int num1, num2;
	//화면에 "첫 번째 수를 입력하세요: " 를 출력
	printf("첫 번째 수를 입력하세요: ");
	//키보드로부터 첫 번째 수를 입력받아 num1에 저장
	scanf_s("%d", &num1);
	printf("두 번째 수를 입력하세요: ");
	scanf_s("%d", &num2);
	if (num1 > num2)
		printf("두 수의 차는 %d 입니다", num1 - num2);
	else
		printf("두 수의 차는 %d 입니다", num2 - num1);
	
	return 0;
}
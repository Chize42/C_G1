#include <stdio.h>
int main(void) {
	int age;
	printf("나이를 입력하시오 : ");
	scanf_s("%d", &age);
	if (age <= 13)
		printf("아동입니다.");
	else if (age <= 19)
		printf("청소년입니다.");
	else if (age <= 65)
		printf("성인입니다.");
	else 
		printf("노인입니다.");
	return 0;
}
#include<stdio.h>
#include <windows.h>

int main(void) {
	char todo[100];
	int fi=0, fj=0, bi=0, bj=0, focusTime = 0, breakTime = 0, repeatNum = 0, readyTimer;
	printf("안녕하세요.당신의 집중을 위한 뽀모도로 타이머 뽀입니다.\n");
	printf("오늘의 할 일은 무엇인가요 ? : ");
	scanf_s("%s", &todo, 100);
	printf("집중할 시간(분)과 휴식할 시간(분)을 입력해주세요. :\n");
	scanf_s("%d%d", &focusTime, &breakTime);
	printf("반복 횟수를 입력해주세요. :\n");
	scanf_s("%d", &repeatNum);
	printf("%d분 집중하고 %d분 쉬기를 %d회 반복 할 예정입니다.\n", focusTime, breakTime, repeatNum);
	
	for(; repeatNum > 0; repeatNum--)
	{
		printf("\"%s\"(을/를) 준비하세요. \n그럼 지금부터 시작합니다.\n", todo);
		for (readyTimer = 3; readyTimer > 0; readyTimer--)
		{
			Sleep(1000);
			printf("%d\n", readyTimer);
		}
		Sleep(1000);
		system("cls");
		for (fi = 0; fi < focusTime; fi++)
		{
			for (fj = 0; fj < focusTime - fi; fj++)
			{
				printf("■");
			}
			printf("\n");
			Sleep(60000);
			system("cls");
		}
		printf("수고하셨습니다.\n%d분 휴식입니다.", breakTime);
		Sleep(1500);
		system("cls");
		for (bi = 0; bi < breakTime; bi++)
		{
			for (bj = 0; bj < breakTime - bi; bj++)
			{
				printf("■");
			}
			printf("\n");
			Sleep(60000);
			system("cls");
		}
	}
	printf("수고하셨습니다.\n\"%s\"를 잘 마치셨길 바랍니다.\n당신의 집중을 위한 타이머 뽀였습니다.감사합니다.", todo);
}
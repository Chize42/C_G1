#include<stdio.h>
#include <windows.h>

int main(void) {
	char todo[100];
	int fi=0, fj=0, bi=0, bj=0, focusTime = 0, breakTime = 0, repeatNum = 0, readyTimer;
	printf("�ȳ��ϼ���.����� ������ ���� �Ǹ𵵷� Ÿ�̸� ���Դϴ�.\n");
	printf("������ �� ���� �����ΰ��� ? : ");
	scanf_s("%s", &todo, 100);
	printf("������ �ð�(��)�� �޽��� �ð�(��)�� �Է����ּ���. :\n");
	scanf_s("%d%d", &focusTime, &breakTime);
	printf("�ݺ� Ƚ���� �Է����ּ���. :\n");
	scanf_s("%d", &repeatNum);
	printf("%d�� �����ϰ� %d�� ���⸦ %dȸ �ݺ� �� �����Դϴ�.\n", focusTime, breakTime, repeatNum);
	
	for(; repeatNum > 0; repeatNum--)
	{
		printf("\"%s\"(��/��) �غ��ϼ���. \n�׷� ���ݺ��� �����մϴ�.\n", todo);
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
				printf("��");
			}
			printf("\n");
			Sleep(60000);
			system("cls");
		}
		printf("�����ϼ̽��ϴ�.\n%d�� �޽��Դϴ�.", breakTime);
		Sleep(1500);
		system("cls");
		for (bi = 0; bi < breakTime; bi++)
		{
			for (bj = 0; bj < breakTime - bi; bj++)
			{
				printf("��");
			}
			printf("\n");
			Sleep(60000);
			system("cls");
		}
	}
	printf("�����ϼ̽��ϴ�.\n\"%s\"�� �� ��ġ�̱� �ٶ��ϴ�.\n����� ������ ���� Ÿ�̸� �ǿ����ϴ�.�����մϴ�.", todo);
}
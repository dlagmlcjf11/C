#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	int num;
	scanf("%d", &num); // Input num
	printf("%d", num); // %d : 정수형 입력
	
	float num;
	int i_part;
	float f_part;

	printf("실수를 입력하세요 : ");
	scanf("%f", &num); // %f : 실수형 입력

	i_part = num;
	f_part = num - i_part;

	printf("%f의 정수부는 %d이고, 실수부는 %f입니다.\n", num, i_part, f_part);
	
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("%d + %d = %d 입니다.", num1,num2, num1+num2);

	char ch;

	scanf("%c", &ch);
	printf("%c 문자의 ASCII 코드 : %d (%x)\n", ch, ch , ch);

	char ch;
	int num;
	double fnum;

	printf("ch의 바이트 크기 : %d\n", sizeof ch);
	printf("num의 바이트 크기 : %d\n", sizeof num);
	printf("fnum의 바이트 크기 : %d\n", sizeof fnum);

	printf("3.14f의 바이트 크기 : %d\n", sizeof 3.14f);
	
	int a = 2;
	float b = 4;
	printf("%f", a / b);

	int score;
	char grade;

	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}
	printf("grade = %c\n", grade);

	int a, b;
	char op;

	printf("수식을 입력하세요 : ");
	scanf("%d %c %d", &a,&op,&b);

	switch (op)
	{
	case'+':
		printf("%d + %d = %d\n", a, b, a+b);
		break;
	case'-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case'*':
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case'/':
		printf("%d / %d = %d\n", a, b, a / b);
		break;
	default:
		printf("계산 불가");
		break;
	}

	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%d ", i);
	}

	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %2d ", j, i , i*j);
		}
		printf("\n");
	}
	*/
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int k = n-i; k>=1; k--) {
			printf(" ");
		}
		for (int j = 1; j <= (i*2)-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n-1; i++) {
		for (int k = n-i; k <= n-1; k++) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * n - 1) - (2 * i); j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
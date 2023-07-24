#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

#define MAX_STUDENT 5

typedef struct student {
	char name[20];
	int korean, english, math;
	double average;
} STUDENT;

typedef struct point {
	int x, y;
} POINT;

typedef struct listNode {
	int score;
	struct listNode* next;
} LIST;

void Power(int num);
void GetNum(int a, int b, int* gob, int* power);
void Swap(POINT* p);
LIST* MakeLinkedList();
void AddRear(LIST* linkedList, int new_num);
void PrintAll(LIST* linkedList);

int main(void) {
	/*
	int num, cnt = 0;
	scanf("%d", &num);
	for (int i = num; i <= 100; i+=num) {
		if (i%num==0) {
			printf("%d ", i);
			cnt++;
		}
	}
	printf("%d", cnt);
	int num;
	scanf("%d", &num);
	power(num);
	
	char ch[2][10];
	gets(ch[0]);
	gets(ch[1]);
	if (strcmp(ch[0],ch[1]) == 0) {
		printf("일치");
	}
	else if (strlen(ch[0]) > strlen(ch[1])) {
		puts(ch[0]);
	}
	else if (strlen(ch[0]) < strlen(ch[1])) {
		puts(ch[1]);
	}
	else {
		printf("길이가 같습니다");
	}

	int a, b, res1, res2;
	scanf("%d %d", &a,&b);
	GetNum(a,b, &res1, &res2);
	printf("곱 : %d ", res1);
	printf("제곱 : %d", res2);
	POINT p1 = { 100, 200 };
	printf("변경 전 : %d %d\n", p1.x, p1.y);
	Swap(&p1);
	printf("변경 후 : %d %d", p1.x, p1.y);
	STUDENT std[MAX_STUDENT];
	int i;
	FILE* fp = NULL;

	for (i = 0; i < MAX_STUDENT; i++) {
		printf("학생 정보를 입력하세요 : ");
		scanf("%s %d %d %d", &std[i].name, &std[i].korean, &std[i].english, &std[i].math);
		std[i].average = (double)(std[i].korean + std[i].english + std[i].math) / 3;
	}
	fp = fopen("report.txt", "w");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return -1;
	}
	for (i = 0; i < MAX_STUDENT; i++) {
		fprintf(fp, "%-10s %3d %3d %3d %6.2f\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	}
	fclose(fp);
	*/
	int choose = 1;
	int score;
	LIST* newList = MakeLinkedList();
	while (choose != 0) {
		printf("기능 선택 -> 0번 = 종료, 1번 = 추가, 2번 = 출력 : ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("점수 : ");
			scanf("%d",&score);
			AddRear(newList, score);
			break;
		case 2:
			PrintAll(newList);
			break;
		}
	}
	return 0;
}

LIST* MakeLinkedList() {
	LIST* node = (LIST*)malloc(sizeof(LIST));
	node->score = NULL;
	node->next = NULL;
	return node;
}

void AddRear(LIST *linkedList, int new_num) {
	LIST* temp = linkedList;
	if (temp->score == 0) {
		
		temp->score = new_num;
	}
	else {
		LIST* newNode = (LIST*)malloc(sizeof(LIST));
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = NULL;
		newNode->score = new_num;
	}
}

void PrintAll(LIST* linkedList) {
	LIST* temp = linkedList;
	while (temp) {
		printf("%d ", temp->score);
		temp = temp->next;
	}
	printf("\n");
}

void Swap(POINT* p) {
	int swap = 0;
	swap = p->x;
	p->x = p->y;
	p->y = swap;
}

void Power(int num) {
	for (int i = 0; i <= 5; i++) {
		for (int j = num; i < 5; j*=num) {
			if (j == num)
				printf("%d ", num * 1);
			printf("%d ", num * j);
			i++;
		}
	}
}

void GetNum(int a, int b, int* gob, int* power) {
	*gob = a * b;
	*power = pow(a,b);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

/*
#define MAX_STUDENT 5
typedef struct student {
	char name[20];
	int korean, english, math;
	double average;
} STUDENT;

typedef struct point {
	int x, y;
} POINT;
*/
typedef struct listNode {
	char subject[20];
	int score;
	struct listNode* next;
} LIST;

/*
void Power(int num);
void GetNum(int a, int b, int* gob, int* power);
void Swap(POINT* p);
*/
LIST* MakeLinkedList();
void AddRear(LIST* linkedList, char* new_subject, int new_num);
void NAddRear(LIST* linkedList, char* new_subject, int new_num, int n);
void Search(LIST* linkedList, char* content);
void PrintAll(LIST* linkedList);
int Over(LIST* linkedList, char* subject);
void DelRear(LIST* linkedList);
void NDelRear(LIST* linkedList, int n);

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
	char subject[20];
	char searchContent[10];
	int score;
	int n;
	LIST* newList = MakeLinkedList();
	while (choose != 0) {
		printf("기능 선택 -> 0번 = 종료, 1번 = 추가, 2번 = 출력 , 3번 = 삭제 , 4번 = 검색, 5번 = N번째 추가, 6번 N번째 삭제 : ");
		scanf("%d", &choose);
		getchar();
		switch (choose)
		{
		case 1://추가
			printf("과목 : ");
			gets(subject);
			printf("점수 : ");
			scanf("%d",&score);
			if (Over(newList, subject) == 0) {
				AddRear(newList, subject, score);
			}
			else {
				break;
			}
			break;
		case 2://출력
			PrintAll(newList);
			break;
		case 3://제거
			DelRear(newList);
			break;
		case 4: //검색
			printf("검색어 : ");
			gets(searchContent);
			Search(newList, searchContent);
			break;
		case 5: //N번째 추가
			printf("N번 : ");
			scanf("%d", &n);
			getchar();
			printf("%d번째 과목 : ", n);
			gets(subject);
			printf("%d번째 점수 : ", n);
			scanf("%d", &score);
			if (Over(newList, subject) == 0) {
				NAddRear(newList, subject, score, n);
			}
			else {
				break;
			}
			break;
		case 6: //N번째 삭제
			printf("N번 : ");
			scanf("%d", &n);
			NDelRear(newList, n);
			break;
		}
	}
	return 0;
}

LIST* MakeLinkedList() {
	LIST* node = (LIST*)malloc(sizeof(LIST));
	strcpy(node->subject, "");
	node->score = NULL;
	node->next = NULL;
	return node;
}

void AddRear(LIST *linkedList, char* new_subject , int new_num) {
	LIST* temp = linkedList;
	if (temp->score == 0) {
		strcpy(temp->subject, new_subject);
		temp->score = new_num;
	}
	else {
		LIST* newNode = (LIST*)malloc(sizeof(LIST));
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = NULL;
		strcpy(newNode->subject, new_subject);
		newNode->score = new_num;
	}
}

void NAddRear(LIST* linkedList, char* new_subject, int new_num, int n) {
	LIST* temp = linkedList;
	LIST* temp1 = linkedList->next;
	for (int i = 0; i < n; i++) {
		temp = temp->next;
		temp1 = temp1->next;
	}
	if (temp->score == 0) {
		strcpy(temp->subject, new_subject);
		temp->score = new_num;
	}
	else {
		LIST* newNode = (LIST*)malloc(sizeof(LIST));
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp = newNode;
		newNode->next = NULL;
		strcpy(newNode->subject, new_subject);
		newNode->score = new_num;
	}
}

void PrintAll(LIST* linkedList) {
	LIST* temp = linkedList;
	while (temp) {
		printf("%s %d\n ", temp->subject ,temp->score);
		temp = temp->next;
	}
	printf("\n");
}

void Search(LIST* linkedList, char* content) {
	LIST* temp = linkedList;
	while (temp) {
		if (strcmp(temp->subject, content) == 0) {
			printf("점수 : %d", temp->score);
		}
		temp = temp->next;
	}
	printf("\n");
}

int Over(LIST* linkedList, char* subject) {
	LIST* temp = linkedList;
	while (temp) {
		if (strcmp(temp->subject, subject) == 0) {
			printf("중복된 입력입니다.\n");
			return 1;
		}
		else {
			return 0;
		}
		temp = temp->next;
	}
}

void DelRear(LIST* linkedList) {
	LIST* temp1 = linkedList; //뒤따라서
	LIST* temp2 = linkedList->next; //앞
	if (temp2 == NULL) {//노드가 1개인 경우
		if (linkedList->score == 0) {// 완전히 비어있는 경우
			printf("삭제할 데이터가 없습니다\n");
		}
		else { //1개 입력되어 있는 경우
			strcpy(linkedList->subject, "");
			linkedList->score = 0;
		}
	}
	else { //노드가 2개 이상인 경우
		while (temp2->next != NULL) {
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}
	temp2->next = NULL;
	free(temp2);
}

void NDelRear(LIST* linkedList, int n) {
	LIST* temp = linkedList;
	for (int i = 0; i < n; i++) {
		temp = temp->next;
	}
	printf("삭제할 내용 : %s (%d)\n", temp->subject, temp->score);
	strcpy(temp->subject , "");
	temp->score = NULL;
	free(temp);
}

/*
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
*/
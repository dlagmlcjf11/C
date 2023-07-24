/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

float CircleArea(float radius);
float CircleCircum(float radius);
int GetFactorial(int num);
float Distance(int x1, int y1, int x2, int y2);

struct student {
	char name[20];
	int korean, english, math;
	double average;
};

struct distance {
	int x, y;
};

struct person {
	char name[20];
	char sex;
	int job_code;
	union {
		char company_name[20];
		char school_name[20];
	} job_info;
};

enum week {sun, mon, tue, wed, thu, fri, sat};

int main(void) {
	/*
	float radius;
	scanf("%f", &radius);
	printf("%.2f\n", CircleArea(radius)); // .2 : 소수 둘째 자리까지 출력
	printf("%.2f", CircleCircum(radius)); 
	
	char str1[20], str2[20];
	strcpy(str2, "Hello"); // 문자열 처리 함수 str2 = "Hello"
	scanf("%s", &str1); // 문자열 입력
	printf("%d\n", strlen(str1));
	if (strcmp(str1, str2) == 0) { //str1 = str2 검증
		printf("일치\n");
	}
	else {
		printf("불일치\n");
	}
	strcat(str2, str1); // str2뒤에 str1 이어 붙이기
	printf("%s", str2);
	
	int num;
	scanf("%d", &num);
	printf("%d", GetFactorial(num));
	

	char name[20];
	char msg[40];

	printf("이름을 입력하세요 : ");
	gets(name);

	sprintf(msg, "%s씨, 안녕하세요?", name);
	puts(msg);
	
	int num;
	int* p;
	p = &num; // num의 주소를 pointer변수 p에 넣기
	*p = 10;
	printf("%d\n", *p);
	printf("%p\n", &p);
	printf("%p\n", p);

	int arr[10] = { 1,2,3,4,5,6,7,8,8,10 };
	int* p = arr;
	int i = 3;
	//주소 출력
	printf("%p\n", p+i);
	printf("%p\n", &arr[i]);
	printf("%p\n", arr+i);
	printf("%p\n", &p[i]);

	//값 출력
	printf("%d\n", *(p+i));
	printf("%d\n", arr[i]);
	printf("%d\n", *(arr + i));
	printf("%d\n", p[i]);

	for (int i = 0; i <= 9; i++) {
		printf("%d ", *(p+i));
	}
	
	struct student s1 = {"홍길동", 18, 25, 30};
	s1.average = (s1.korean + s1.english + s1.math) / 3.0f;
	printf("%.1f", s1.average);
	
	struct distance dot[2];
	struct distance* p;
	p = &dot[1];
	for (int i = 0; i < sizeof(dot)/sizeof(dot[i]); i++) {
		printf("%d번째 x,y 좌표 입력 : ", i+1);
		scanf("%d %d", &dot[i].x, &dot[i].y);
	}
	printf("두 번째 점 출력 : (%d,%d)\n", p->x, p->y);
	printf("두 점 사이의 거리 : %.2f", Distance(dot[0].x, dot[0].y, dot[1].x, dot[1].y));
	
	struct person s1, s2;
	strcpy(s1.name ,"가나다");
	s1.sex = "남";
	s1.job_code = 1;
	strcpy(s1.job_info.school_name ,"양디고");

	strcpy(s2.name , "라마바");
	s2.sex = "여";
	s2.job_code = 2;
	strcpy(s2.job_info.company_name, "카카오");
	printf("%s\n", s1.name);
	printf("%s\n", s2.name);
	
	enum week weekday;
	weekday = mon;

	switch (weekday)
	{
	case 0 :
		printf("일요일");
		break;
	case 1 :
		printf("월요일");
		break;
	case 2 :
		printf("화요일");
		break;
	}
	/*
	//홀수합 짝수합
	int num;
	int singleNum = 0;
	int doubleNum = 0;
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		if (i % 2 == 0) {
			doubleNum += i;
		}
		else {
			singleNum += i;
		}
	}
	printf("홀수의 합 : %d", singleNum);
	printf("짝수의 합 : %d", doubleNum);
	/*
	//문자 입력	
	char ch;
	printf("문자를 입력하세요 : ");
	scanf("%c", &ch);
	if (("%d", ch) >= 48 && ("%d", ch) <= 57) {
		printf("숫자");
	}
	else if (("%d", ch) >= 65 && ("%d", ch) <= 90) {
		printf("대문자");
	}
	else if (("%d", ch) >= 97 && ("%d", ch) <= 122) {
		printf("소문자");
	}
	else {
		printf("특수문자");
	}
	/*
	//중복 문자 체크
	char str[10];
	char str1[128];
	int cnt = 0;
	gets(str);
	/*
	//변수 값 바꾸기
	
	int x = 20;
	int y = 10;
	int ch;
	ch = x;
	x = y;
	ch = y;
	return 0;
}

float Distance(int x1, int y1, int x2, int y2) {
	return sqrt(pow((x2-x1), 2)+pow((y2-y1),2));
}

float CircleArea(float radius) {
	return radius * radius * 3.14f;
}

float CircleCircum(float radius) {
	return radius * 2 * 3.14f;
}

int GetFactorial(int num) {
	int factorial = 1;
	if (num == 0) {
		return 1;
	}
	else {
		return num * GetFactorial(num-1);
	}
	return factorial;
}
*/
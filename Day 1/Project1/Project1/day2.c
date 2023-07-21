#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>

float CircleArea(float radius);
float CircleCircum(float radius);

int main(void) {
	float radius;
	scanf("%f", &radius);
	printf("%.2f\n", CircleArea(radius)); // .2 : 소수 둘째 자리까지 출력
	printf("%.2f", CircleCircum(radius)); 

	return 0;
}

float CircleArea(float radius) {
	return radius * radius * 3.14f;
}

float CircleCircum(float radius) {
	return radius * 2 * 3.14f;
}
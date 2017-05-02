#include<stdio.h>

float plus(float a, float b);
float minus(float a, float b);
float muti(float a, float b);
float divide(float a, float b);

int main() {
	float a, b;
	char c;

	scanf("%f %c %f", &a, &c, &b);

	printf("%f %c %f", a, c, b);
	return 0;
}
float plus(float a, float b) {
	return a + b;
}
float minus(float a, float b) {
	return a - b;
}
float muti(float a, float b) {
	return a * b;
}
float divide(float a, float b) {
	return a / b;
}
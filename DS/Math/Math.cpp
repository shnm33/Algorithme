#include<stdio.h>

float plus(float a, float b);
float minus(float a, float b);
float muti(float a, float b);
float divide(float a, float b);

int main() {
	float a=1, b=2.5;
	char c;

	printf("%f", minus(a,b));

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
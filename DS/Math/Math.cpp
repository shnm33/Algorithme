#include<stdio.h>

float plus(float a, float b);

int main() {
	float a=1, b=2.5;
	char c;

	printf("%f", plus(a, b));

	return 0;
}
float plus(float a, float b) {
	return a + b;
}
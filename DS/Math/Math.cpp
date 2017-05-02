#include<stdio.h>

float plus(float a, float b);
float minus(float a, float b);
float muti(float a, float b);
float divide(float a, float b);

int main() {
	float a, b;
	char c;

	scanf("%f %c %f", &a, &c, &b);
	switch (c)
	{
	case '+' :
		printf("%f",plus(a,b));
		break;
	case '-':
		printf("%f", minus(a, b));
		break;
	case '*':
		printf("%f", muti(a, b));
		break;
	case '/':
		printf("%f", divide(a, b));
		break;
	default:
		break;
	}
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
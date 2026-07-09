#include<stdio.h>
#include<math.h>
int main(){
	int a;
	float b;
	printf("Enter your number :\t");
	scanf("%d", &a);
	b=sqrt(a);
	printf("Answer is :\t%.2f", b);
	return 0;
}

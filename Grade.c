#include<stdio.h>
int main()
{
	int num;
	printf("Enter Your Number :");
	scanf("%d",&num);
	if(num>100){
		printf("Invalid marks");
	}
	else if(num>90){
		printf("You have scored grade A+");
	}
	else if(num>80){
		printf("You have scored grade A");
	}
	else if(num>70){
		printf("You have scored grade B+");
	}
	else if(num>60){
		printf("You have scored grade B");
	}
	else if(num>50){
		printf("You have scored grade C");
	}
	else if(num>40){
		printf("You have scored grade D");
	}
	else{
		printf("You have failed");
	}
	return 0;
}


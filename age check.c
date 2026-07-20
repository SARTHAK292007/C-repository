#include<stdio.h>
int main ()
{
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	 if(age>=18){
	 	printf("Adult and Eligible for Voting");
	 	}
	 	else{
	 		printf("You are Minor and Not Eligible for Voting");
		 }
		 return 0;
}

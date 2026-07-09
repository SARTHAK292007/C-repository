#include<stdio.h>
int main(){
	int i,j,r,c;
	printf("Enter the number of rows you want:");
	scanf("%d",&r);
	printf("Enter the number of columns you want:");
	scanf("%d",&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}

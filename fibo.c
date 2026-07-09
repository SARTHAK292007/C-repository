#include<stdio.h>
int main()
{
	long long int i=1,pn=1,cn=1,nn,a;
	printf("Enter your number :");
	scanf("%d",&a);
	do
	{
		printf("%d\n", pn);
		nn=pn+cn;
	    pn=cn;
		cn=nn;	
		i++;
	}
	while(i<=a);
	return 0;
}


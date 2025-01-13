#include<stdio.h>
int main(){
	printf("Enter any integer number:");
	int a,num;
	scanf("%d",&a);
	(a>0)?printf("%d is positive\n",a):printf("%d is negative");
}

#include<stdio.h>
int main(){

	printf("press 1 for +\n");
	printf("press 2 for -\n");
	printf("press 3 for *\n");
	printf("press 4 for /\n");
	printf("press 5 for %\n");
	printf("press 0 for exit\n");
	
	printf("Enter your choice:");
	int num;
	scanf("%d",&num);
	printf("Enter first number:");
	int num1;
	scanf("%d",&num1);
	printf("Enter second number:");
	int num2;
	scanf("%d",&num2);
	switch(num){
		case 1:
			printf("sum is : %d\n",num1+num2);
			break;
		case 2:
			printf("subtraction is : %d\n",num1-num2);
			break;
		case 3:
			printf("multiplication is : %d\n",num1*num2);
			break;
		case 4:
			printf("division is : %d\n",num1/num2);
			break;
		case 5:
			printf("percentage is : %d\n",num1%num2);
			break;
	}
}


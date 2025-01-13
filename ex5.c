#include<stdio.h>
function(int num){
	printf("Enter any number:");
	scanf("%d",&num);
	int cube;
	cube=num*num*num;
	printf("the cube is :%d",cube);
}
int main(){
	int num;
	function(num);
}

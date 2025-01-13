#include<stdio.h>
int main(){
	printf("Enter array size:");
	int size;
	scanf("%d",&size);
	int x[size];
	int i;
	
	for(i=0;i<=size-1;i++){
		printf("x[%d]: ",i);
		scanf("%d",&x[i]);
}
	for(i=0;i<size;i++){
		if(size<x[i]){
			size=x[i];
		}

	}
		printf("largest element is : %d",size);	
}

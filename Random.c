#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n;
	int i=0;
	int array[n];
	printf("Enter \n");
	scanf("%d",&n);
	srand((unsigned)time(0));
	for(i=0;i<n;i++){
		array[i]=(rand()%n)+1;
	}
		for(i=0;i<n;i++){
		printf("%d",array[i]);
	}
	
}

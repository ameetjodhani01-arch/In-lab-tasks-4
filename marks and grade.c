#include<stdio.h>
int main(){
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks>=85){
		printf("Grade A");
	}else if(marks>=70){
		printf("Grade B");
	}else if(marks>=60){
		printf("Grade C");
	}else if(marks>=50){
		printf("Grade D");
	}else{
		printf("fail");
	}
	return 0;
}

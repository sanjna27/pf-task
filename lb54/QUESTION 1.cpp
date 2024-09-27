#include<stdio.h>

int main(){
	int age;
	char citizenship;
	
	printf("enter your age:");
	scanf("%d", &age);
	printf("enter your citizenship(y for yes ,n for no):");
	scanf(" %c" , &citizenship);
	
	if(age>=18 && citizenship =='y'){
		printf("eligible to vote");
	}else{
		printf("not eligible to vote");
	}
	return 0;
}


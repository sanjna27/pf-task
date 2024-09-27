#include<stdio.h>

int main(){
	int angle1,angle2,angle3;
	
	printf("enter angle1:");
	scanf("%d", &angle1);
		printf("enter angle2:");
	scanf("%d", &angle2);
		printf("enter angle3:");
	scanf("%d", &angle3);
	
	if(angle1>=0 && angle2>=0 && angle3>=0){
		if (angle1+angle2+angle3==180){
			printf("triangle is valid");
		}else{
			printf("triangle is in valid");
		}
	}else{
	printf("triangle is invalid");	
	}
	return 0;	
}

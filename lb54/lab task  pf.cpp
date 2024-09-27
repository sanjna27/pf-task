#include<stdio.h>

int main(){
int score;


printf("enter score");
scanf("%d", &score);

//using ternary operator
char grade=(score>=90)?'A':(score>=80 )?'B':(score>=70)?'C':(score>=60)?'D':'F';
printf("the grade is: %c" ,grade);
return 0;	
}


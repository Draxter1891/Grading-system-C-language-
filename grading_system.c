#include<stdio.h>

int main(){
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d",&marks);

    if (marks<=100 && marks >=90){
        printf("You Got Grade A");
    }
    else if(marks<90 && marks >=80){
printf("You Got Grade B");
    }
    else if(marks<80 && marks >=70){
printf("You Got Grade C");
    }
    else if(marks<70 && marks >=60){
printf("You Got Grade D");
    }
    else if(marks<60){
printf("You Got Grade F");
    }
    else{
        printf("invalid input!");
    }
    return 0;

}
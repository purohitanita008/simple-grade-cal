#include<stdio.h>

int main (){
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score>=90)?'A':
            (score>=80)?'B':
            (score>=70)?'C':
            (score>=60)?'D': 'F';

    printf("Your grade is %c. ",grade);

    switch(grade){
        case 'A':
           printf("\nExcellent work!");
           break;
        case 'B':
           printf("\nWell done");
           break;
           case 'C':
           printf("\nGood job");
           break;case 'D':
           printf("\nyou passed, but you could do better");
           break;case 'F':
           printf("\nSorry, you failed");
           break;
    }

    printf("\n");

    if(grade >= 'A' && grade >= 'D'){
        printf("Congratulations! you are eligible for the next level.");
    }else{
        printf("Please try again next time.");
    }

}
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
int min = 1;
int max = 6,count=1;
srand(time(0));

int roll_again = 1;
  for(int i=0;i<count;i++)
//while(roll_again == 1)// or roll_again == "y":
  {  printf("Rolling the dices...")  ;
    printf("The values are....")      ;
    int num=(rand()%(max-min+1))+min;
    printf("%d",num);
    }
    getch();
    return 0;
    }
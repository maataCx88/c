#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* check odd or even */
    /*int x;
    printf("Insert a number to check if Odd/Even : ");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d is an Even number :)",x);
    }else{
    printf("%d is an Odd number :)",x);
    }*/

    /* vowels and constants*/
   /* char car;
    printf("Insert a character : ");
    scanf("%c",&car);
    if(car=='a'||car=='e'||car=='i'||car=='o'||car=='u'){
         printf("%c is a vowel",car);
    }
    else{
         printf("%c is a constant",car);
    }*/
    /* greatest of 3 numbers*/
    /*int a,b,c;
    printf("Insert first number : ");
    scanf("%d",&a);
    printf("Insert second number : ");
    scanf("%d",&b);
    printf("Insert third number : ");
    scanf("%d",&c);
    if((a>b) && (a>c)){
         printf("The greatest number is : %d",a);
    }
    else{
        if((b>a) && (b>c)){
             printf("The greatest number is : %d",b);
        }
        else{
            if((c>a) && (c>b)){
               printf("The greatest number is : %d",c);
            }
        }
    }*/

    /* leap year*/
   /* int x;
    printf("Insert a valid year : ");
    scanf("%d",&x);
    if(x%4==0){
        printf("%d is a leap year :)",x);
    }else{
         printf("%d is not a leap year :)",x);
    }*/
    /* multiplication table*/
   /* int x=1,y=1;
    while(x<=10){
        y=1;
        while(y<=10){
            printf("%d X %d = %d \n",x,y,x*y);
            y++;
        }
        printf("************************************* \n");
        x++;
    }*/
    /* reverse of a number*/
  /*  int x,number=0;
    printf("Insert a number to reverse : ");
    scanf("%d",&x);
    number=0;
    while(x!=0){
       number=(number*10)+(x%10);
       x=x/10;
    }
    printf("reverse is :  %d",number);

    */
    /* simple calculator*/
/*    char c;
    double x,y,r;
    printf("Please insert an operator (/,*,+,-) : \n");
    scanf("%c",&c);
    printf("Insert first number : \n");
    scanf("%lf",&x);
    printf("Insert second number : \n");
    scanf("%lf",&y);
    switch(c){
case '+':
    r=x+y;
    break;
case '-':
    r=x-y;
    break;
case '*':
    r=x*y;
    break;
default:
    r=x/y;
    break;
    }
    printf("The result of %.2lf  %c  %.2lf =  %.2lf",x,c,y,r);*/
    /* average of numbers */
  /*  int x;
    printf("Insert how many numbers? : ");
    scanf("%d",&x);
    float avg=0,y;
    for(int i=1;i<=x;i++){
        printf("Insert the %d -th number : ",i);
        scanf("%f",&y);
        avg+=y;
    }
    avg=avg/x;
    printf("the average of these numbers is : %.3f",avg);*/

    /* add first and last digit */
   /* int x,first,last,r;
    printf("Please insert a number : ");
    scanf("%d",&x);
    last=x%10;
    r=x;
     while(r>0){
            if(r/10==0){
                break;
            }
            r=r/10;
    }
    printf("first : %d    last :    %d     and the sum is :     %d",r,last,r+last);*/

    /* factoriel */
   /* int x,i;
    printf("Please insert any number : ");
    scanf("%d",&x);
    i=1;
    double result=1;
    while(i<x){
            result=result*(i+1);
            i++;
          }
    printf("the factor of %d is :  %.0lf",x,result);*/
    return 0;
}

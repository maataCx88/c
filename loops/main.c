#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    /*while loop

    while(x<3){

    }

    */

    /* for loop

    int x;
    for(x=0;x<=3;x++){
    }

    */

    /* do while
    do{
        printf("hello");
        x++;
    }while(x<=3)
    */

   /* prime numbers



   */
   int y=1;
   for(int i=2;i<50;i++){
    bool k=true;
    while(y<i/2 && k){
        if(i%y==0 && (y!=1 || y!=i)){
            k=false;
        }
        y++;
    }
    if(k){
        printf("%d is a prime number \n",i);
    }
   }

    return 0;
}

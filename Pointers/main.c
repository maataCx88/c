#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void timegenerator(unsigned long *pt){
*pt=time(NULL);
}

int * randomgenerator(){
    static int ran[5];
    int x;
    srand((unsigned) time(NULL));
    for(x=0;x<5;++x){
        ran[x]=rand();
        printf("the value of the number is %d \n",ran[x]);
    }
    return ran;
}
int main()
{
   /* int xyz=10;
    int *pt;
    pt=&xyz;
    printf("The address of variable xyz is %x \n",&xyz);
    printf("The address of variable pt is %x \n",pt);
    printf("The value of variable pt is %d \n",*pt);


    /* null pointers*/

   /* int *pt=NULL;
    int xyz=4;
    pt=&xyz;
    printf("address of pointer pt is %x",pt);
    return 0;


    /*increment pointer*/

   /* int xyz[]={12,13,14,15,16};
    int *pt,w;

    pt=xyz;

    for(int i=0;i<5;i++){
        printf("address of xyz[%d] = %x \n",i,pt);
        printf("value of xyz[%d] = %d \n",i,*pt);
        pt++;
    }

    /* decrement pointer*/
    /* int xyz[]={12,13,14,15,16};
    int *pt,w;

    pt=&xyz[5-1];

    for(int i=0;i<5;i++){
        printf("address of xyz[%d] = %x \n",i,pt);
        printf("value of xyz[%d] = %d \n",i,*pt);
        pt--;
    }
    /*string var in array of pointer*/
   /* char *details[]={"Hello","Welcome","How","You"};
    for(int i=0;i<5;i++){
        printf("The name of details[%d] = %s \n",i,details[i]);
    }

    /* Pointer to pointer */

  /*  int xyz, *pt1,**pt2;
    xyz=10;
    pt1=&xyz;

    pt2=&pt1;

    printf("value of xyz = %d \n",xyz);
    printf("value of *pt1 = %d \n",*pt1);
    printf("value of *pt2 = %d \n",**pt2);


    /* pass pointer to function*/

   /* unsigned long seconds;
    timegenerator(&seconds);

    printf("Time generator in seconds is %ld \n",seconds);

    /* random number generator*/
/*
    int x,*pt;
    pt=randomgenerator();
   /* return generated numbers*/
  /*  for(x=0;x<5;x++){
        printf("The returned values of[%d] is : %d\n",x,*(pt+x));
    }

    /* reverse array using pointer */
    int A[200],*p,x;
    p=&A[0];
    printf("Insert range of the array : ");
    scanf("%d",&x);
    printf("Insert the elements of the array : \n");
    for(int i=0;i<x;i++){
        scanf("%d",p);
        p++;
    }
    p=&A[x-1];
    printf("the new array : \n");
    for(int i=x-1;i>=0;i--){
     printf("%d \n",*p);
     p--;
    }
}

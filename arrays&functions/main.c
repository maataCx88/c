#include <stdio.h>
#include <stdlib.h>
int max_number(num1,num2){
int max;
if(num1>=num2){
    max=num1;
}
else{
    max=num2;
}
return max;
}

void merge_array(int array[],int x){
    int c;

for(int i=0;i<x;i++){
      for(int y=i+1;y<x;y++){
    if(array[i]>array[y]){
       c=array[i];
       array[i]=array[y];
       array[y]=c;
    }
      }
}

}
void merge_arrays(int array1[], int array2[],int sorted[],int x, int y){
merge_array(array1,x);
merge_array(array2,y);
int f=0,k=0;
for(int i=0;i<x+y;i++){
    if(array1[f]<=array2[k] && f<x){
        sorted[i]=array1[f];
        f++;
    }
    else{
            if(k<y){
        sorted[i]=array2[k];
        k++;
            }
    }
}
}
void insert_new_element(){
int x,p,n,A[200];
printf("******************************Inserting a new element*************************************** \n");
printf("Please insert array range : ");
scanf("%d",&x);
printf("Insert array elements : ");
for(int i=0;i<x;i++){
    scanf("%d",&A[i]);
}
printf("Please insert the position of the new element : ");
scanf("%d",&p);
p--;
printf("Please insert the new element : \n");
scanf("%d",&n);
for(int i=x-1;i>=p;i--){
    A[i+1]=A[i];
}
A[p]=n;
printf("The new array :  \n");
for(int i=0;i<x+1;i++){
    printf("%d \n", A[i]);
}
printf("******************************DONE*************************************** \n");
}
void delete_element(){
printf("******************************Deleting element*************************************** \n");
int x,p,A[200];
printf("Please insert array range : ");
scanf("%d",&x);
printf("Insert array elements : ");
for(int i=0;i<x;i++){
    scanf("%d",&A[i]);
}
printf("Please insert the position of the element to delete : ");
scanf("%d",&p);
p--;
for(int i=p;i<x;i++){
    A[i]=A[i+1];
}
printf("The new array :  \n");
for(int i=0;i<x-1;i++){
    printf("%d \n", A[i]);
}
printf("******************************DONE*************************************** \n");
}
void max_element(){
printf("******************************Max element*************************************** \n");
int x,max=0,pos=-1,A[200];
printf("Please insert array range : ");
scanf("%d",&x);
printf("Insert array elements : ");
for(int i=0;i<x;i++){
    scanf("%d",&A[i]);
    if(max<A[i]){
        max=A[i];
        pos=i;
    }
}
printf("Maximum and biggest element is : %d   with position of : %d \n",max,pos+1);
printf("******************************DONE*************************************** \n");

}
void min_element(){
printf("******************************Max element*************************************** \n");
int x,min=0,pos=-1,A[200];
printf("Please insert array range : ");
scanf("%d",&x);
printf("Insert array elements : ");
for(int i=0;i<x;i++){
    scanf("%d",&A[i]);
    if(min>A[i]){
        min=A[i];
        pos=i;
    }
}
printf("Maximum and biggest element is : %d   with position of : %d \n",min,pos+1);
printf("******************************DONE*************************************** \n");

}

void avg_array(int len){
printf("******************************Average of array elements*************************************** \n");
int A[6]={45,67,12,8,9,3};
double average,total=0;
for(int i=0;i<len;i++){
    total+=A[i];
}
average=total/len;
printf("Average of the array is : %.2lf",average);
}
int main()
{
    /*max of numbers*/
    /*int a=10,b=50,c;
    c=max_number(a,b);
    printf("max number is : %d",c);*/
   /* int x,y,z[5];
    for(x=0;x<=5;x++){
        z[x]=x+10;
    }

    for(y=0;y<=5;y++){
        printf("z[%d] =  %d \n",y,z[y]);
    }

    */
    /* Inverse of array*/
 /* int x,z[200];
  printf("Enter desired number of elements : ");
  scanf("%d",&x);
  printf("Enter the numbers : ");
  for(int i=0;i<x;i++){
    scanf("%d",&z[i]);
  }
  printf("the reversed numbers : ");
  for(int i=x-1;i>=0;i--){
    printf("%d \n",z[i]);
  }*/
  /* merge 2 arrays*/
  /*
  int x,z,y[200],m[200],e[200];
  printf("Insert range of first array : ");
  scanf("%d",&x);
  printf("Insert elements :");
  for(int i=0;i<x;i++){
    scanf("%d",&y[i]);

  }
  printf("Insert range of second array : ");
  scanf("%d",&z);
  printf("Insert elements : \n");
  for(int i=0;i<z;i++){
    scanf("%d",&m[i]);
  }
  merge_arrays(y,m,e,x,z);
   printf("merged array : \n");
 for(int i=0;i<x+z;i++){
    printf("element : %d \n",e[i]);
  }
  */
avg_array(6);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
void add_two_numbers(){
int num1,num2,sum;
int *pt1,*pt2;
pt1=&num1;
pt2=&num2;
printf("please enter 2 numbers : ");
/* in scanf we dont need & cause it already scans with the address*/
scanf("%d%d",pt1,pt2);
sum=*pt1+*pt2;
printf("the sum of %d and %d =  %d",*pt1,*pt2,sum);

}
void swap_two_numbers(int * num1, int * num2){
int mid;
mid=*num1;
*num1=*num2;
*num2=mid;
  printf("After swapping in swap function");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}
void read_print_array_elements(){
int Ar[200],size;
int * ptr;
ptr=Ar;
printf("Set array size : ");
scanf("%d",&size);
printf("Enter array elements : \n ");
for(int i=0;i<size;i++){
    scanf("%d",ptr);
    ptr++;
}
ptr=Ar;
printf("The array elements are : ");
for(int i=0;i<size;i++){
    printf("%d \n",*ptr);
    ptr++;
}

}
void print_array(int *arr,int size){
for(int i=0;i<size;i++){
    printf("%d \n",*(arr+i));
}
}
void read_array(int *arr,int size){
for(int i=0;i<size;i++){

    scanf("%d",arr);
    arr++;
}
}
void swap_array(int *arr1,int * arr2,int size){
/* a xor b = s => b xor s = a || a xor s = b*/
int *ptr1=arr1+(size-1), *ptr2=arr2+(size-1);
while(arr1<=ptr1 && arr2<=ptr2){
    *arr1^=*arr2;
    *arr2^=*arr1;
    *arr1^=*arr2;
    arr1++;
    arr2++;
}
}

void copy_array(int *arr1, int *arr2,int *end_ptr, int size){
    int *pt1=arr1,*pt2=arr2;
printf("contents of array 1 before copying : \n");
print_array(pt1,size);
printf("contents of array 2 before copying : \n");
print_array(pt2,size);
pt1=arr1;
pt2=arr2;
while(arr1<=end_ptr){
    *arr2=*arr1;
    arr2++;
    arr1++;
}
printf("contents of array 1 after copying : \n");
print_array(pt1,size);
printf("contents of array 2 after copying : \n");
print_array(pt2,size);
}

void reverse_array(int *arr, int size){
   int *left=arr,*right=arr+(size-1);
   while(left<right){
    *left^=*right;
    *right^=*left;
    *left^=*right;
    left++;
    right--;
   }
}
int search_element(int *arr, int size, int n){
int *pt1=arr+(size-1),index=0;
while(arr<=pt1 && *arr!=n){
    arr++;
    index++;
}
if(arr<=pt1)
return index;

return -1;
}
void input_matrix(int sizeh,int sizel,int mat[][sizel]){
for(int i=0;i<sizeh;i++){
    for(int y=0;y<sizel;y++){
               // (*(matrix + i) + j is equivalent to &matrix[i][j]
        scanf("%d",(*(mat+i)+y));
    }
}

}
void output_matrix(int sizeh,int sizel,int mat[][sizel]){
for(int i=0;i<sizeh;i++){
    for(int y=0;y<sizel;y++){
                 // *(*(matrix + i) + j) is equivalent to matrix[i][j]
        printf("%d ",*(*(mat+i)+y));
    }
    printf("\n");
}
}

void add_matrix(int sizeh,int sizel,int mat1[][sizel],int mat2[][sizel],int res[][sizel]){
for(int i=0;i<sizeh;i++){
    for(int j=0;j<sizel;j++){
        *(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
    }
}

}
void multiply_matrix(int x1,int j1,int x2,int j2,int mat1[][j1],int mat2[][j2],int RESLT[][j2]){
if(j1!=x2){
    printf("Multiplying impossible please check matrixes...");
}
else{
    int a1=0,b2=0;int res=0;int b1=0;int a2=0;
    while(a1<x1){
            b2=0;
        while(b2<j2){
            res=0;b1=0;a2=0;
            while(b1<j1 && a2<x2){
                res+=(*(*(mat1 + a1) + b1))*(*(*(mat2 + a2) + b2));
                b1++;
                a2++;
            }
           *(*(RESLT + a1) + b2)=res;
           b2++;
        }
        a1++;
    }
}
}
void copy_strings(char *char1,char *char2){
    int count=0;
while(*(char2++)=*(char1++));
}
void concatenate_strings(char *char1,char *char2){
while(*(char1++)+=*(char2++));
}

void reverse_strings(char *char1,char *char2){
int len=0;
while(*(char1++)) len++;
char1--;
while(len>=0){
    *(char2++)=*(--char1);
    len--;
}
}
void sort_array(int *arr,int size){
int i=0,j,*pt=arr;
while(i<size){
    j=i+1;
    while(j<size){
        if(*(arr+i)<=*(pt+j)){
            *(arr+i)^=*(arr+j);
            *(arr+j)^=*(arr+i);
            *(arr+i)^=*(arr+j);
        }
        j++;
    }
    i++;
}
}
int main()
{
   // int a=5;
   //int * b;
    /* to store the address of the variable a to pointer b */
   // b=&a;
    //printf("the value of a is %d and its address is %x \n",a,&a);
  //  printf("the value of b is %d and its address is %x \n",*b,b);
  /* reverse numbers*/
 /* printf("insert any two number : ");
  int num1,num2;
  scanf("%d%d",&num1,&num2);
  printf("Before swapping in main \n");
  printf("Value of num1 = %d \n", num1);
  printf("Value of num2 = %d \n\n", num2);
  swap_two_numbers(&num1,&num2);
  printf("After swapping in main \n");
  printf("Value of num1 = %d \n", num1);
  printf("Value of num2 = %d \n\n", num2);*/
 // read_print_array_elements();
 /* copy arrays*/
 /*
 int A[200],B[200],x;
 int *ptr=A,*ptr2=B,*end_ptr;
 printf("Enter array range : ");
 scanf("%d",&x);
 printf("Enter array elements : ");
 for(int i=0;i<x;i++){
    scanf("%d",(ptr+i));
 }
 ptr=A;
 end_ptr=&A[x-1];
 copy_array(ptr,ptr2,end_ptr,x);*/
 /* swap arrays */
 /*int A[200],B[200],x;
 int *ptr1=A,*ptr2=B;
 printf("Set array 1 range :");
 scanf("%d",&x);
 printf("Set array 1 elements : \n");
 read_array(ptr1,x);
 printf("Set array 2 elements : \n");
 read_array(ptr2,x);
 printf("Array 1 elements before swapping : \n");
 ptr1=A;
 ptr2=B;
 print_array(ptr1,x);
 printf("Array 2 elements before swapping : \n");
 print_array(ptr2,x);
  ptr1=A;
 ptr2=B;
 swap_array(ptr1,ptr2,x);
 printf("Array 1 elements after swapping : \n");
 ptr1=A;
 ptr2=B;
 print_array(ptr1,x);
 printf("Array 2 elements after swapping : \n");
 print_array(ptr2,x);*/
/* int A[200],B[200],x,*ptr1=A,*ptr2=B;
 printf("Set array range :");
 scanf("%d",&x);
 printf("Set array elements : \n");
 read_array(ptr1,x);
  printf("Array elements before reversing : \n");
 ptr1=A;
 print_array(ptr1,x);
  ptr1=A;
 reverse_array(ptr1,x);
  printf("Array elements after reversing : \n");
 ptr1=A;
 print_array(ptr1,x);*/
/*search element*/
/*
int A[200],x,number,*ptr1=A;
 printf("Set array range :");
 scanf("%d",&x);
 printf("Set array elements : \n");
 read_array(ptr1,x);
 ptr1=A;
  printf("Set the element to search :");
 scanf("%d",&number);
 int search=search_element(ptr1,x,number);
 if(search==-1){
    printf("element not found ...");
 }
 else{
    printf("the element %d is found and its position is : %d",number,search+1);*/

    /* addition of 2 matrices */
    /*
int A[200][200],B[200][200],C[200][200],x,y,*pt=A,*pt2=B,*pt3=C;
printf("input matrixs dimensions : ");
scanf("%d%d",&x,&y);
printf("input matrix 1 elements with %d x %d dimensions : \n",x,y);
input_matrix(x,y,pt);
printf("input matrix 2 elements with %d x %d dimensions : \n",x,y);
input_matrix(x,y,pt2);
pt=A;pt2=B;pt3=C;
add_matrix(x,y,pt,pt2,pt3);
pt3=C;
printf("result matrix of (matrix 1 + matrix 2) elements are : \n");
output_matrix(x,y,pt3);*/
/* multiply matrix */
/*
int A[200][200],B[200][200],C[200][200],x1,y1,x2,y2,*pt=A,*pt2=B,*pt3=C;
printf("input matrix 1 dimensions : ");
scanf("%d%d",&x1,&y1);
printf("input matrix 1 elements with %d x %d dimensions : \n",x1,y1);
input_matrix(x1,y1,pt);
printf("input matrix 2 dimensions : ");
scanf("%d%d",&x2,&y2);
printf("input matrix 2 elements with %d x %d dimensions : \n",x2,y2);
input_matrix(x2,y2,pt2);
pt=A;pt2=B;
multiply_matrix(x1,y1,x2,y2,pt,pt2,pt3);
pt3=C;
printf("result matrix of (matrix 1 * matrix 2) elements are : \n");
output_matrix(x1,y2,pt3);*/

/* copy string */
/*char str[100],str2[100];
char *pt1=str;char *pt2=str2;
printf("enter any text : ");
gets(str);
copy_strings(pt1,pt2);
printf("original text : %s \n",str);
printf("second text : %s",str2);*/
/* concatenate */
/*
char str[100],str2[100];
char *pt1=str;char *pt2=str2;
printf("enter  text 1: ");
gets(str);
printf("enter  text 2: ");
gets(str2);
concatenate_strings(pt1,pt2);
printf("result text : %s \n",str);*/
/* reverse string */
/*
char str[100],str2[100];
printf("enter  string 1: ");
gets(str);
char *pt1=str;char *pt2=str2;
reverse_strings(pt1,pt2);
printf("string 1 : %s \n",str);
printf("string 2 : %s \n",str2);*/
/* sory array */
int run[6],x,*pt=&run;
printf("Set array range : ");
scanf("%d",&x);
printf("Set array elements : ");
for(int i=0;i<x;i++){
    scanf("%d",pt);
    pt++;
}
pt=&run;
sort_array(pt,x);
printf("the new array : \n");
pt=&run;
for(int i=0;i<x;i++){
    printf("%d",*pt);
    pt++;
}
 }



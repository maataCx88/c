#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.142
int main()
{
    /* get values from user
    int a,b;
    printf("Welcome! please give me 2 numbers :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d + %d : %d",a,b,a*b);
    */

    /*area of circle
    float area, radius;
    printf("give me the radius of the circle:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("the area of ur circle is:\t %f",area);


    */
    /* area of rectangle
     float a,b,c;
    printf("give me the length : \t");
    scanf("%f",&a);
    printf("give me the weight : \t");
    scanf("%f",&b);
    c=a*b;
    printf("THE AREA OF THE RECTANGLE IS  : \t %f",c);

    */

    /*area of triangle
    float base, height,area;
    printf("give me the base : \t");
    scanf("%f",&base);
    printf("give me the height : \t");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("the area of the triangle is : \t %f",area);
    */
   /* area of cylinder
 float radius, height, area;
   printf("give me the radius : \t");
    scanf("%f",&radius);
    printf("give me the height : \t");
    scanf("%f",&height);

    area=2*PI*radius*(radius+height);
     printf("the area of the cylinder is : \t %f",area);

   */

   /* volume of sphere
   float radius, volume;
   printf("give me the radius : \t");
    scanf("%f",&radius);
    if(radius>=1){
        volume=(4/3)*PI*pow(radius,3);
        printf("Volume of the sphere : \t %.2f",volume);
    }
    else{
            printf("ERROR INVALID VALUE ...");
    }

   */

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char shut;

    printf("Want to restart your computer (Y/N)? :");
    scanf("%c",&shut);
    if(shut=='Y'||shut=='y'){
        system("c:\\windows\\system32\\shutdown /r");
    }
    return 0;
}

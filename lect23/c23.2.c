//multiple data input
#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollN;
    int age;
};
int main(){
    struct student s1[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter your name%d",i);
        scanf("%s",s1[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",s1[i].name);
    }
    
    
}
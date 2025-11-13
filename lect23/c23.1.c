//structure
#include<stdio.h>
#include<string.h>
struct address
{
    int pincode;
};
struct student
{
    char name[50];
    int rollN;
    int age;
    struct address s2;
};
int main(){
    struct student s1;
    s1.age=15;
    strcpy(s1.name,"hello");
    printf("%d",s1.age);
    printf("%s",s1.name);
    s1.s2.pincode=482001;
}
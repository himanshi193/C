#include<stdio.h>
int main(){
    int a[5];
    for(int i=0; i<5; i++)
    {
        printf("enter input no.%d:",i+1);
        scanf("%d",a[i]);
    }
    for(int i=0; i<5; i++)
    {
        int count=0;
        for(int j=0; j<4; j++)
        {
            if(a[j]<a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
        for(int j=0; j<5; j++)
        {
            printf("%d\t",a[j]);
        }
        printf("\n");
    }
    printf("\nDesecending order:\n\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
}
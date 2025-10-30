//use of break
#include<stdio.h>
int main(){
    int a=5,i;
    for(i=0;i<=a;i++)
    {
        if(i==4)
        break;
        printf("\t%d",i);
    }
}

//break

#include<stdio.h>
int main(){
    for(int i=5;i<=10;i++){
        printf("%d\n",i);
    
        if (i%2==0){
            //break;
            continue;
        }
    }
    return 0;
}

//for finding digit

#include<stdio.h>
int main(){
    int i=0,n,count;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    for(i=0;n!=0;i++)
    {
        count++;
        n=n/10;
    }
    printf("\nlength : %d",count);
}

//WAP to print fabonacci series

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int next=0;
    for(int i=0;i<n;i++)
    {
        printf("%d\t",next);
        a=b;
        b=next;
        next=a+b;
    }

}

//fabonacci series
#include<stdio.h>
int main(){
int n=5;
int t1=0; 
 int t2=1;
 int next;
for(int i=1;i<=n;i++)
{
 printf("%d,t1");
 next=t1+t2;
 t2=next; 
 }
    return 0;
}

//WAP to print the prime number till n

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter : ");
    scanf("%d",&n);
    if(n>2)
    {
        for(i=2;i<=n;i++)
        {
             for(j=2;j<=i/2;j++)
             {
                  if(i%j==0)
                     break;
            }
            if(j>i/2)
                printf("\n%d",i);
        }
    }
}


hello



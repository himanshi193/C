//2d array

#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}

//calculate sum of 2d array

#include<stdio.h>
int main()
{
    int sum=0;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for( int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("\n");

    }
}

//find max and min value in 2d array

#include<stdio.h>
int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int i,j;
  int max=arr[0][0],min=arr[0][0];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j <3; j++)
    {
        if (arr[i][j]>max)
        {
            max=arr[i][j];
        }
        if (arr[i][j]>min)
        {
            min =arr[i][j];
        }
        
    }
    
  }
  printf("max value of arr:%d\n",max);
  printf("min value of arr:%d\n",min);
  return 0;
}
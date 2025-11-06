//calculate sum of 2d array row wise

#include<stdio.h>
int main(){
      int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
      for (int i = 0; i < 3; i++)
      {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d",sum);
      }
      
}


//convert 2d array in 1d array


#include<stdio.h>
int main(){
       int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        int arr1[9];
        int k=0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr1[k]=arr[i][j];
                k++;
            }
      printf("%d",arr1[k]);
        }

}
// First non repeating character

#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="abcaafgh";
    int ln = strlen(s);
    int count=0;
    char freq[256]={0};
    for(int i=0;i<ln;i++)
    {
        freq[s[i]]++;
    }
    for(int i=0;i<ln;i++)
    {
        if(freq[s[i]]==1)
        {
            printf("%c is non repeating",s[i]);
            count++;
            break;
        }
        
    }
    if(count==0)
    {
        printf("No non repeating character exist");
    }
}

// Check if the substring exists or not in the main string

#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="ababbbbb";
    char target[]="abb";
    int k=3;
    char a[k];
    int ln=0,i,j,l,m,count=0;

    
    for( i=0;i<s[i]!='\0';i++)
    {
        ln++;
    }

    for( i=0;i<ln-k;i++)
    {
        for(j=i,l=0;j<i+k;j++,l++)
        {
            a[l]=s[j];
        }
        for(m=0;m<k;m++)
        {
            if(target[m]!=a[m])
            {
                break;
            }
        }
        if(m==k)
        {
            count++;
            break;
        }
        
    }
    if(count>0)
    {
        printf("Substring exists");
    }
    else
    {
        printf("Substring does not exist");
    }
}

//Move all negative no to left positive to right

#include<stdio.h>
int main()
{
    int arr[]={-1,4,2,-3,7,3,-4};
    int neg[3];
    int pos[4];
    int ans[7];
    int i,j,k;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0,j=0,k=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            neg[j]=arr[i];
            j++;
        }
        else
        {
            pos[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<3;i++)
    {
        ans[i]=neg[i];
    }
    for(j=0;i<7;i++,j++)
    {
        ans[i]=pos[j];
    }
    for(i=0;i<7;i++)
    {
        printf("%d\t",ans[i]);
    }

}
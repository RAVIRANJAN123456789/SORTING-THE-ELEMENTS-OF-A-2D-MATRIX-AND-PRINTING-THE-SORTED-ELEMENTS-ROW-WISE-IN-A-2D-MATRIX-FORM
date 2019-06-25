#include<stdio.h>
int matsort()
{
    int n,i,j,s=0,k,temp,size;
    int mat[10][10];
    printf("\n enter the dimension of square matrix \n");
    scanf("%d",&n);
    printf("\n ********************************** \n");
    size=n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);

        }
        printf("\n");
    }
    printf("\n ************************** \n");
    printf("\n the elements of 2D matrix in sorted order \n ");
    int arr[size];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[s]=mat[i][j];
            s++;
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {


                mat[i][j]=arr[k];
                k++;
                printf("%d\t",mat[i][j]);

        }
        printf("\n");
    }

return 0;
}
int main()
{
    matsort();
    return 0;
}

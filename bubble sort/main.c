#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,temp;
    printf("Enter your number of data:");
    scanf("%d",&n);
    int array[n];
    printf("Enter your data:\n");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num[]={10,5,18,12,3,34,90};
  int value,pos=-1,i;
  printf("Enter the value you want to search:");
  scanf("%d",&value);
  for(i=0;i<7;i++){
    if(value==num[i]){
        pos=i+1;
        break;
    }
  }
  if(pos=-1){
    printf("Item not found");
  }
  else{
    printf("The value is found at %d position",pos);
  }

}

#include <stdio.h>
int max_min_ele(int a[],int n,int* max,int* min){
    int i,j;
    *max=a[0];
    *min=a[0];
    for(i=1;i<n;i++){
        if(a[i]>*max){
            *max=a[i];
        }
        return *max;
        if(a[i]<*min){
            *min=a[i];
        }
        return *min;
    }
}
int main()
{
      int i,max,min,n,a[50];
      printf("enter the size of an array");
      scanf("%d",&n);
      printf("enter d arr ele");
      for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      }
      max_min_ele(a,n,&max,&min);
      printf("the max and min ele is%d\n:",max);
      printf("the max and min ele is%d\n:",min);
      return 0;
}

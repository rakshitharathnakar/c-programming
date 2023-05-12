#include <stdio.h>

int main() {
    // Write C code here
    int i,n,j,k,m,temp=0;
    int a[50];
    printf("entr the size");
    scanf("%d",&n);
    printf("enter the num of rotation")
    scanf("%d",&m);
    printf("enter the ele");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++){
    temp=a[0];
    for(i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    }
   
    for(k=0;k<n;k++){
        printf("%d",a[k]);
    }
    return 0;
}

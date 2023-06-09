#include<stdio.h>
#include<stdlib.h>
void fndscndlrgst(int a[],int a_size){
    int lrgst=a[0];
    int scndlrgst=a[0];
    if(a_size<2)
    {
        printf("invalid");
    }
    for(int i=1;i<a_size;i++){
        if(a[i]>lrgst){
            scndlrgst=lrgst;
            lrgst=a[i];
        }
        else if(a[i]>scndlrgst&&a[i]!=lrgst){
            scndlrgst=lrgst;
        }
    }
    printf("scnd lrgst ele is:%d",scndlrgst);
}
int main(){
    int i,size;
    printf("entr d size of an array");
    scanf("%d",&size);
    int a[size];
    printf("entr d array ele");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    fndscndlrgst(a,size);
    return 0;
}

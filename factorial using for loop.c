#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i;
    int fact=1;
    scanf("%d\n",&n);
    for(i=n;i>=1;i--){
        fact*=i;
    }
    printf("%d\n",fact);
    return 0;
}

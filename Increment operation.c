#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i=5;
    scanf("%d",&i);
    int j=i++;
     printf("after postfix increment i=%d j=%d\n", i, j);
    i=5;
    j=++i;
     printf("after prefix increment i=%d j=%d\n", i, j);
    return 0;
}

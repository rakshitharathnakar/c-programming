#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void printthrlrgst(int a[], int a_size) {
    int i, fst, scnd, thrd;
    
    if (a_size < 3) {
        printf("Invalid input. Array size should be at least 3.\n");
        return;
    }
    
    fst = scnd = thrd = INT_MIN;
    
    for (i = 0; i < a_size; i++) {
        if (a[i] > fst) {
            thrd = scnd;
            scnd = fst;
            fst = a[i];
        } else if (a[i] > scnd) {
            thrd = scnd;
            scnd = a[i];
        } else if (a[i] > thrd) {
            thrd = a[i];
        }
    }
    
    printf("The largest three distinct elements are: %d, %d, %d\n", fst, scnd, thrd);
}

int main() {
    int i, size;
    
    printf("Enter the array size: ");
    scanf("%d", &size);
    
    
    
    int a[size];
    
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    printthrlrgst(a, size);
    
    return 0;
}

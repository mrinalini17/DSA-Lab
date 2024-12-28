/*Q3. WAP to sort an array of n dates in an ascending order using
Bubble sort. Date structure is {day, month, year }.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[20], i, n, temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter date in yyyymmdd format:\n");

    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int b=0; b<n-1; b++){
        for (int k=0; k<n-1; k++){
            if (a[k] > a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    
    printf("\nThe dates in increasing order is:\n");
    for (int j=0; j<n; j++){
        printf("%d\n", a[j]);
    }
    return 0;
}
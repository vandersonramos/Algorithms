#include <stdio.h>
#include <stdlib.h>
 
#define SIZE 10
 
void swap(int *x,int *y);
void buble_sort(int array[], const int n);
void display(int array[], int size);
 
int main()
{
    int array[SIZE] = {8,5,2,3,1,6,9,4,0,7};
 
    printf("Unordered array:\n");
    display(array, SIZE);
 
    buble_sort(array, SIZE);
 
    printf("The array using using bubble sort algorithm:\n");
    display(array, SIZE);

    return 0;
}
 
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void buble_sort(int array[], const int size) {
    
    int i, j;

    for (i = 0; i< (size - 1); i++) {
        for(j = 0; j < (size - (i + 1)); j++) {
        
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }        
    }
}

void display(int array[], const int size) {

    int i;
    
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
 
    printf("\n");
}

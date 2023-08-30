// C program for insertion sort
#include <math.h>
#include <stdio.h>
 
/* Function to sort an array
   using insertion sort*/
void insertionSort(int arr[], int n){
    int i, key, j;
    int counter=0;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            counter++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        counter++;
        arr[j + 1] = key;
    }
    printf("Comparisons: %d\n", counter);
}
 
// A utility function to print
// an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver code
int main()
{
    int arr[] = {6,5,4,3,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}

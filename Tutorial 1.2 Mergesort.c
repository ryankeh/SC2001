#include <stdio.h>
#include <stdlib.h>

int mergesort(int array[]);
int merge(int array1[] , int array2[]);

int main() {
    // Write C code here
    int array[8] = {1,4,3,6,2,8,5,7};
    // printf("size: %d\n", sizeof(array));


    print(array);
    mergesort(array);
    return 0;
}

int mergesort(int arr[]){
    int size = sizeof(arr);
    printf("size: %d\n", size);
    if(size==1) return 0;
    int* arr1;
    int* arr2;
    int i=0;
    
    int newsize = size/2;
    arr1 = (int*)malloc(newsize * sizeof(int));
    arr2 = (int*)malloc(newsize * sizeof(int));
    
    

    for(i=0; i<size/2; i++){
        arr1[i] = arr[i];
    }
    
    int j=0;
    for(; i<size; i++){
        arr2[j] = arr[i];
        j++;
    }
    
    print(arr1);
    print(arr2);
    // mergesort(arr1);
    // mergesort(arr2);
    merge(arr1,arr2);
    return 0;
}

int merge(int array1[] , int array2[]){

}

void print(int array[]){
    int size = sizeof(array);
    printf("size: %d\n", size);
    for(int i=0;i<size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

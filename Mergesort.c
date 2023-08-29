#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int array[8] = {1,4,3,6,2,8,5,7};
    // printf("size: %d\n", sizeof(array));


    for(int i=0;i<(sizeof(array)/sizeof(int));i++){
        printf("%d ", array[i]);
    }
    mergesort(array);
    return 0;
}

int mergesort(int array[]){
    int size = sizeof(array);
    printf("\nsize: %d\n", size);
    // if(size==1) return array;
    // int* arr1, arr2;
    
    // arr1 = (int*)malloc(size/2 * sizeof(int));
    // arr2 = (int*)malloc(size/2 * sizeof(int));


    // for(int i=0, i<(size/2), i++){
    //     array1[i] = array[i];
    // }

}

int merge(int array1[] , int array2[]){

}

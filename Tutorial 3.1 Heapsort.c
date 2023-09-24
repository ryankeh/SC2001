// Online C compiler to run C program online
#include <stdio.h>

int arr[80];

int main() {
    // Write C code here
    int n=0;
    printf("Enter a string: \n");
    while (1) {
        if (scanf("%d", &arr[n]) != 1) break;
        n++;
    }

    int i=0;
    while(arr[i]!=NULL){
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}

void heapSort(int n){
    for(i=n;i>0;i--){
        //goes from last index to second one
        //first index will be the lowest at the end
        
    }
}

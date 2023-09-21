// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[80];
    int n=0;
    printf("Enter a string: \n");
    while (1) {
        if (scanf("%d", &arr[n]) != 1) {
            // If the input is not an integer, stop reading
            break;
        }
        n++; // Increment the count of elements
    }
    
    int pivot = selectPivot(arr,n);
    printf("pivot: %d\n", pivot);
    
    
    int i=0;
    while(arr[i]!=NULL){
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}

int selectPivot(int arr[], int length){
    if (length < 3) {
        return -1;
    }

    int first = arr[0];
    int middle = arr[length / 2];
    int last = arr[length - 1];

    if ((first >= middle && first <= last) || (first <= middle && first >= last)) {
        return first;
    } else if ((middle >= first && middle <= last) || (middle <= first && middle >= last)) {
        return middle;
    } else {
        return last;
    }
}

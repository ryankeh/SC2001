// Online C compiler to run C program online
#include <stdio.h>

int pivotIndex;
int arr[80];

void quicksort(int n, int m);
int partition( int low, int high);
void swap(int a, int b);

int main() {
    // Write C code here
    int n=0;
    printf("Enter a string: \n");
    while (1) {
        if (scanf("%d", &arr[n]) != 1) break;
        n++;
    }
    
    // pivotIndex = selectPivot(arr,n);
    // printf("pivot index: %d\n", pivotIndex);
    
    quicksort(0,n-1);
    
    int i=0;
    while(arr[i]!=NULL){
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}

void quicksort(int n, int m){
    int pivot_pos;
    if( n>=m) return;
    pivot_pos = partition(n,m);
    quicksort(n, pivot_pos - 1);
    quicksort(pivot_pos + 1, m);
}

int partition( int low, int high){
    int i, last_small, pivot;
    int mid = (low+high)/2;
    swap(low, mid);
    pivot = arr[low];
    last_small = low;
    for(i=low+1;i<=high;i++){
        if(arr[i]<pivot) swap(++last_small,i);
    }
    swap(low,last_small);
    return last_small;
}

void swap(int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int selectPivot(int arr[], int length){
    if (length < 3) return -1;

    int first = arr[0];
    int middle = arr[length / 2];
    int last = arr[length - 1];

    if ((first >= middle && first <= last) || (first <= middle && first >= last)) return 0;
    else if ((middle >= first && middle <= last) || (middle <= first && middle >= last)) return length/2;
    else return length-1;
}

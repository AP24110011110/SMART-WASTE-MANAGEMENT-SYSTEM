#ifndef ALGORITHMS_H
#define ALGORITHMS_H

// Binary Search
int binary_search(int arr[], int n, int key){
    int l = 0, r = n - 1;

    while(l <= r){
        int m = (l + r) / 2;

        if(arr[m] == key) return m;
        else if(arr[m] < key) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

// Bubble Sort (FIXED)
void bubble_sort(int arr[], int n){
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

#endif

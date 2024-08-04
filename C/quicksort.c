
void swap(int* a, int* b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
int Hoare(int* array, int start, int end, int pivot){
    int i = start;
    int j = end;
    for(;;){
        while(i < end && array[i] < pivot){
            i++;
        }
        while(j > start && array[j] >= pivot){
            j--;
        }
        if(i >= j){
            return j;
        }
        swap(array+i, array+j);
    }
}
void quicksort(int* array, int start, int end){
    if(end-start <= 1){
        return;
    }
    int pivot = array[start + ((end-start)/2)];
    int mid = Hoare(array, start, end, pivot);
    quicksort(array, start, mid);
    quicksort(array, mid+1, end);
}

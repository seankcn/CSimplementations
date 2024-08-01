
int binary_Search(int* array, int len, int target){
    int start = 0;
    int end = len-1;
    while(start <= end){
        int pos = start + ((end-start) >> 1);
        if(array[pos] == target){
            return pos;
        }else if(array[pos] > target){
            end = pos-1;
        }else{
            start = pos+1;
        }
    }
    return -1;
}

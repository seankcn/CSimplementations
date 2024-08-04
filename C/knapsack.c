
int max(int a, int b) { return (a > b) ? a : b; }

int knapsack(int* values, int* weights, int len, int constraint){
    if(len == 0 || constraint == 0){
        return 0;
    }
    if(weights[len-1] > constraint){
        return knapsack(values, weights, len-1, constraint);
    }
    int v1 = knapsack(values, weights, len-1, constraint);
    int v2 = values[len-1] + knapsack(values, weights, len-1, constraint-weights[len-1]);
    return max(v1, v2);
}

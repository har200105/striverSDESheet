bool comp(Item a, Item b) {
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2; 
}
// function to return fractionalweights
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    
    sort(arr, arr + n, comp); 
    
    int curWeight = 0; 
    double finalvalue = 0.0; 
 
    
    for (int i = 0; i < n; i++) {
        // If the weight of current item and weight already in knapsack is less
        // than equal to knapsack capacity, push it to the knapsack
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
 
        //else add the a part of the current wait which can be included in
        //knapsack
        
        else {
            int remain = W - curWeight;
            finalvalue += (arr[i].value / (double)arr[i].weight) * (double)remain;
            break;
        }
    }
 
    return finalvalue;
    
}
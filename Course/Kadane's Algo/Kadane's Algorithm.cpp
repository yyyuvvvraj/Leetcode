#include <iostream>
using namespace std;

//BruteForce Approach
int BruteForce(int *arr, int n) {
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "MaxSum is:  " << maxSum << endl;
    return maxSum;
}

//Kadane's Algorithm
int Kadane(int *arr,int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << "MaxSum using Kadane's algorithm is:  " << maxSum << endl;
    return maxSum;
}

int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr)/sizeof(int);
    BruteForce(arr,n);
    Kadane(arr,n);
    return 0;
}

//
// Created by Yuvraj Rajni Sachin Deshmukh on 24/02/26.
//
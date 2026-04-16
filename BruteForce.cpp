#include <iostream>
#include <algorithm>  
using namespace std;

int maxProfit(int arr[], int n) {
    int maxP = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int profit = arr[j] - arr[i];
            maxP = max(maxP, profit);
        }
    }
    return maxP;
}

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    int arr[n];
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = maxProfit(arr, n);
    cout << "Maximum Profit:" << result << endl;
    return 0;
}

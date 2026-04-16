#include <iostream>
#include <algorithm>  
using namespace std;
int maxProfit(int arr[], int n) {
    if (n < 2) return 0;
    int minPrice = arr[0];
    int maxProfitSoFar = 0;
    for (int i = 0; i < n; i++) {
        minPrice = min(minPrice, arr[i]);
        maxProfitSoFar = max(maxProfitSoFar, arr[i] - minPrice);
    }
    return maxProfitSoFar;
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
    cout << "Maximum Profit: " << result << endl;
    return 0;
}

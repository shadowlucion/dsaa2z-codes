#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findNumberOfTriangles(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    
    int count = 0;
    
    for (int k = n - 1; k >= 2; k--) {
        int i = 0, j = k - 1;
        
        while (i < j) {
            if (arr[i] + arr[j] > arr[k]) {
                count += (j - i);
                j--;
            } else {
                i++;
            }
        }
    }
    
    return count;
}

int main() {
    vector<int> arr1 = {10, 21, 22, 100};
    int n1 = arr1.size();
    cout << findNumberOfTriangles(arr1, n1) << endl;  // Output: 1

    vector<int> arr2 = {4, 6, 3, 7, 8, 10};
    int n2 = arr2.size();
    cout << findNumberOfTriangles(arr2, n2) << endl;  // Output: 20
    
    return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, ans = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        for (int k = j; k < n; k++) {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
    cout << arr[i];
    
  }

  return 0;
}
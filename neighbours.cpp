#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < 0 && arr[i-1] < 0)
    {
      cout << arr[i-1] << " " << arr[i] << "\n";
    }
    else if (arr[i] > 0 && arr[i-1] > 0)
    {
      cout << arr[i-1] << " " << arr[i] << "\n";
    }
  }
  
  return 0;
}
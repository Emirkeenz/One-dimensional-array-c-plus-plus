#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  float arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int mn = arr[0], minIndex = 0;
  for(int i=0; i<n; i++)
  {
    if( arr[i] < mn)
    {
      mn=arr[i];
      minIndex = i;
    }
  }
  float first = arr[0];
  arr[0] = arr[minIndex];
  arr[minIndex] = first;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  return 0;
}
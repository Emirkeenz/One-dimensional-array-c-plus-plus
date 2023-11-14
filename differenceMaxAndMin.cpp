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
  float mx = arr[0];
  float mn = arr[0];
  for(int i=1; i<n; i++)
  {
    if( arr[i] > mx)
      mx = arr[i];

    if( arr[i] < mn)
      mn=arr[i];
  }
  cout << mx - mn;
  return 0;
}
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

  int mx = arr[n-1], maxIndex = n-1;

  for(int i=n-1; i>=0; i--)
  {
    if(mx < arr[i])
    {
      mx=arr[i];
      maxIndex = i;
    }
  }

  arr[maxIndex] = arr[n-1];
  arr[n-1] = mx;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  return 0;
}
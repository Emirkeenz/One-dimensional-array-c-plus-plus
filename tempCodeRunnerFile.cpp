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

  int mx = arr[n-1], maxIndex = n;

  for(int i=n; i>0; i--)
  {
    if(mx < arr[i])
    {
      mx=arr[i];
      maxIndex = i;
    }
  }

  //int lastOne = sizeof(arr) / sizeof(arr[0]);
  //int last = arr[n-1];
  //last = mx;
  // arr[n-1] = mx;
  arr[maxIndex] = arr[n-1];
  arr[n-1] = mx;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  return 0;
}
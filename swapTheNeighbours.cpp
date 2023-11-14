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

  for (int i = 1; i < n; i+=2)
  {
    int forCurrent, forNext;
    forCurrent = arr[i-1];
    forNext = arr[i];

    arr[i] = forCurrent;
    arr[i-1] = forNext;   
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  
  return 0;
}
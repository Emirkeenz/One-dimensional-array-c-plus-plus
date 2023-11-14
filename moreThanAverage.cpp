#include <iostream>
using namespace std;

int main() {
  int n, count = 0, sum=0, sumGreaters = 0; 
  float average = 0;
  cin >> n;
  float arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  average = (float (sum) / (sizeof(arr) / sizeof(int)));
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > average)
    {
      sumGreaters += arr[i];
      count++;
    }
  }
  cout << sumGreaters << " " << count;
  return 0;
}
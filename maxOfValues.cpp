#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  cin >> n;
  float arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] < 0)
    {
      arr[i] *= (-1);
    }
  }
  float mx = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > mx)
    {
      mx = arr[i];
    }
  }
  cout << fixed << setprecision(2) << mx;
  return 0;
}
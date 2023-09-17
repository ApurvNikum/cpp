#include <iostream>
using namespace std;

int main() {
  // size of the square
  int n;
  cin>>n;
  // outer loop
  for (int i = 1; i <= n; i++) {
    // inner loop
    for (int j = 1; j <= i; j++) {
      cout << "*";
     
    }
     cout << "\n";
  }
  return 0;
}
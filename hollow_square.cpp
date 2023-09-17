#include <iostream>
using namespace std;

int main() {
  // size of the square
  int n;
  cin>>n;
  // outer loop
  for (int i = 0; i < n; i++) {
    // inner loop
    for (int j = 0; j < n; j++) {
      // print only star in first and last row
      if (i == 0 || i == n - 1) {
        cout << "*";
      }
      else {
        // print star only at first and last position row
        if (j == 0 || j == n - 1) {
          cout << "*";
        }
        else {
          cout << " ";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}
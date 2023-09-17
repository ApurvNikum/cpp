#include <iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
  for (int i = 1; i <= n; i++) {
    // print spaces
    for (int j = 1; j <= n - i ; j++) {
      cout << " ";
    }
    // print number
    for (int k = i; k <= 2 * i - 1; k++) {
      cout << k;
    }
    
    for(int l=1;l<=i-1;l--){
        cout<< 2*(i-1);
        
    }
    cout << "\n";
  }
  return 0;
}
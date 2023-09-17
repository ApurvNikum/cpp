#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        
       
        //for numbers
        for(int k =1;k<=n-i+1;k++){
            cout<<n-i+1;
        }
		for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            char startchar = 'A' + i -1;
            char A = startchar + j -1;
            cout<<A;
        }
        cout<<endl;
    }
    return 0;
}
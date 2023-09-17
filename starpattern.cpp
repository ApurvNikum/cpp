#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int currRow =1;currRow<=n;currRow++){
        for(int spaces =1 ;spaces<=n-currRow;spaces++){
            cout<<" ";
        }
        int collen = (2*currRow) - 1;
        for(int currColumn=1;currColumn<=collen;currColumn++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
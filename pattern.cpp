#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
           char count='A'+i-1;
           cout<<count;
           j++;

        }
        cout<<endl;
        i++;
    }
}
// A
// BB
// CCC
// DDDD

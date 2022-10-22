#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x;
    n=10-n;
     cout<<n*(n-1)*3<<endl;


}
    return 0;
}


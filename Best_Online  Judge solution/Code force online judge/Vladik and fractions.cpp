#include<bits/stdc++.h>
using namespace std;

long long n;
int main()
{
    cin>>n;
    if(n==1)
        cout<<"-1"<<endl;
    else
    cout<<n<<" "<<n+1<<" "<<n*(n+1)<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int fact(int N)
{
    //Base Case
    if(N==0)
    {
        return 1;
    }
    return N*fact(N-1);
}
int main() {
    int N;//Number whose factorial is to be found
    cin>>N;
    cout<<fact(N)<<endl;
}

#include <iostream>
#include <vector>
using namespace std;

void Fib(int n)
{
    vector<int>A;
    A.push_back(0);
    A.push_back(1);
    if(n==0) cout<<A.at(0);
    else if (n==1) cout<<A.at(0)<<" "<<A.at(1);
    else {
        int i=0;
        while(i<n)
        {
           A.push_back[i]= A.at(i-1)+A.at(i-2);
            cout<<A.at(i-1)+A.at(i-2)<<" ";
            i++;
            }
    }

}
int main()
{
    int n;
    cin>>n;
    Fib(n);
    return 0;
}

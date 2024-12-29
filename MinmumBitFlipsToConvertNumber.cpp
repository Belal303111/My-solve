#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> ToBinary(int A)
    {
        vector<int>n;
        while(A!=0)
        {
            n.push_back(A%2);
            A/=2;
        }

        return n;
    }
int minBitFlips(int start,int goal) {
        vector<int>n,m;
       n=ToBinary(start);
       m=ToBinary(goal);
      while(n.size() != m.size())
      {
          if(n.size()>m.size())
            m.push_back(0);
          else n.push_back(0);
      }
      //size of n = size of m
  int c=0,i=0;
  while(n!=m)
  {
      if(n.at(i)!= m.at(i))
      {
      n.at(i)= m.at(i)
        c++;
      }
       reverse(n.begin(),n.end());
       reverse(m.begin(),m.end());
  }
  return c;
    }
int main()
{
    int start,gole;
    cin>>start>>gole;
    vector<int>x=ToBinary(start);
    vector<int>y=ToBinary(gole);
    cout<<minBitFlips(x,y);
    /*for(int i=0;i<x.size();i++)
        cout<<x.at(i)<<" ";*/
    return 0;
}

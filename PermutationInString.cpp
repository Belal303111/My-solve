#include <iostream>
#include <algorithm>

using namespace std;

    bool checkInclusion(string s1, string s2) {
      do
        {
            for(int i=0;i<s1.size();i++) cout<<s1[i]<<" ";
            cout<<endl;
            int k=0;
        //;  //return boolean value
        while(k<s2.size() &&  (s2[k]==s2[k+1] || s2[k]!=s1[0]))
         k++;
         cout<<"K:"<<k<<" ";
        if(k!=s2.size())
        {
            int f=0;
            while(f<s1.size())
            {
            if(s2[k]==s1[f])
            {
                f++;
                k++;
            }
            else break;
           // else return false;
            }
            cout<<"F:"<<f<<" ";
            if(f==s1.size()) return true;
               // cout<<"True"<<endl;
           //else return false;
           //cout<<"False"<<endl;
        }

       // else return false;
       //cout<<"False"<<endl;
        }while(next_permutation(s1.begin(),s1.end()));
        return false;
    }
int main()
{
    string n,m;
    cout<<"enter the strings"<<endl;
    cin>>n>>m;
    cout<<checkInclusion(n,m);
    return 0;
}

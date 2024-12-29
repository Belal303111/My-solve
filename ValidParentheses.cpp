#include <iostream>

using namespace std;
 bool isValid(string s) {
       int i=0;
       while(i<s.size())
       {
        int j=0;
        if(s[i]=='(')
       {
        while(j<s.size() && s[j]!= ')')
       {
            if(s[j]==')') return true;
            else j++;
       }
     //  return false;
       }
        if(s[i]=='[')
       {
        while(j<s.size() && s[j]!= ']')
       {
            if(s[j]==']') return true;
            else j++;
       }
      // return false;
       }
        if(s[i]=='{')
       {
        while(j<s.size() && s[j]!= '}')
       {
            if(s[j]=='}') return true;
            else j++;
       }
       i++;
       }
       }
       return false;
    }

int main()
{
    string n;
    cin>>n;
    cout<<isValid(n);
    return 0;
}

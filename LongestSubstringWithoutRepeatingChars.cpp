#include <iostream>

using namespace std;

int lengthOfLongestSubstring(string s) {
       int i=0,c=0;
       int k=0,m=0; //the same element sequentialy
       while(i<s.size())
       {
           if(s[i]==s[i+1])
           {
               k=i;
            while(k<s.size())
            {
            for(int n=k+1;n<s.size();n++)
            if(s[k]==s[n]) m++;
                  k++;
              }
           }
        else{
        int j=i+1;
        while(j<s.size() && s[i]!=s[j])
            j++;

        if(s[i]==s[j])
            while(j<s.size() && s[i]==s[j])
        {
            i++;
            j++;
            c++;
        }
        //c+=1;
        }
        i++;
       }
       if(c>m)
       return c;
       else return m;
    }

int main()
{
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);

    return 0;
}

#include <cstdlib>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

    int myAtoi(string s) {

       int i=0;
       if(int(s[i]) >= 58) return 0;
        bool test=true;
      while(s[i]==' ') i++;
      if(int(s[i]) >= 58) return 0;
        if(s[i]=='-')
        {
            test=false;
            i++;
        }
        if(s[i]=='+') i++;
        if(s[i]=='0')
         {
            if(int(s[i+1]) < 48 || int(s[i+1]) > 57)
            return 0;
            else i++;
         }
         //we remove all things from the left and need to check on the numbers
         long long sum=0;
         while(s[i]!=' ' && int(s[i])<58 && int(s[i])>48)
         {
          sum*=10;
          sum+=int(s[i])-48;
          i++;
         }
         if(sum>2147483647 || sum<-2147483647) return 0;
         if (test==false) return -sum;
         else return sum;

      /* if(int(s[i]) >= 49 && int(s[i]) <= 57)
       {
        long long sum=0;
        while(int(s[i]) >= 49 && int(s[i]) <= 57)
       {
        sum*=10;
        sum+=int(s[i])-48;
        i++;
       }
       if(test==false) sum=-sum;
       if(sum>2147483647 || sum<-2147483647) return 0;
        else return sum;
       }*/
       return 0;
    }
int main()
{
    string n;
    getline(cin,n);
    cout<<myAtoi(n);
    return 0;
}

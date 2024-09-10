class Solution {
public:
    int romanToInt(string s) {
      if(s.length()==1)
      {
        if(s=="I") return 1;
        else if (s=="V") return 5;
        else if (s=="X") return 10;
        else if (s=="L") return 50;
        else if (s=="C") return 100;
        else if (s=="D") return 500;
        else if (s=="M") return 1000;
      }
      else
      {
        int i=0;
        int sum=0;
        while(i<s.length())
        {
            if(s[i]=='I' && s[i+1]=='V')
              {
                sum+=4;
                i+=2;
              }
            else if(s[i]=='I' && s[i+1]=='X')
            {
                sum+=9;
                i+=2;
            }
            else if(s[i]=='X' && s[i+1]=='L')
            {
                sum+=40;
                i+=2;
            }
            else if(s[i]=='X' && s[i+1]=='C')
            {
                sum+=90;
                i+=2;
            }
            else if(s[i]=='C' && s[i+1]=='D')
            {
                sum+=400;
                i+=2;
            }
            else if(s[i]=='C' && s[i+1]=='M')
            {
                sum+=900;
                i+=2;
            }
            else
            {
                if(s[i]=='I') sum+=1;
            else if(s[i]=='V') sum+=5;
            else if(s[i]=='X') sum+=10;
            else if(s[i]=='L') sum+=50;
            else if(s[i]=='C') sum+=100;
            else if(s[i]=='D') sum+=500;
            else if(s[i]=='M') sum+=1000;
            i++;
            }
        }
        return sum;
      }
      return 0;
    }

};

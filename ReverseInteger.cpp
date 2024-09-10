class Solution {
public:
    int reverse(int x) {
        if(x==0) return 0;
        if(x> 2147483647 || x <-2147483647) return 0;
        bool test=true;
        if(x<0)
        {
            test=false;
            x=x*-1;
        }
      long long n=0;
      while(x!=0)
      {
        n+=x%10;
        x/=10;
        if(x!=0)
        n*=10;
      }
    if(test==false)
    n*=-1;
    if(n > 2147483647 || n <-2147483647) return 0;
    return n;
    }
};

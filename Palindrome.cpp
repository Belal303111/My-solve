class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else{
        vector<int> n;
        int i=x;
        while(i!=0)
        {
            n.push_back(i%10);
            i=i/10;
        }
        int j=0,k=n.size()-1;
        while(j<n.size()/2)
        {
            if(n.at(j)==n.at(k))
        {
            j++;
            k--;
        }
        else return false;
        }
        return true;
    }
    }
};

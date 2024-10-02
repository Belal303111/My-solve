class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
       if(strs.empty()) return "";
    int k=0;
    while(k<strs[0].size())
     {
    int j=1;
    while(j<strs.size())
     {
     if(strs.at(0)[k]==strs.at(j)[k])   j++;
     else  return strs.at(0).substr(0,k);
     }
        k++;
   }
 return strs.at(0).substr(0,k);
    }
};

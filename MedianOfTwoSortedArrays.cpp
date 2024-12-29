class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
     int i=0,j=0;
      while(i<nums1.size() && j<nums2.size())
      {
        if(nums1[i]<nums2[j])
        {
            nums3.push_back(nums1[i]);
            i++;
        }
        else{
            nums3.push_back(nums2[j]);
            j++;
        }
      }
      if(i<nums1.size())
      for(i;i<nums1.size();i++)
      nums3.push_back(nums1.at(i));
      else
      for(j;j<nums2.size();j++)
      nums3.push_back(nums2.at(j));

     if(nums3.size()%2==0)
      {
        int x = nums3.size()/2-1;
        int y = x+1;
        return (nums3[x] + nums3[y])/2.0;
      }
      else{
        int x= nums3.size()/2;
        return nums3[x];
      }
    }
};

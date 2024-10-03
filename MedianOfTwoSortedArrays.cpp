#include <iostream>
#include <vector>
using namespace std;

void findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
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
      for(i;i<nums1.size();i++)
        nums3.push_back(nums1[i]);
      for(j;j<nums2.size();j++)
      nums3.push_back(nums2[j]);
       cout<<"The sorted elements: ";
      for(int k=0;k<nums3.size();k++)
        cout<<nums3[k]<<" ";
        cout<<endl;
//==============================================

    if(nums3.size()%2==0)
      {
        cout<<"IF case"<<endl;
        int x = nums3.size()/2-1;
        cout<<"X: "<<x<<endl;
        int y = x+1;
        cout<<"Y: "<<y<<endl;
        cout<<"nums3[x]: "<<nums3[x]<<endl;
        cout<<"nums3[y]: "<<nums3[y]<<endl;
        cout<<"The result that you need: "<< (nums3[x] + nums3[y])/2.0;
      }
      else{
        cout<<"ELSE case"<<endl;
        int x= nums3.size()/2;
        cout<<"X: "<<x<<endl;
        cout<<"The result that you need: "<< nums3[x];
      }
    }

int main()
{
    int x,y;
    vector<int>n,m;
    cout<<"enter the delimiters"<<endl;
    cin>>x>>y;
    cout<<"enter n:"<<endl;
    int h;
    for(int i=0;i<x;i++)
        {
            cin>>h;
            n.push_back(h);
        }cout<<"enter m:"<<endl;
        for(int i=0;i<y;i++)
        {
            cin>>h;
            m.push_back(h);
        }
       findMedianSortedArrays(n,m);
    return 0;
}

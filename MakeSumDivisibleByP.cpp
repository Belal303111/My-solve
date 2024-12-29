#include <iostream>
#include <vector>
using namespace std;

void minSubarray(vector<int>& nums, int p) {
        int i=0,c=0;
        while(i<nums.size())
        {
            c+=nums[i];
               i++;
        }
        cout<<"C:"<<c<<endl;
       if(c%p==0) cout<<"The result:"<< 0<<endl;
            //to delete more than one element
            int h=1;
          while(h<nums.size())
            {
                int f=0;
            while(f<h)
            {
                cout<<"F:"<<f<<" ";
                cout<<"H:"<<h<<" ";
             int x=c;
              x-=nums[f];
             cout<<"X:"<<x<<" ";

             if(x%p==0) {
                cout<<"The result:"<< h;
               break;
             }
               f++;
            } cout<<endl;
            h++;
        }
    }
int main()
{
  vector <int>n;
  int x;
  cout<<"enter the number of the elements:";
  cin>>x;
  cout<<"enter the elements"<<endl;
  int y;
  for(int i=0;i<x;i++)
        {
            cin>>y;
            n.push_back(y);
        }
        int p;
        cout<<"enter P:";
        cin>>p;
        minSubarray(n,p);

    return 0;
}

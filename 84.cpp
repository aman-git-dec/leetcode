#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> heights = {2,1,5,6,2,3};
  int a,i,j,k,count,max=heights[0];
        for(i=0;i<heights.size()-1;i++)
        {
            k=i;
            j=i;
            count=1;
            while(heights[k]<heights[j+1])
            {
                count++;
                j++;
            }
            a=count*heights[k];
            if(a>max) max=a;
        }
        cout<<max;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
 
 
int main()
{
    long long int n,q,i,x,cnt;
    cin>>n>>q;
    vector<long int>arr;
    std::vector<long int> v;
    v.push_back(1);
    cnt=1;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
        if(i!=0)
        {
            if(arr[i]==arr[i-1])
            {
                cnt++;
                v.push_back(cnt);
            }
            else
            {
                cnt=1;
                v.push_back(cnt);
            }
        }
    }
 
    while(q--)
    {
        long long int l,r,k,flg=0,count=0,max=0,ans;
        cin>>l>>r>>k; 
        ans=arr[l-1];  
        for (i = l-1; i < r; ++i)
        {
               if(v[i]>=k)
                {
                    cout<<arr[i]<<endl;flg=1;break;
                }
        }   
        if(!flg)
            cout<<"-1"<<endl;
    }
 
 
    return 0;
}
 
/*
 
1 1 2 2 2 3 3 3 3 1
1 2 1 2 3 1 2 3 4 1
 
*/ 

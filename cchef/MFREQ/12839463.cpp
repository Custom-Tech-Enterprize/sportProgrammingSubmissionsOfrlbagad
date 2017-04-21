#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
 
 
int main()
{
    long long int n,q,i,x;
    cin>>n>>q;
    vector<long int>arr;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    while(q--)
    {
        long long int l,r,k,flg=0,count=0;
        cin>>l>>r>>k;       
        count=1;
        
        for(i=l;i<r;i++)
        {
            if(count>=k)
            {
                    cout<<arr[i]<<endl;flg=1;break;
            }
            if(arr[i]==arr[i-1])
            {
                count++;
                if(count>=k)
                {
                    cout<<arr[i]<<endl;flg=1;break;
                }
            }
            else
            {
                count=1;
            }
        }
 
        if(flg==0)
            cout<<"-1"<<endl;
    }
 
 
    return 0;
} 

#include <iostream>
using namespace std;
 
int main()
{
    long long int n,q,i;
    cin>>n>>q;
    long long int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    while(q--)
    {
        long long int l,r,k,flg=0,count=0;
        cin>>l>>r>>k;       
        count=1;
        for(i=l;i<r;i++)
        {
            if(l==r)
            {
                cout<<arr[l-1]<<endl;flg=1;break;
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

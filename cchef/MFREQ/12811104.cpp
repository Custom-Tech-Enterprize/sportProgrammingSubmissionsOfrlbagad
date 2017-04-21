#include <iostream>
using namespace std;
 
int main()
{
    int n,q,i;
    cin>>n>>q;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    while(q--)
    {
        int l,r,k,flg=0;
        int x[100000]={0};
        cin>>l>>r>>k;
        
        int cnt=1;x[arr[l-1]]++;
        for(i=l;i<=r-1;i++)
        {
            if(arr[i]==arr[i-1])
            {
                x[arr[i]]++;
                if(x[arr[i]]>=k)
                {
                    cout<<arr[i]<<endl;flg=1;break;
                }
            }
            else
            {
                x[arr[i]]=1;
            }
        }
 
        if(!flg)
            cout<<"-1"<<endl;
    }
 
 
    return 0;
} 

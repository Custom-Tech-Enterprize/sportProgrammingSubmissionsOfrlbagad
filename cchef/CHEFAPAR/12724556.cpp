#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
 
 
int main() {
 
	long int t;
	cin>>t;
	while(t--)
    {
    	long int n,cnt=0,f=1,o=0,z=0;
    	cin>>n;
    	vector<long int>v;
    	for(long int i=0;i<n;i++)
    	{
    		long int x;
    		cin>>x;
    		if(x==1)
    			o++;
    		else
    			z++;
    		v.push_back(x);
    	}
    	for (long int i = 0; i < v.size(); ++i)
    	{
    		if(v[i]!=1)
    			break;
    		else
    			cnt++;
    	}
    	cout<<1000*z+(o-cnt+z)*100<<endl;
    }
    return 0;
 
}
 

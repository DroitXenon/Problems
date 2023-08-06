#include<stdio.h>
#include<iostream>
using namespace std;
#define maxn 100005          
int n;
int m;
int a[maxn];                 //  2 9 12 16 25
                             //  1 25 11
int binsearch(int tofind)
{
    int high=n,low=1;
    if(tofind<=a[1]) return 1;
    while(1)
    {
        int mid=(high+low+1)/2;
        if(high==low+1) return high;
        else if(a[mid]==tofind) return mid;
        else if(a[mid]>tofind)
        {
            high=mid;
        }
        else if(a[mid]<tofind)
        {
            low=mid;
        }
    }
}
 
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i>1)
            a[i]+=a[i-1];
    }
    cin>>m;
    for(int j=0;j<m;j++)
    {
        int k;
        cin>>k;
        cout<<binsearch(k)<<endl;
    }
    return 0;
}
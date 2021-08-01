/* Q1. Given a sorted array of positive integers containing few duplicate elements,
 design an algorithm and implement it using a program to find whether the given
 key element is present in the array or not. If present, then also find the number
 of copies of given key. (Time Complexity = O(log n))
 For each test case T, output will be the key element and its number of copies in the
 array if the key element is present in the array otherwise print “Key not present”.
*/

#include<iostream>
using namespace std;

void search_freq(int arr[],int n,int k)
{
    int mid,ll,ul;
    int flag=0,count=0;
    ll=0;ul=n;
    while(ll<=ul)
    {
        mid=(ul+ll)/2;
        if(arr[mid]==k)
        {
            flag=1;//Key Present
            break;
        }
        else if(arr[mid]<k)
        {
            ll=mid+1;
        }
        else if(arr[mid]>k)
        {
            ul=mid-1;
        }
    }
    if(flag==1)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                count++;//Number of Duplicate Key
            }
        }
        cout<<k<<" - "<<count;
    }
    else
    {
        cout<<"Key not present";//Key not found
    }
}
int main()
{
    int t,n,k,i,r;
    int arr[100];
    cin>>t;//Number of test cases
    while(t)
    {
        cout<<"\n";
        cin>>n;//Size of array
        cout<<"\n";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];//Elements of Array
        }
        cout<<"\n";
        cin>>k;//Key
        search_freq(arr,n,k);
        t--;
    }
}
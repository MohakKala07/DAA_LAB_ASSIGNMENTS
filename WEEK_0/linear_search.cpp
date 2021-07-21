/*Q1. Given an array of nonnegative integers, design a linear algorithm and
implement it using a program to find whether a given key element is present in the array or
not. Also, find the total number of comparisons for each input case. (Time Complexity =
O(n), where n is the size of input).
*/
#include<iostream>

using namespace std;

int main()
{
    int t,n,k,c=0,flag=0;
    int arr[100];
    cin>>t;
    while(t)
    {
        cout<<"\n";
        cin>>n;
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"\n";
        cin>>k;
        for(int i=0;i<n;i++)
        {
            c++;
            if(arr[i]==k)
            {
                cout<<"Present: ";
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Not Present: ";
        }
        cout<<c;
        flag=0;
        c=0;
        t--;
    }
    return 0;
}
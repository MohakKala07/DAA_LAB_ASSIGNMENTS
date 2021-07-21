/*Q2. Given an already sorted array of positive integers, design 
an algorithm and implement it using a program to find whether a given
key element is present in the array or not. Also, find total number of
comparisons for each input case.(Time Complexity=O(log n), where n is the 
size of input).
*/
#include<iostream>

using namespace std;

int main()
{
    int t,n,k,ul,ll,md;
    int c=0,flag=0;
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
        ll=0;
        ul=n;
        while(ul>ll)
        {
            md=(ul+ll)/2;
            if(k>arr[md])
            {
                ll=md;
                c++;
            }
            else if(k<arr[md])
            {
                ul=md;
                c++;
            }
            else if(k==arr[md])
            {
                c++;
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
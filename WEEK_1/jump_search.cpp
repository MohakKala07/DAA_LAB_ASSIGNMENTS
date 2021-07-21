/*Q3. Given an already sorted array of positive integers, design an 
algorithm and implement it using a program to find whether a given key 
element is present in the sorted array or not.(Comlexity<O(n) i.e. O(sqrt(n))
where n is the number of elements need to be scanned for searching the key elemnt)
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t,n,k,step;
    int c=0,prev=0,flag=0;
    int arr[100]; 
    cin>>t;
    while(t)
    {
        cout<<"\n";
        cin>>n;
        cout<<"\n";
        step=sqrt(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"\n";
        cin>>k;
        if(k<arr[0])
        {
            c=1;
            cout<<"Not Present: "<<c;
            continue;
        }
        while(arr[min(step,n)-1]<k)
        {
            prev=step;
            step+=sqrt(n);
            c++;
            if(prev>=n)
            {
                flag=1;
                break;
            }
        }
        while(arr[prev]<k)
        {
            c++;
            prev++;
            if(prev==min(step,n))
            {
                flag=1;
                break;
            }
        }
        if(arr[prev]==k)
        {
            c++;
            cout<<"Present: ";
        }
        else if(flag==1)
        {
            cout<<"Not Present: ";
        }
        cout<<c;
        c=0;
        flag=0;
        prev=0;
        t--;
    }
    return 0;
}

/*
WEEK 5 
Question 2: To find the list of common elements from two sorted arrays.
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int N1,N2,i,j;
    cout<<"Enter the size of first array ";
    cin>>N1;
    int arr1[N1];
    cout<<"Enter first array ";
    for(i=0;i<N1;i++)
        {
            cin>>arr1[i];
        }
        
    cout<<"Enter the size of second array ";
    cin>>N2;
    int arr2[N2];
    cout<<"Enter second array ";
    for(j=0;j<N2;j++)
        {
            cin>>arr2[j];
        }
        
    i=0,j=0;
    while(i<N1 && j<N2)
    {
        if(arr1[i]<arr2[j])
            {
                i++;
            }
        else if(arr1[i]>arr2[j])
            {
                j++;
            }
        else
            {
                cout<<arr1[i]<<" ";
                i++;
                j++;
            }
    }
    return 0;
}

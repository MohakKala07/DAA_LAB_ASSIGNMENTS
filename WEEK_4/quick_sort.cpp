/*WEEK 4
Question 2: Implementation of Quick Sort
Time Complexity: Best Case - O(nlogn)
                 Worst Case - O(n^2)
*/ 

/* Quick Sort*/

#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int l, int r)
{
    int pivot= arr[l];
    int start= l;
    int end= r;
    int comp=0,inversions=0;
    
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }

        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        comp++;
        {
            swap(arr[start],arr[end]);
            inversions++;
        }
    }
    swap(arr[l],arr[end]);
return end;
}

void quick_sort(int *arr,int l,int r)
{
    if(l<r)
    {
        int loc= partition(arr,l,r);
        quick_sort(arr,l,loc-1);
        quick_sort(arr,loc+1,r);
    }
}

void display(int *arr, int n) 
{
    int flag=0;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int t,N,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>N;
        int arr[100];

        for(j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        partition(arr,0,N-1);
        display(arr,N);
        
    }
    return 0;
}

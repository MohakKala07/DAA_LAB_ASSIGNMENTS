/*WEEK 4
Question 1: Implementation of Divide and Conquer approach using merge sort
*/ 

/* Merge Sort*/

#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int l, int m, int r) 
{
    int i, j, k, nl, nr,comp=0, inv=0;
    nl = m-l+1; nr = r-m;
    int larr[10], rarr[10];
   
    for(i = 0; i<nl; i++)
        larr[i] = arr[l+i];
    for(j = 0; j<nr; j++)
        rarr[j] = arr[m+1+j];
        i = 0; j = 0; k = l;
  
    while(i < nl && j<nr)
    {
        comp++;
        if(larr[i] <= rarr[j]) 
        {
            inv++;
            arr[k] = larr[i];
            i++;
        }
        else
        {
            inv++;
            arr[k] = rarr[j];
            j++;
        }
      k++;
   }
   while(i<nl) 
   {       
        arr[k] = larr[i];
        i++; k++;
   }
   while(j<nr) 
   {
        arr[k] = rarr[j];
        j++; k++;
   }
}

void merge_sort(int *arr, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      
      merge_sort(arr, l, m);
      merge_sort(arr, m+1, r);
      merge(arr, l, m, r);
   }
}

void display(int *arr, int size) 
{
    int flag=0;
    cout<<"Sorted Array: ";
    for(int i = 0; i<size; i++)
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
        merge_sort(arr,0,N-1);
        display(arr,N);
    }
    return 0;
}

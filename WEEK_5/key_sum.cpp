/*WEEK 5 
Question 2: To find the sum of two elements which is equal to the given key element. 
The complexity of then program should be O(nlogn).
 */

#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int l, int m, int r) 
{
    int i, j, k, nl, nr;
    nl = m-l+1; nr = r-m;
    int larr[10], rarr[10];
   
    for(i = 0; i<nl; i++)
        larr[i] = arr[l+i];
    for(j = 0; j<nr; j++)
        rarr[j] = arr[m+1+j];
        i = 0; j = 0; k = l;
  
    while(i < nl && j<nr)
    {
        if(larr[i] <= rarr[j]) 
        {
            arr[k] = larr[i];
            i++;
        }
        else
        {
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

// For checking the pair//
void display(int *arr, int size,int key) 
{
    int l=0 ,r=size-1, flag =0;
    if(arr[l]+arr[r]< key)
    {
        l++;
    }
    else if(arr[l]+arr[r]>key)
    {
        r--;
    }
    else if (arr[l]+arr[r]==key)
    {
        flag=1;
    }

//Display the result//

    if(flag==0)
    {
        cout<<"No such pair exists ";
    }
    else 
    {
        cout<<"Pair exists ";
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
        int key;
        cout<<"Enter the key ";
        cin>>key;
        merge_sort(arr,0,N-1);
        display(arr,N, key);
    }
    return 0;
}

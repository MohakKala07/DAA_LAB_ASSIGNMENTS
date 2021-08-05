/*Q3. Given an unsorted array of positive integers, design an algorithm
  and implement it using a program to find whether there are any duplicate
  elements in the array or not. (use sorting)(Merge Sort here) (Time Complexity = O(n log n))
*/

#include<iostream>
using namespace std;
 
 void merge(int arr[], int l, int m, int r) 
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

void merge_sort(int arr[], int l, int r) {
   int m;
   if(l < r) 
   {
      int m = l+(r-l)/2;
      
      merge_sort(arr, l, m);
      merge_sort(arr, m+1, r);
      merge(arr, l, m, r);
   }
}

void display(int arr[], int size) 
{
    int flag=0;
    for(int i = 0; i<size; i++)
    if(arr[i]==arr[i+1])
    {
        flag=1;
    }
    if(flag==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}

 int main()
{
    int t,n,r;
    int arr[100];
    cin>>t;//Number of test cases
    while(t)
    {
        cout<<endl;
        cin>>n;//Size of array
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];//Elements of Array
        }
        cout<<endl;
        merge_sort(arr,0,n-1);
        display(arr,n);
        t--;
    }
    return 0;
}
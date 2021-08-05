/*Q2. Given an unsorted array of integers, design an algorithm and implement
  a program to sort this array using selection sort. Your program should also
  find number of comparisons and number of swaps required.
*/

#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    int i,j,min;
    int comp=0,swaps=0;
    for(i=0;i<n-1;i++)
    {
        min=i;//Index of minimum element
        for(j=i+1;j<n;j++)
        {
            comp++;
            if(arr[j]<arr[min])//Comparison
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);//Swap
        swaps++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";//Display Sorted Array
    }
    cout<<endl<<"Comparisons = "<<comp<<endl;//Display number of Comparisons
    cout<<"Swaps = "<<swaps<<endl;//Display number of Swaps
}

int main()
{
    int t,n;
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
        selection_sort(arr,n);
        t--;
    }
    return 0;
}
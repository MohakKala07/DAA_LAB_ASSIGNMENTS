/*Q1. Given an unsorted array of integers, design an algorithm and a program
  to sort the array using insertion sort. Your program should be able to find
  number of comparisons and shifts ( shifts total number of times the array
  elements are shifted from their place) required for sorting the array.
*/

#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    int i,key,j;
    int comp=0,shift=0;
    for (i=1;i<n;i++)
    {
        key=arr[i];//Key element
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] =arr[j];//Shift
            shift++;
            j--;
            comp++;//Comparison
        }
        arr[j+1]=key;//Shift
        shift++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";//Display sorted array
    }
    cout<<endl<<"Comparisons = "<<comp<<endl;//Display number of Comparisons
    cout<<"Shifts = "<<shift<<endl;//Display number of Shifts
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
        insertion_sort(arr,n);
        t--;
    }
    return 0;
}
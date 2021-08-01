/* Q3. Given an array of non-negative integers, design an algorithm and
 a program to count the number of pairs of integers such that their difference
 is equal to a given key, K.
 The output will have T number of lines.For each test case T, output will be
 the total count i.e., number of times such pair exists.
*/

#include<iostream>
#include<cmath>
using namespace std;

void diff(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==abs(k))
            {
                count++;//Count of Pair of such elements 
            }
        }
    }
    if(count!=0)
    {
        cout<<endl<<count<<endl;
    }
    else
    {
        cout<<endl<<"No such pair exists"<<endl;//Pair not found
    }
}

int main()
{
    int t,n,k;
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
        cin>>k;//Key
        diff(arr,n,k);
        t--;
    }
}
/* Q2. Given a sorted array of positive integers, design an algorithm and
 implement it using a program to find three indices i, j, k such that
 arr[i] + arr[j] = arr[k].
 The output will have T number of lines.For each test case T, print the value
 of i, j and k, if found else print “No sequence found”.
*/

#include<iostream>
using namespace std;

int main()
{
    int t,n,a,b,c,flag=-1;
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

        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]==arr[k])
                    {
                        a=i;b=j;c=k;
                        flag=1;//Sequence of Elements found
                        break;
                    }
                }
            }
        }
        if(flag==1)
        {
            cout<<endl<<a+1<<", "<<b+1<<", "<<c+1<<endl;
        }
        else if(flag==-1)
        {
            cout<<endl<<"No sequence found"<<endl;//Sequence of Elements not found
        }
        t--;
    }
}
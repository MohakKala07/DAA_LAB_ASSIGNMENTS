/* WEEK 5
Question 1: To find frequency of duplicate alphabets by implementing Counting Sort having time complexity O(n)
*/

#include <iostream>
using namespace std;

int main()
{
    int n,i,t;
    cin>>t; 
    while(t--){
        cin>>n; 
        char arr[n]; 
        
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[arr[i]-'a']++;
        }
        int max=0,in;
        for(int i=0;i<26;i++){
            if(freq[i]>max){
                max=freq[i];
                in=i;
            }
        }
        if(max>1)
            cout<<char('a'+in)<<" : "<<max<<endl;
        else
            cout<<"No Duplicates Present"<<endl;
    }
    return 0;
}

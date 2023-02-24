#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,count=0;
    int left=0,right=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        if(i!=0){
            left+=a[i-1];
        }
        right=sum-left-a[i];
        if(right==left){
            count++;
        }
    }
    cout<<count<<endl;
    if(count>0){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}

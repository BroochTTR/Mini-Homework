#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <iomanip>
using namespace std;
int main(){
    int n;
    while(true){
        cin>>n;
        if(n==-1){
            cout<<"bye";
            break;
        }
        (n>0&&n%5==0)? cout<<n/5:cout<<-1;
    }
}

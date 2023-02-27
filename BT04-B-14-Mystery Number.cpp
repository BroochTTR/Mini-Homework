#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];
    int b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n+1);
    for(int i=0;i<=n;i++){
        if(b[i]!=a[i]){
            cout<<b[i];
            break;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <iomanip>
using namespace std;

int main(){
    int n,max,min;
    double tb=0;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        tb=tb+double(a[i]);
    }
    tb=tb/double(n);
    max =*max_element(a,a+n);
    min =*min_element(a,a+n);
    cout<<min<<" "<<max<<" "<<tb;
}


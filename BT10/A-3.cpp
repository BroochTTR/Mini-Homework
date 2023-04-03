#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x;
    double y;
    void call(){
        cin>>x>>y;
    }
};

int main(){
    Point a;
    a.call();
    cout<<&a<<endl;
    cout<<&a.x<<endl;
    cout<<&a.y;
}

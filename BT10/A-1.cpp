#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x;
    int y;
    void print(){
        cout<<x<<" "<<y;
    }
};
void thamtri(Point a){
    cout<<&a<<endl;
}
void thambien(Point &a){
    cout<<&a;
}
int main(){
    Point b;
    cin>>b.x>>b.y;
    cout<<&b<<endl;
    thamtri(b);
    thambien(b);
}

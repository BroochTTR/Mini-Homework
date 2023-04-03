#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x;
    double y;
    void in(){
        cout<<x<<" "<<y;
    }
};
Point mid_point(Point a,Point b){
    Point mid;
    mid.x=(a.x+b.x)/2.0;
    mid.y=(a.y+b.y)/2.0;
    return mid;
}
int main(){
    Point b,a;
    cin>>b.x>>b.y;
    cin>>a.x>>a.y;
    Point c=mid_point(a,b);
    c.in();
}

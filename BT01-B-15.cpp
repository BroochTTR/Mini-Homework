#include <bits/stdc++.h>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    string f0="a";
    string f1="b";
    string f2;
    for(int i=2;i<=10;i++){
        f2=f1+f0;
        cout<<"f("<<i<<")"<<" la: "<<f2<<endl;
        f0=f1;
        f1=f2;
    }
}


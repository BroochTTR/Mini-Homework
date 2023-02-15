#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //first la the dc xem trc
    int first,second ;
    srand(time(NULL));
    first = rand();
    second =rand();
    while(first>100){
       first = rand();
    };
    while(second>100){
       second =rand();
    }
    if(first<=49){
        cout<<"i choose second";
    }else{
        cout<<"I choose first";
    }
    cout<<first<<second;
}


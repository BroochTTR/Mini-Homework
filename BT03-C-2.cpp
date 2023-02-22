
#include <iostream>
#include <string>

using namespace std;

int main(void)
{   int count=0;
    string s;
    cin>>s;
    int le=s.size();
    for(int i=0;i<le/2;i++){
        if(s[i]==s[le-i-1]){
            count++;
        }
    }
    if(count==le/2){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}

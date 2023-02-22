
#include <iostream>
#include <string>

using namespace std;
bool check(int a){
    int temp=a;
    int b=0;
    while(temp>0){
        b=b*10+temp%10;
        temp=temp/10;
    }
    if(b==a){
        return true;
    }else{
        return false;
    }
}
int main(void)
{   int amount,first,second,count=0;
    cin>>amount;
    for(int i=1;i<=amount;i++){
        cin>>first>>second;
        for(int j=first;j<=second;j++){
            if(check(j)==true){
               cout<<j<<" ";
               count++;
            }
        }
        if(count==0){
            cout<<1<<endl;
        }else{
            cout<<endl;
        }
        count=0;
    }
}

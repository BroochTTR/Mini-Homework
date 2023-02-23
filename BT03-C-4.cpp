#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int count =0;
    char a[m][n];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]=='*'){
                cout<<"*"<<" ";
            }else{
                if(a[i][j-1]=='*'){
                    count++;
                }if(a[i][j+1]=='*'){
                    count++;
                }
                if(i!=1){
                    for(int k=j-1;k<=j+1;k++){
                        if(a[i-1][k]=='*'){
                            count++;
                        }
                    }
                }
                if(i!=m){
                    for(int k=j-1;k<=j+1;k++){
                        if(a[i+1][k]=='*'){
                            count++;
                        }
                    }
                }
                cout<<count<<" ";
                count=0;
            }
        }
        cout<<endl;
    }
}

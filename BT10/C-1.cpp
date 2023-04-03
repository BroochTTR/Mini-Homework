#include <bits/stdc++.h>
using namespace st;
struct XLS{
    int n;
    char *str;
    XLS(const char *s){
        n=strlen(s);
        str=new char(n);
        str=s;
    }
    ~XLS()
	{
		delete [] str;
	}
    void print(){
        cout<<str;
    }
    void append(const char* a){

    }
};
int main(){
    XLS s("hello");
    XLS.print();
}

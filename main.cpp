#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"we have to find which is greater among a, b, c"<<endl;
    cout<<"enter the value of a,b,c resp: ";
    cin>>a>>b>>c;
    if (a>b) {
        if (a>c){ cout<< "a is greter than both";};
    }
    else if (b>c) {
        if (b>a) {cout<<"b is greater than both";};
        
    }
    else {
        cout<<"c is greater than both";
    }
    return 0;
}

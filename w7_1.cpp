#include <iostream>
using namespace std;


int main(){
    int x,y;
    cin>>x>>y;
    freopen("text.txt","w",stdout);
    if(y == 0)
        cerr <<"error"<<std::endl;
    else
        cout<<x/y<<std::endl;
    return 0;
}
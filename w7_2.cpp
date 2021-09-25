#include <iostream>

int main(){
    int x;
    char buf[100];
    std::cin>>x;
    std::cin.getline(buf,90);
    std::cout<<buf;
    return 0;
}
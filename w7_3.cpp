#include <iostream>
// #include <iomanip>
#include <algorithm>
#include <fstream>
#include <vector>

int main(){
    std::vector<int> v;
    std::ifstream srcFile("in.txt",std::ios::in);
    std::ofstream destFile("out.txt",std::ios::out);
    int x;
    while(srcFile >> x)
        v.push_back(x);
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i++)
        destFile<<v[i]<<' ';
    srcFile.close();
    destFile.close();
    return 0;
}
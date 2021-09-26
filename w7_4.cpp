#include <iostream>
#include <string>
// template <class T>
// void Swap(T& x,T& y){
//     T tmp;
//     tmp = x;
//     x = y;
//     y = tmp;
// }

// template<class T>
// T Inc(T t){
//     return t + 1;
// }

// template<class T1,class Pred>
// void Map(T1 s,T1 e,T1 x,Pred op){
//     for(;s != e;++s,++x){
//         *x = op(*s);
//     }
// }
// // template<class T>
// // T Cube(T x){ return x * x * x;}
// // template<class T>
// // T Square(T x){ return x * x;}


// int Cube(int x){ return x * x * x;}
// double Square(double x){ return x * x;}

// class A{
//     public:
//     A(){
//         std::cout<<"A"<<std::endl;
//     }
// };

// template <class T1,class T2>
// class Pair{
// public:
//     T1 key;
//     T2 value;
//     Pair(T1 k,T2 v):key(k),value(v){}
//     // bool operator<(const Pair& a){
//     //     return value < a.value;
//     // }
//     bool operator<(const Pair<T1,T2>& a) const ;
// };

// template <class T1,class T2>
// bool Pair<T1,T2>::operator<(const Pair<T1,T2>& a) const {
//     return value < a.value;
// }


int main(){
    // int a = 1,b = 2;
    // Swap<double&>(a,b);
    // std::cout<<a<<' '<<b<<std::endl;
    // double x = 1.99;
    // int y = 100;
    // Swap(x,y);
    // std::cout<<x<<' '<<y<<std::endl;
    // std::cout<<Inc<double>(98) / 2<<std::endl;
    // int a[5] = {1,2,3,4,5},b[5];
    // double c[5] = {1.1,2.2,3.3,4.4,5.5},d[5];
    // Map(a,a + 5,b,Cube);
    // for(int i = 0;i < 5;i++)
    //     std::cout<<b[i]<<' ';
    // std::cout<<std::endl;
    // Map(c,c + 5,d,Square);
    // for(int i = 0;i < 5;i++)
    //     std::cout<<d[i]<<' ';
    // std::cout<<std::endl;    

    // Pair<std::string,int> student("tom",19);
    // Pair<std::string,int> student2("AAA",20);
    // std::cout<<(student2 < student)<<std::endl;

    std::string s = "a";
    // std::string s1 = 'a';

    return 0;
}
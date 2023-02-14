#include <iostream>
bool func(int x){
    if (((x%4==0) and (x%100!=0)) or (x%400==0)){
    return 1;} else return 0;
}
int main(){
    int x;
    std::cin>>x;
    if (func(x)){
        std::cout<<("Yes");
    } else std::cout<<("No");
}
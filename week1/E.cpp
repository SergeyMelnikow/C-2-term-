#include <iostream>
int recursive_power(int base, int power){
    if (power==1){
        return(base);
    } else {return(base*(recursive_power(base,power-1)));}
}
int main(){
    int base;
    int power;
    std::cin>>base;
    std::cin>>power;
    std::cout<<recursive_power(base,power);
}
#include <iostream>
int my_power(int base, int power){
int result=1;
for (int i=1;i<=power;i+=1){
    result*=base;
};
return (result);
}

int main(){
     int base;
    int power;
    std::cin>>base;
    std::cin>>power;
    std::cout<<my_power(base,power);
}
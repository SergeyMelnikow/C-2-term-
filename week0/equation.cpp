#include <iostream>
int main(){
    float a = 10;
    float b = 15;
    float c = 5;
    if (a==0){
        std::cout<<"x="<<(-c/b);
    } else if (b*b - 4*a*c<0){
        std::cout<<"Нет решений";
    } else if (b*b - 4*a*c==0){
        std::cout<<"x="<<(-b/(2*a));
    } else {
        std::cout<<"x1="<<((-b+b*b-4*a*c)/(2*a))<<"\n"<<"x2="<<((-b-(b*b-4*a*c))/(2*a));
    }
        
}
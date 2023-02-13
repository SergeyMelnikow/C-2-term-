#include <iostream>
int main(){
int c = 5;
for(int i = 1;i<=c/2;i+=1){
   for (int j = 1;j<=c/2;j+=1){
    if (i*i + j*j == c){
        std::cout<<"Пара чисел:\n"<<i<<"\n"<<j<<"\n";
    }

   }
}
}
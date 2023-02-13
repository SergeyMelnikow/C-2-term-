#include <iostream>
int main(){
int i = 6;
int j = 9;
int nod = 0;
while((i!=0) and (j!=0)){
    if (i>=j){    
    i=i%j;
       if (i==0){
        nod = j;
       }
    } 
    else if (i<j){
    j=j%i;
       if (j==0){
        nod = i;
       }
    };
};
std::cout<<nod;
}
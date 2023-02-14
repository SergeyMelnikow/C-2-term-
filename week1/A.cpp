#include <iostream>
int func(int x){
    int y=1;
    for (int k=1;k<(x+1);k+=1){
    y=y*10;
    }
    return (y);}

int main(){
int a;
std::cin>>a;
int b = a;
int i = 0;
while(b!=0){
b=b/10;
i+=1;
}
int p=1;
for (int j=1;j<i;j+=1){
    if ((a%func(j))/(func(j-1))!=((a/func(i-j))%(func(1)))){
        p=0;   
    }
}
if (p == 1){
 std::cout<<"YES";
} else { std::cout<<"NO";}
}


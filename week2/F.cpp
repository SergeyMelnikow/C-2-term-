#include <iostream>

#ifndef N
#define N 10 // actual size of the array
#endif

void readArray(int(&a)[N]){
    for (int i=0;i<=N-1;i+=1){
        std::cin>>a[i];
    }
}

int findLastZero(int (&a)[N]){
    int ind;
    int sup;
    int inf;
    ind=0;
    sup=N;
    inf=-1;
    while (sup!=inf+1){
        ind = (sup+inf)/2;
        if (a[ind]==1){
            sup = ind;
        }
        if (a[ind]==0){
            inf = ind;
        }
    }
    return inf;
}

int main(){
    int a[N];
    readArray(a);
    std::cout<<findLastZero(a);
}
#include <iostream>

#ifndef N
#define N 10 // actual size of the array
#endif

void readArray(int(&a)[N]){
    for (int i=0;i<=N-1;i+=1){
        std::cin>>a[i];
    }
}

void printArray(int(&sum)[2*N]){
    for (int i=0;i<=2*N-1;i+=1){
        std::cout<<sum[i];
    }
}
void mergeArrays(int (&a)[N], int (&b)[N], int (&sum)[2 * N]){
    int ka = 0;
    int kb = 0;
    int full = 0;
    while (full==0){
        if (a[ka]<=b[kb]){
            sum[ka+kb]=a[ka];
            ka+=1;
            if (ka==N){
                full = 1;
                for (int i=kb;i<=N-1;i+=1){
                    sum[i+ka]=b[i];
                }
            }
        }
        if ((full==0)and(a[ka]>=b[kb])){
            sum[ka+kb]=b[kb];
            kb+=1;
            if (kb==N){
                full = 1;
                for (int i=ka;i<=N-1;i+=1){
                    sum[i+kb]=a[i];
                }
            }
        }
    }
}

int main(){
    int a[N];
    int b[N];
    int sum[2*N];
    readArray(a);
    readArray(b);
    mergeArrays(a,b,sum);
    printArray(sum);
}
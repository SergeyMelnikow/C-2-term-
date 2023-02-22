#include <iostream>

#ifndef N
#define N 5
#endif

#ifndef M
#define M 5
#endif

void readArray(int(&a)[N][M]){
    for (int i=0;i<=N-1;i+=1){
        for (int j=0;j<=M-1;j+=1){
            std::cin>>a[i][j];
        }
    }
}

void print_transposed(int (&a)[N][M]){
    int b[M][N];
    for (int i=0;i<=N-1;i+=1){
        for (int j=0;j<=M-1;j+=1){
            b[j][i]=a[i][j];
        }
    }
    for (int i=0;i<=M-1;i+=1){
        for (int j=0;j<=N-1;j+=1){
            std::cout<<b[i][j]<<" ";
            if (j==N-1){
                std::cout<<"\n";
            }
        }

    }
}

int main(){
    int a[N][M];
    readArray(a);
    print_transposed(a);
}
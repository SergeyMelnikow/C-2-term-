#include <iostream>

#ifndef N
#define N 10 // actual size of the array
#endif


void read_array(int a[N]){
  for (int i=0;i!=N;i+=1){
    std::cin>>a[i];
  }
}


void print_array(int a[N]){
  for (int i=0;i!=N;i+=1){
    std::cout<<a[i]<<" ";
  }
}

void selectSort(int (&a)[N]){
    int b[N];
    int box;
    for (int c=0;c!=N;c+=1){
    for (int i=0;i<=N-1-c;i+=1){
        int max=1;
        for (int j=0;j<=N-1-c;j+=1){
            if (a[i]<a[j]){
                max = 0;
            }
        if (max==1){
            b[N-c-1]=a[i];
            box=a[N-1-c];
            a[N-c-1]=a[i];
            a[i]=box;
        }
        }
    }}
    for (int i=0;i!=N-1;i+=1){
        a[i]=b[i];
    }
}

int main(){
int a[N];
read_array(a);
selectSort(a);
print_array(a);
}
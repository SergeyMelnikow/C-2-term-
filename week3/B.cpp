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
    int c1=0;
    int c2=0;
    while (c1+c2<=N-1){
    for (int i=c2;i<=N-1-c1;i+=1){
        int max=1;
        int min=1;
        for (int j=c2;j<=N-1-c1;j+=1){
            if (a[i]<a[j]){
                max = 0;
            } else if (a[i]>a[j]){
                min = 0;
            }}
        if (min==1){
            b[c2]=a[i];
            box=a[c2];
            a[c2]=a[i];
            a[i]=box;
            c2+=1;
        }
        if (max==1){
            b[N-c1-1]=a[i];
            box=a[N-c1-1];
            a[N-c1-1]=a[i];
            a[i]=box;
            c1+=1;
        }
        }}
    for (int i=0;i!=N;i+=1){
        a[i]=b[i];
    }
}

int main(){
int a[N];
read_array(a);
selectSort(a);
print_array(a);
}
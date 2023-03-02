#include <iostream>

int const N = 10;

void forward_step(int a[N],
                   int begin_idx,
                   int end_idx){
                    int box;
                    for (int j=begin_idx;j!=end_idx;j+=1){
                      if(a[j]>a[j+1]){
                        box = a[j];
                        a[j] =  a[j+1];
                        a[j+1] = box;
                      }
                    }}
void print_array(int a[N]){
  for (int i=0;i!=N;i+=1){
    std::cout<<a[i]<<" ";
  }
}

int main(){
    int A[N]={10,9,8,7,6,5,4,3,2,1};
    forward_step(A,0,9);
    print_array(A);
}
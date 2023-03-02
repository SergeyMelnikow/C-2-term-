#include <iostream>

int const N = 10;

void backward_step(int a[N],
                   int begin_idx,
                   int end_idx){
                    int box;
                    for (int j=end_idx;j!=begin_idx;j-=1){
                      if(a[j-1]>a[j]){
                        box = a[j-1];
                        a[j-1] =  a[j];
                        a[j] = box;
                      }
                    }}
void print_array(int a[N]){
  for (int i=0;i!=N;i+=1){
    std::cout<<a[i]<<" ";
  }
}

int main(){
    int A[N]={10,9,8,7,6,5,4,3,2,1};
    backward_step(A,0,9);
    print_array(A);
}

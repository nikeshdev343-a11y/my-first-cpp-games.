#include <iostream>

void output(int array[],int size);
int main()
{
    int size;
  int array[]={1,23,54,34,33,23,56,54,21,54};
  size=sizeof(array)/sizeof(int);
     output(array,size);
  for( int element:array){
    std::cout<<element<<" ";
  }
 
    return 0;
}
void output(int array[],int size){
    int i,j;
for( i=0;i<size-1;i++){
    for( j=i+1;j<size;j++){
      if(array[i]>array[j]){ 
      int temp=array[i];
      array[i]=array[j];
      array[j]=temp;
    }
}
}
}
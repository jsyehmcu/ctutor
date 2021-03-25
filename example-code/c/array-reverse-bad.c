#include <stdio.h>
int *p1, *p2;
int main() {
  int a[10];
  for(int i=0; i<10; i++) a[i]=i*10;
  
  for(int i=0; i<10; i++){
    p1=&a[i];
    p2=&a[9-i];
    
    a[i]=a[9-i];
  }
  return 0;
}
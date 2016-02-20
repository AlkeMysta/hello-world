#include stdio.h

int* ordina(int* intarray){
  int temp=intarray[0], n;
  for(n=1;n<sizeof(intarray);n++){
    if(intarray[n]<temp)
  }
  return &intarray; 
}

int main(){
  int a[10], count=0;
 
  do
  {       /* inizializzazione */
    a[count]=rand();
    count++;
  } while count<10;
  
  ordina(a[]);
  return 1;
}  

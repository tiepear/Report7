#include <stdio.h>



void print_array(int array[], int size);
void print_array(int array[], int size){
    //printf("scores = ");
    for(int k = 0 ; k < size ; k++){
        printf("%d ", array[k]);
    }
    printf("\n" );
}

int main(){
  const int SIZE =6; //Declare array size as constant.
  int scores[SIZE] = {30,50,85,90,80,100};
  printf("scores = ");
  print_array(scores,SIZE);

  //Sort data
  for(int i = 0; i < SIZE - 1; i++){
    for(int j= SIZE - 1; j > i; j--){
      if(scores[j-1] < scores[j]){
        int temp = scores[j-1];
        scores[j-1] = scores[j];
        scores[j] = temp;
      }
    }
  }
  printf("results = " );
  print_array(scores,SIZE);


  //Output of data
/*  printf("\nresults = ");
  for(int i = 0; i < SIZE; i++){
    printf("%d ",scores[i]);
  }
  printf(" \n");*/
}
#Report7

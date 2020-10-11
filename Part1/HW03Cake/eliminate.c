// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

#ifdef TEST_ELIMINATE
// 100% of the score
void eliminate(int n, int k)
{
  // allocate an arry of n elements
  bool * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails, stop
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
  // initialize all elements
  for(int i = 0; i < n ; ++i){
    arr[i] = true;
  }

  // initalize all variable for running
  int idx = 0;
  int eli_counter = 0;
  int k_counter = 0;

  while(eli_counter != n){
    if(arr[idx]){
      ++k_counter;
      if(k_counter == k){
        arr[idx] = false;
        ++eli_counter;
        k_counter = 0;
        printf("%d\n", idx);
      }
    }
    ++idx;
    if(idx == n){
      idx = 0;
    }
  }



  
  // counting to k,
  // mark the eliminated element
  // print the index of the marked element
  // repeat until only one element is unmarked




  // print the last one




  // release the memory of the array
  free (arr);
}
#endif

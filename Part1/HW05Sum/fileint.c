// ***
// *** You MUST modify this file.
// ***

#include <stdio.h>
#include <stdbool.h>

#ifdef TEST_ADDFILE
bool addFile(char * filename, int * sum)
{
  // You cannot assume * sum is zero. Thus, * sum needs to be set 0
  // open a file whose name is filename for reading
  // if fopen fails, return false. Do NOT fclose
  // if fopen succeeds, read integers using fscan (do not use fgetc)
  //
  // * sum stores the result of adding all numbers from the file
  // When no more numbers can be read, fclose, return true
  //
  *sum = 0;
  FILE * fp;
  fp = fopen(filename, "r");
  if (fp == NULL) {
    #ifdef MESSAGE
    printf("The reading file is not existed or break.\n");
    #endif
    return false;
  } else {
    while(true){
      int number;
      if(fscanf(fp, "%d", &number) != 1)
        break;
      *sum = *sum + number;
    }
    fclose(fp);
  }
  return true;
}
#endif


#ifdef TEST_WRITESUM
bool writeSum(char * filename, int sum)
{
  // open a file whose name is filename for writing
  // if fopen succeeds, write sum as an integer using fprintf
  // fprintf should use one newline '\n'
  // fclose, return true
  //
  FILE * fp;
  fp = fopen(filename, "w+");
  if (fp == NULL) {
    #ifdef MESSAGE
    printf("The writing file is not existed or break.\n");
    #endif
    return false;
  } else {
    fprintf(fp, "%d\n", sum);
    fclose(fp);
  }
  return true;
}
#endif

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "disemvowel.h"

// This function takens a char an returns false if it is a vowel and true otherwise.
bool checkVowel(char ch){
 if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U'){
  return true;
  }
 return false;
}

char* disemvowel(char* str) {
  int i, j, len, notVowel;
  char* result;
  len = strlen(str);
  
  for(i = 0; i < len; i++){
  if(!checkVowel(str[i])){
      notVowel++;	
    }
  }
 
  // Allocate memory for disemvoweled string
  result = (char*) calloc(notVowel+1,sizeof(char));
  j = 0;
  for(i = 0; i < len; i++){
     if(!checkVowel(str[i])){
	result[j] = str[i];
	j++;
     }
     
  }
 
  result[j] = '\0';

  return  result;
}
 

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>

// FNV-1a prime
const uint32_t prime = 16777619;

uint32_t fnv1a(char* key)
{
  if(!key){
    printf("Error key is null");
    exit(1);
  }
              
  // FNV-1a offset basis
  uint32_t hash = 2166136261;

  int length = strlen(key);

  for(int i = 0; i < length; i++){
    hash = hash ^ (unsigned char)key[i];
    hash = hash * prime;
    printf("%d\n", hash);
  }
    
  return hash;

}

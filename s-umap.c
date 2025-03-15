#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "s-umap.h"

struct S_Umap s_umap_create(s_umap_hash hash, s_umap_vdestr vdestr)
{
  struct S_Umap map;

  map.tbl.cap = 16; // Should be closet prime number above number of keys/0.75
  map.tbl.len = 0;
  map.tbl.nodes = NULL;
  
  (void)hash;
  (void)vdestr;

  return map;
}

struct _S_Umap_Node* _s_umap_node_create(char* key, uint8_t value)
{
  struct _S_Umap_Node* node = malloc(sizeof(struct _S_Umap_Node));
  if(node){
    printf("Memory allocation error\n");
    exit(1);
  }
  
  node->next = NULL;

  // Does not need to be malloc'd
  // as string is already a pointer
  node->key = key;

  node->value = value;
  
  

  return node;
}


void s_umap_insert(struct S_Umap map, struct _S_Umap_Node* node)
{
  
  map.tbl.nodes = &node;
  (void)map;
  
}





  /*
    1. Hash Table Initialization (s_umap_create):

You need to allocate memory for your hash table’s internal structures. Specifically:

    Allocate an array of pointers to nodes (nodes) that represents the table.
    Set the hash function and optional value destructor.

This sets up the table and prepares it for storing key-value pairs.
  */

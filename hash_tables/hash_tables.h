#ifndef  HASH_TABLE
#define  HASH_TABLE

#include <stdio.h>
#include <stdlib.h>

/**
 * struct HashNode_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct node {
    int key;
    int value;
    struct HashNode* next;
}HashNode;

/**
 * struct - Hash table data structure
 *
 * @size: The size of the array
 * @table: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct table_hash{
    unsigned long int size;
    struct HashNode** table;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif  /*HASH_TABLE*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
  int id;
  int set;
  char name[MAX_DATA];
  char email[MAX_DATA];
};
typedef struct Address ADDRESS, *ADDRESSptr;

struct Database {
  ADDRESS rows[MAX_ROWS];
};
typedef struct Database DATABASE, *DATABASEptr;

struct Connection {
  FILE *file;
  DATABASEptr db;
};
typedef struct Connection CONNECTION, *CONNECTIONptr;

void die(const char *message)
{
  if (errno) {
    perror(message);
  } else {
    printf("ERROR: %s\n", message);
  }

  exit(1);
}

void Address_print(ADDRESSptr addr)
{
  printf("%d %s %s\n",
         addr->id, addr->name, addr->email);
}

CONNECTIONptr Database_open(const char *filename, char mode)
{
  CONNECTIONptr conn = malloc(sizeof(*conn));
  if (!conn->db)  die("Memory error");
}

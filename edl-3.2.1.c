#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

int main() {
  struct Node* head = NULL;
  struct Node* dois = NULL;
  struct Node* tres = NULL;
  struct Node* qua = NULL;

  // alocacao de memoria para cada node
  head = (struct Node*)malloc(sizeof(struct Node));
  dois = (struct Node*)malloc(sizeof(struct Node));
  tres = (struct Node*)malloc(sizeof(struct Node));
  qua = (struct Node*)malloc(sizeof(struct Node));

  // atribui valores e linka nodes
  head->data = 1;
  head->next = dois;
  dois->data = 2;
  dois->next = tres;
  tres->data = 3;
  tres->next = qua;
  qua->data = 4;
  qua->next = NULL;

  // print a lista
  printf("[%d, %d%, %d, %d]\n", head->data, dois->data, tres->data, qua->data);

  // libera memoria alocada para cada node
  free(head);
  free(dois);
  free(tres);
  free(qua);

  return 0;
}

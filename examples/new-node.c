// New linked list node

node_t * new_node(int val)
{
  node_t * new = malloc(sizeof(node_t));

  if (!new) {
    fprintf(stderr, "PANIC! PANIC!\n");
    return NULL;
  }

  new->next = NULL;
  new->val = val;

  return new;
}
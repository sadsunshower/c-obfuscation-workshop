int sum_list(node_t * list)
{
  int sum = 0;

  // Shouldn't this normally be a while loop?
  for (node_t * curr = list; curr != NULL; curr = curr->next) {
    sum += curr->val;
  }

  return sum;
}

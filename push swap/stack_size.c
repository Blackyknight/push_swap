static int  stack_size(t_stack *st_a, int *firstdata)
{
  t_stack *new_stack;
  int size;

  size = 0;
  new_stack = root_a;
  while (new_stack)
  {
    *firstdata = new_stack->data < *firstdata ? new_stack->data : *firstdata;
    new_stack = new_stack->next;
    size++;
  }
  return (size);
}
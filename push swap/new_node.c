t_stack *new_node(int firstdata, char  c, int s)
{
  t_stack *new_node;

  new_node = (t_stack*)malloc(sizeof(t_stack));
  new_node->data = firstdata;
  new_node->stack = c;new_node->both = 0;
  new_node->flag = s;
  new_node->next = NULL;
  return (new_node);
}
void  sorting(t_stack **st_a, t_stack  **st_b)
{
  int firstdata;
  int size;

  firstdata = (*st_a)->data;
  size = stack_size(*st_a, &firstdata);
  if (size == 2)
    rotate(st_a);
  else if (size == 3)
    sort_three(st_a);
  else if (size > 5)
    sort_num(st_a, st_b, size);
}
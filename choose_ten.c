static void choose_ten(t_stack **st_a, t_stack **st_b, int mid, int c)
{
  int firstdata;

  firstdata = (*st_a)->data;
  c = mid - c;
  rotate(st_a);
  while ((*st_a)->data != firstdata && c > 0)
  {
    if ((st_a)->data <= mid)
    {
      push_ab(st_a, st_b);
      c--;
    }
    else
      rotate(st_a);
  }
  if ((st_a)->data <= mid)
    push_ab(st_a, st_b);
}
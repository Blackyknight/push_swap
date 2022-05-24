int		is_empty(t_stack *st)
{
	return (!st);
}

void  sort_num(t_stack **st_a, t_stack **st_b, int size)
{
  int round;
  int mid;
  int *tab;
  int len;
  int c;

  c = 0;
  len = size - 1;
  tab = sort_tab(*st_a, size);
  mid = 0;
  round = (size <= 100) ? 2 : 1;
  while (!is_empty(*st_a) && round <= 10)
  {
    mid = (round == 10) ? tab[len] : tab[(size / 10) * round];
    choose_ten(st_a, st_b, mid, c);
    c = mid;
  }
}
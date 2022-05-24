static void sort_list(int *tab, unsigned int size)
{
  unsigned int i;
  unsigned int j;
  int          swap;

  i = 0;
  while (i < size - 1)
  {
    j = i;
    while (j < size)
    {
      if (tab[i] > tab[j])
        ft_swap(&tab[i], &tab[j]);
      j++;
    }
    i++;
  }
}

int *sort_tab(t_stack *st_a, int size)
{
  t_stack new_st;
  int *tab;

  new_st = st_a;
  tab = (int*)malloc(sizeof(int) * size + 1);
  while (new_st)
  {
    tab[i] = new_st->data;
    new_st = new_st->next;
    i++;
  }
  sort_list(tab, size);
  return (tab);
}
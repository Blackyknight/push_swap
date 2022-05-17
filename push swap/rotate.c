static void print_rotate(t_stack *sta_ck)
{
  if (!sta_ck->both)
  {
    sta_ck->stack == 'a' ? write(1, "ra\n", 3) : write(1, "rb\n", 3);
  }
  else if (sta_ck->both == 1)
    write(1, "rr\n", 3);
}

void  rotate(t_stack **sta_ck)
{
  char    c;
  int     s;
  int     firstdata;
  t_stack last;
  t_stack temp;

  print_rotate(*sta_ck);
  if ((*sta_ck)->stack == 'a' || (*sta_ck)->stack == 'b')
  c = (*sta_ck)->stack == 'a' ? 'a' : 'b';
  else
    c = '-';
  s = (sta_ck)->flag ? 1 : 0;
  firstdata = (*sta_ck)->data;
  last = new_node(firstdata, c, s);
  temp = *sta_ck;
  *sta_ck = (*sta_ck)->next;
  free(temp);
  temp = *sta_ck;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = last;
}
void	sort_three(t_stack **st_a)
{
	if ((*st_a)->data < (*st_a)->next->data &&\
			(*st_a)->next->next->data > (*st_a)->data &&\
			(*st_a)->next->data > (*st_a)->next->next->data)
	{
		swap(st_a);
		rotate(st_a);
	}
	else if ((*st_a)->data > (*st_a)->next->data &&\
			(*st_a)->next->next->data < (*st_a)->data &&\
			(*st_a)->next->data > (*st_a)->next->next->data)
	{
		rotate(st_a);
		swap(st_a);
	}
	else if ((*st_a)->data < (*st_a)->next->data &&\
			(*st_a)->next->next->data < (*st_a)->next->data)
		rev_rot(st_a);
	else if ((*st_a)->data > (*st_a)->next->next->data &&\
			(*st_a)->data > (*st_a)->next->data)
		rotate(st_a);
	else if ((*st_a)->data > (*st_a)->next->data &&\
			(*st_a)->data < (*st_a)->next->next->data)
		swap(st_a);
}
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_stack
{
  int data;
  struct s_stack  *next;
  char  stack;
  int both;
  int flag;

} t_stack;


int main(int ac, char **av);
void  sorting(t_stack **st_a, t_stack  **st_b);
static int  stack_size(t_stack *st_a, int *firstdata);
void  rotate(t_stack **stack);
static void print_rotate(t_stack *stack);
t_stack *new_node(int data, char  c, int s);
void	sort_three(t_stack **st_a);
void  sort_num(t_stack **st_a, t_stack **st_b, int size);
int		is_empty(t_stack *st);
int *sort_tab(t_stack *st_a, int size);
static void sort_list(int *tab, unsigned int size);
void  ft_swap(int *a, int *b);

#endif
#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFSIZE 4096

char	*ft_value(char *buf, char *key);
char    *ft_read(char *file);
char	*ft_itoa(int nbr);
char	*ft_strstr(char *str, char *to_find);
char	*dict(int argc, char **argv);
char	*input(int argc, char **argv);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		check(char *input);
void	cut(char *src, int count, char *buf, int module);
void	ft_write(char *str);
void	ft_three(char *buf, int nb);
void	insert(char *dest, char *src, int start_idx, int *idx);
void	ft_unit(char *buf, int *count);

#endif


#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define  BUFFER_SIZE 42
#endif

int ft_strlen(char *str)
{
	int i ;

	i = 0;
	while(str && str[i])
	{
		i++;
		if(str[i - 1] == '\n')
			break;
	}
	return (i);
}
int ft_search_nl_idx(char *str)
{
	int i = 0;
	while(str && str[i] && i < BUFFER_SIZE)
	{
		if (str[i] == '\n')
		{
			i++;
			return (i);
		}
		i++;
	}
	return (-2);
}
void ft_shift(char *str, int new_line)
{
	int i = 0;
	while(str && str[i] && new_line < BUFFER_SIZE)
	{
		str[i++] = str[new_line++];
	}
	while( i < BUFFER_SIZE)
		str[i++] = 0;
}
char *ft_strjoin(char *s1, char *s2, int new_line)
{
	char *line;
	int i = 0;
	int j = 0;
	int len;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	while(s1 && s1[i])
	{
		line[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] && i < len)
	{
		line[i++] = s2[j++];
	}
	line[i] = '\0';

	if (s1)
		free(s1);
	ft_shift(s2, new_line);
	return (line);
}
char *get_next_line(int fd)
{
	char *line = NULL;
	static char buf[BUFFER_SIZE +1];
	int readit;
	int new_line ;

	readit =1;
	if (read(fd, buf, 0) == -1)
		return ( NULL);
	if (*buf != '\0')
	{
		new_line = ft_search_nl_idx(buf);
		line = ft_strjoin(line , buf, new_line);
		if (new_line != -2)
			return (line);
	}
	new_line= -2;
	while(readit > 0 && new_line == -2)
	{
		readit = read(fd, buf, BUFFER_SIZE);
		if(readit == 0)
			return (line);
		buf[readit] = 0;
		new_line = ft_search_nl_idx(buf);
		line = ft_strjoin(line , buf, new_line);
	}
	return (line);
}
// int main()
// {
// 	int fd; 

// 	fd = open("get_next_line.c", O_RDONLY);
// 	if (fd == -1)
// 		write(1, "read error\n", 11);
// 	else
// 	{
// 		char *str;
// 		int k = 0;
// 		while( k < 22)
// 		{
// 			str = get_next_line(fd);
// 			printf("%s", str);
// 			free(str);
// 			k++;
// 		}
// 	}
// }
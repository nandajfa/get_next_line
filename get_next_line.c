/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:11:32 by jefernan          #+#    #+#             */
/*   Updated: 2021/10/31 17:30:48 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char 	*read_file(int fd, char 	**buffer, char **save);
char	*make_line(char **save);

char *get_next_line(int fd)
{
	static char	*save;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (!save)
		save = ft_strdup("");
	line = read_file(fd, &buffer, &save);
	free(buffer);
	return (line);
}

char 	*read_file(int fd, char 	**buffer, char **save)
{
	int		ret;
	char	*temp;
	char	*n;
	char	*line;

	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, *buffer, BUFFER_SIZE);
		if (ret == -1 || ret == 0)
			return (make_line(save));
		(*buffer)[ret] = '\0';
		temp = *save;
		*save = ft_strjoin(temp, *buffer);
		free(temp);
		n = ft_strchr(*save, '\n');
		if (n != NULL)
			break ;
	}
	line = make_line(save);
	return (line);
}

char	*make_line(char **save)
{
	int		i;
	int		j;
	char	*n;
	char	*line;

	i = 0;
	j = 0;

	if (**save == '\0')
	{
		free(*save);
		*save = NULL;
		return (NULL);
	}
	while ((*save)[j] != '\n')
		j++;
	line = ft_substr(*save, 0, j + 1);
	n = ft_strchr(*save, '\n');
	if (n)
	{
		while (n[i])
		i++;
		*save = ft_substr(n, 1, i + 1);
	}
	return (line);
}

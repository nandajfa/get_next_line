/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:56:30 by jefernan          #+#    #+#             */
/*   Updated: 2021/10/20 11:47:54 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	if (!save[fd])
		save[fd] = ft_strdup("");
	line = read_file(fd, buffer, &save[fd]);
	free(buffer);
	return (line);
}

static char 	read_file(int fd, char 	*buffer, char *save)
{
	int		read_byte;
	char	temp;
	char 	rest;

	rest = ft_strchr(*save, '\n');
	if (rest != NULL)
		

}

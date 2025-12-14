/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:07:55 by pecastro          #+#    #+#             */
/*   Updated: 2025/12/14 19:39:57 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

//get_next_line.c
char	*get_next_line(int fd);
char	*file_reader(char *storing_buffer, int fd);
char	*buffer_joiner(char *storing_buffer, char *reading_buffer);
char	*line_cutter(char *storing_buffer);
char	*storage_updater(char *storing_buffer);
//get_next_line_utils.c
char	*ft_strchr(const char *s, int c);
char	*ft_substr_new(const char *s, unsigned int start, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);

#endif

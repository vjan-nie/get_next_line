/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjan-nie <vjan-nie@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:24:37 by vjan-nie          #+#    #+#             */
/*   Updated: 2025/03/26 15:52:34 by vjan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char *argv[])
{
	int		fd;
	char	*line;
	char	*file;

	if (argc > 2)
	{
		printf("Too many args\n");
		return (0);
	}
	if (argc == 1)
		file = "testfile.txt";
	else
		file = argv[1];
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("Open error\n");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}

	//BONUS

// #include "get_next_line_bonus.h"

// int	main(void)
// {

	// int		fd1;
	// int		fd2;
	// int		fd3;
	// char	*line1;
	// char	*line2;
	// char	*line3;

	// fd1 = open("testfile.txt", O_RDONLY);
	// fd2 = open("origin1000.txt", O_RDONLY);
	// fd3 = open("origin10000.txt", O_RDONLY);

	// if (fd1 == -1)
	// {
	// 	printf("Open error fd1\n");
	// 	return (1);
	// }
	// if (fd2 == -1)
	// {
	// 	printf("Open error fd2\n");
	// 	return (1);
	// }
	// if (fd3 == -1)
	// {
	// 	printf("Open error fd3\n");
	// 	return (1);
	// }

	// while ((line1 = get_next_line_bonus(fd1)) != NULL\
	// 	&& (line2 = get_next_line_bonus(fd2)) != NULL\
	// 	&& (line3 = get_next_line_bonus(fd3)) != NULL)
	// {
	// 	printf("%s", line1);
	// 	printf("%s", line2);
	// 	printf("%s", line3);
	// 	free(line1);
	// 	free(line2);
	// 	free(line3);
	// }
	// close(fd1);
	// close(fd2);
	// close(fd3);

	// return (0);
//}


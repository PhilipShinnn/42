/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:42:33 by kshin             #+#    #+#             */
/*   Updated: 2025/03/09 23:15:33 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define MAX_DIGITS 100
# define MAX_GROUPS 35

extern char	*g_dict[];
extern char	*g_units[];

void	convert_to_words(int num, char *result);
void	process_large_number(const char *input, char *result);
int		validate_input(const char *str);

#endif

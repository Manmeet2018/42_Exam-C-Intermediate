/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 09:09:52 by exam              #+#    #+#             */
/*   Updated: 2019/04/02 09:28:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_anagram(char *a, char *b)
{
	int base_arr[127] = {0};
	for(int i = 0; a[i]; i++)
	{
		base_arr[(int)a[i]] += 1;
	}
	for(int j = 0; b[j]; j++)
	{
		base_arr[(int)b[j]] -= 1;
	}
	int k = 0;
	while (k < 127)
	{
		if (base_arr[k] != 0)
		{
			return 0;
		}
		k++;
	}
	return 1;
}
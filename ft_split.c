/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 04:07:55 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/17 04:07:55 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_allocate_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] != c && s[i])
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	while (j < i)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	ft_free_array(char **array, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**process_array(char const *s, char c, char **out)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			out[j] = ft_allocate_word(&s[i], c);
			if (!out[j])
			{
				ft_free_array(out, j);
				return (NULL);
			}
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**out;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	out = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!out)
		return (NULL);
	out = process_array(s, c, out);
	if (!out)
		return (NULL);
	out[word_count] = NULL;
	return (out);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Tes autres fonctions ft_split, ft_count_words, etc. vont ici

// int main(void)
// {
//     char    *str1 = "Hello,world,this,is,a,test";
//     char    *str2 = "   word1   word2   word3   ";
//     char    *str3 = "";
//     char    *str4 = "NoDelimiterHere";
//     char    *str5 = ",,Multiple,,delimiters,,";
//     char    **result;
//     int     i;

//     // Test 1: Chaîne standard avec délimiteur virgule
//     printf("Test 1: \"%s\" (délimiteur ',')\n", str1);
//     result = ft_split(str1, ',');
//     i = 0;
//     while (result[i])
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         i++;
//     }
//     printf("Total: %d mots\n\n", i);
//     ft_free_array(result, i);

//     // Test 2: Chaîne avec espaces comme délimiteurs
//     printf("Test 2: \"%s\" (délimiteur ' ')\n", str2);
//     result = ft_split(str2, ' ');
//     i = 0;
//     while (result[i])
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         i++;
//     }
//     printf("Total: %d mots\n\n", i);
//     ft_free_array(result, i);

//     // Test 3: Chaîne vide
//     printf("Test 3: \"%s\" (chaîne vide)\n", str3);
//     result = ft_split(str3, ',');
//     i = 0;
//     while (result && result[i])
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         i++;
//     }
//     printf("Total: %d mots\n\n", i);
//     if (result)
//         ft_free_array(result, i);

//     // Test 4: Chaîne sans délimiteur
//     printf("Test 4: \"%s\" (pas de délimiteur 'x')\n", str4);
//     result = ft_split(str4, 'x');
//     i = 0;
//     while (result[i])
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         i++;
//     }
//     printf("Total: %d mots\n\n", i);
//     ft_free_array(result, i);

//     // Test 5: Chaîne avec délimiteurs multiples
//     printf("Test 5: \"%s\" (délimiteurs multiples ',')\n", str5);
//     result = ft_split(str5, ',');
//     i = 0;
//     while (result[i])
//     {
//         printf("[%d]: \"%s\"\n", i, result[i]);
//         i++;
//     }
//     printf("Total: %d mots\n\n", i);
//     ft_free_array(result, i);

//     return (0);
// }
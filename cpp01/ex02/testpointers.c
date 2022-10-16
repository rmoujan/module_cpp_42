/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpointers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:05:42 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/16 18:17:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main()
{

    char *str = "hallo";
    char *ptr = str;
    printf("str == %p\n", str);
    printf("str == %p\n", &str[0]);
    // printf("ptr == %p\n", ptr);
    // printf("str == %s\n", str);
    // printf("ptr == %s\n", ptr);
    printf("str == %p\n", &str);
    // printf("ptr == %p\n", &ptr);


    
    return 0;
}
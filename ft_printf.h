/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:10:22 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/03/31 18:33:11 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	prec;
	int	width;
	int	point;
	int	count;
	int	big_x;
	int	unsign;
}				t_flags;

int				ft_printf(const char *str, ...);
void			ft_putchar(char c, t_flags *flags);
void			ft_putstr(char *s, t_flags *flags);
int				ft_strlen(const char *s);
int				ft_isdigit(int c);
int				ft_is_specifier(char c);
char			*ft_uitoa(unsigned int n);
char			*ft_itoa(int n);
int				ft_atoi(const char *str);
int				ft_check_prec(int i, const char *str,
					t_flags *flags, va_list v_list);
int				ft_check_zero(int i, const char *str, t_flags *flags);
int				ft_check_ast(int i, t_flags *flags, va_list v_list);
void			ft_printf_c(char c, t_flags *flags);
void			ft_printf_s(char *str, t_flags *flags);
void			ft_printf_d(char *str, t_flags *flags);
void			ft_printf_p(unsigned long nbr, t_flags *flags);
void			ft_printf_x(unsigned int nbr, t_flags *flags);

#endif

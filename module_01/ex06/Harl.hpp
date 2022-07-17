/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:24:56 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 14:54:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

typedef enum e_harl_level
{
	HARL_DEBUG,
	HARL_INFO,
	HARL_WARNING,
	HARL_ERROR,
	HARL_UNKNOWN
}	t_harl_level;

class Harl
{
	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		t_harl_level	getLevel(std::string level);

	public:
		void			filter(std::string level);
};

#endif
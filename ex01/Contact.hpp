/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:58:16 by calide-n          #+#    #+#             */
/*   Updated: 2021/05/31 19:01:13 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

std::string	format_str(std::string str);

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        void        SetFirstName(std::string first_name);
        void        SetLastName(std::string last_name);
        void        SetNickname(std::string nickname);
        void        SetLogin(std::string login);
        void        SetPostal(std::string postal);
        void        SetEmail(std::string email);
        void        SetPhone(std::string phone);
        void        SetBday(std::string bday);
        void        SetFavMeal(std::string fav_meal);
        void        SetUnderwearСolor(std::string underwear_color);
        void        SetSecret(std::string secret);
        void        Create(int index);
        void        Show(void);
        void        ShowDetails(void);
        const       std::string   GetFirstName();
        const       std::string   GetLastName();
        int         exists;
    private:
        int         index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal;
        std::string email;
        std::string phone;
        std::string bday;
        std::string fav_meal;
        std::string underwear_color;
        std::string secret;
};

#endif
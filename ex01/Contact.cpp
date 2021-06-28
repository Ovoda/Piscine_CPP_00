/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:00:03 by calide-n          #+#    #+#             */
/*   Updated: 2021/05/31 19:25:39 by calide-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void) {
    this->exists = false;
    return ;
}

Contact::~Contact(void) {
    return ;
}

void    Contact::SetFirstName(std::string first_name)
{ this->first_name = format_str(first_name); }

void    Contact::SetLastName(std::string last_name)
{ this->last_name = format_str(last_name); }

void    Contact::SetNickname(std::string nickname)
{ this->nickname = format_str(nickname); }

void    Contact::SetLogin(std::string login)
{ this->login = format_str(login); }

void    Contact::SetPostal(std::string postal)
{ this->postal = format_str(postal);}

void    Contact::SetEmail(std::string email)
{ this->email = format_str(email);}

void    Contact::SetPhone(std::string phone)
{ this->phone = format_str(phone);}

void    Contact::SetBday(std::string bday)
{ this->bday = format_str(bday); }

void    Contact::SetFavMeal(std::string fav_meal)
{ this->fav_meal = format_str(fav_meal);}

void    Contact::SetUnderwearСolor(std::string underwear_color)
{ this->underwear_color = format_str(underwear_color);}

void    Contact::SetSecret(std::string secret)
{ this->secret = format_str(secret);}

void    Contact::Create(int index)
{
    std::string input;
    
    this->index = index;
    this->exists = true;
    
    std::cout << "First Name : ";
    getline(std::cin, input);
    this->SetFirstName(input);

    std::cout << "Last Name : ";
    getline(std::cin, input);
    this->SetLastName(input);

    std::cout << "Nickname : ";
    getline(std::cin, input);
    this->SetNickname(input);

    std::cout << "Login : ";
    getline(std::cin, input);
    this->SetLogin(input);

    std::cout << "Postal : ";
    getline(std::cin, input);
    this->SetPostal(input);

    std::cout << "Email : ";
    getline(std::cin, input);
    this->SetEmail(input);

    std::cout << "Phone : ";
    getline(std::cin, input);
    this->SetPhone(input);

    std::cout << "Birthday : ";
    getline(std::cin, input);
    this->SetBday(input);

    std::cout << "Favorite meal : ";
    getline(std::cin, input);
    this->SetFavMeal(input);
    
    std::cout << "Underwear color : ";
    getline(std::cin, input);
    this->SetUnderwearСolor(input);

    std::cout << "Darkest secret : ";
    getline(std::cin, input);
    this->SetSecret(input);

    std::cout << "new contact ["<< this->first_name << "] created !" << std::endl;
}

void    Contact::Show(void)
{
    std::cout << 
    "|" << std::setw (10) << this->index <<
    "|" << std::setw (10) << this->first_name <<
    "|" << std::setw (10) << this->last_name <<
    "|" << std::setw (10) << this->nickname <<
    "|" << std::endl;
}

void    Contact::ShowDetails(void)
{
    std::cout << "First Name        : " << this->first_name << std::endl;
    std::cout << "Last Name         : " << this->last_name << std::endl;
    std::cout << "Nickname          : " << this->nickname << std::endl;
    std::cout << "Login             : " << this->login << std::endl;
    std::cout << "Postal            : " << this->postal << std::endl;
    std::cout << "Email             : " << this->email << std::endl;
    std::cout << "Phone             : " << this->phone << std::endl;
    std::cout << "Birthday          : " << this->bday << std::endl;
    std::cout << "Favorite meal     : " << this->fav_meal << std::endl;
    std::cout << "Underwear color   : " << this->underwear_color<< std::endl;
    std::cout << "Darkest secret    : " << this->secret << std::endl;
    std::cout << std::endl;
}
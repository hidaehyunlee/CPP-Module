/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:57:27 by daelee            #+#    #+#             */
/*   Updated: 2021/04/18 14:35:19 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

# include <string>

class Info
{
private:
    std::string firstName_;
    std::string lastName_;
    std::string nickname_;
    std::string login_;
    std::string postalAddress_;
    std::string emailAddress_;
    std::string phoneNumber_;
    std::string birthdayDate_;
    std::string favoriteMeal_;
    std::string underwearColor_;
    std::string darkestSecret_;

public:
    void setFirstName(const std::string str);
    void setLastName(const std::string str);
    void setNickname(const std::string str);
    void setLogin(const std::string str);
    void setPostalAddress(const std::string str);
    void setEmailAddress(const std::string str);
    void setPhoneNumber(const std::string str);
    void setBirthdayDate(const std::string str);
    void setFavoriteMeal(const std::string str);
    void setUnderwearColor(const std::string str);
    void setDarkestSecret(const std::string str);

    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickname(void) const;
    std::string getLogin(void) const;
    std::string getPostalAddress(void) const;
    std::string getEmailAddress(void) const;
    std::string getPhoneNumber(void) const;
    std::string getBirthdayDate(void) const;
    std::string getFavoriteMeal(void) const;
    std::string getUnderwearColor(void) const;
    std::string getDarkestSecret(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:56:39 by daelee            #+#    #+#             */
/*   Updated: 2021/04/18 14:11:54 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.hpp"

void Info::setFirstName(const std::string str) { firstName_ = str; }
void Info::setLastName(const std::string str) { lastName_ = str; }
void Info::setNickname(const std::string str) { nickname_ = str; }
void Info::setLogin(const std::string str) { login_ = str; }
void Info::setPostalAddress(const std::string str) { postalAddress_ = str; }
void Info::setEmailAddress(const std::string str) { emailAddress_ = str; }
void Info::setPhoneNumber(const std::string str) { phoneNumber_ = str; }
void Info::setBirthdayDate(const std::string str) { birthdayDate_ = str; }
void Info::setFavoriteMeal(const std::string str) { favoriteMeal_ = str; }
void Info::setUnderwearColor(const std::string str) { underwearColor_ = str; }
void Info::setDarkestSecret(const std::string str) { darkestSecret_ = str; }

std::string Info::getFirstName(void) const { return (firstName_); }
std::string Info::getLastName(void) const { return (lastName_); }
std::string Info::getNickname(void) const { return (nickname_); }
std::string Info::getLogin(void) const { return (login_); }
std::string Info::getPostalAddress(void) const { return (postalAddress_); }
std::string Info::getEmailAddress(void) const { return (emailAddress_); }
std::string Info::getPhoneNumber(void) const { return (phoneNumber_); }
std::string Info::getBirthdayDate(void) const { return (birthdayDate_); }
std::string Info::getFavoriteMeal(void) const { return (favoriteMeal_); }
std::string Info::getUnderwearColor(void) const { return (underwearColor_); }
std::string Info::getDarkestSecret(void) const { return (darkestSecret_); }

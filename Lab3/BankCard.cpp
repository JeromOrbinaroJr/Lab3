#include "BankCard.h"
#include <iostream>
#include <cinttypes>

//Constructor
BankCard::BankCard(const std::string& nameCard, const int64_t& numberCard, const std::string& validityPeriod, const std::string& surnameOwner, const std::string& nameOwner, const std::string& patronymicOwner, const int64_t& numberOwner, const int64_t& scoreCard) :
	m_nameCard(nameCard), m_numberCard(numberCard), m_validityPeriodCard(validityPeriod), m_surnameOwner(surnameOwner), m_nameOwner(nameOwner), m_patronymicOwner(patronymicOwner), m_numberOwner(numberOwner), m_scoreCard(scoreCard) {}
//Destructor
BankCard::~BankCard(){}

//Getters
std::string BankCard::getNameCard() const { return m_nameCard; }
int64_t BankCard::getNumberCard() const { return m_numberCard; }
std::string BankCard::getValidityPeriod() const { return m_validityPeriodCard; }
std::string BankCard::getSurnameOwner() const { return m_surnameOwner; }
std::string BankCard::getNameOwner() const { return m_nameOwner; }
std::string BankCard::getPatronomycOwner() const { return m_patronymicOwner; }
int64_t BankCard::getNumberOwner() const { return m_numberOwner; }
int64_t BankCard::getScoreCard() const { return m_scoreCard; }

//Setters
void BankCard::setNameCard(const std::string& nameCard) { this->m_nameCard = nameCard; }
void BankCard::setNumberCard(const int64_t& numberCard) { this->m_numberCard = numberCard; }
void BankCard::setValidityPeriod(const std::string& validityPeriod) { this->m_validityPeriodCard = validityPeriod; }
void BankCard::setSurnameOwner(const std::string& surnameOwner) { this->m_surnameOwner = surnameOwner; }
void BankCard::setNameOwner(const std::string& nameOwner) { this->m_nameOwner = nameOwner; }
void BankCard::setPatronymicOwner(const std::string& patronymicOwner) { this->m_patronymicOwner = patronymicOwner; }
void BankCard::setNumberOwner(const int64_t& numberOwner) { this->m_numberOwner = numberOwner; }
void BankCard::setScoreCard(const int64_t& scoreCard) { this->m_scoreCard = scoreCard; }

//Operator Overloading
std::ostream& operator<<(std::ostream& os, const BankCard& card) {
	std::cout << "Information of Card:\n";
	os << card.getNameCard() << '\n';
	os << card.getNumberCard() << '\n';
	os << card.getValidityPeriod() << '\n';
	os << card.getSurnameOwner() << '\n';
	os << card.getNameOwner() << '\n';
	os << card.getPatronomycOwner() << '\n';
	os << card.getNameOwner() << '\n';
	os << card.getScoreCard() << '\n';
	return os;
}

//Methods
std::string BankCard::receiveValidityPeriod(int64_t& numberOwner) {
	int64_t numberOwnerCard = getNumberOwner();
	if (numberOwner == numberOwnerCard) {
		return getValidityPeriod();
	}
	return "There is no such client.\n";
}

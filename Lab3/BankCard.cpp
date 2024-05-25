#include "BankCard.h"

// Constructor
BankCard::BankCard(const std::string& nameCard, const std::string& numberCard, const std::tm& validityPeriod
    , const std::string& surnameOwner, const std::string& nameOwner, const std::string& patronymicOwner
    , const std::string& numberOwner, const int& scoreCard)
    : m_nameCard(nameCard), m_numberCard(numberCard), m_validityPeriodCard(validityPeriod), m_surnameOwner(surnameOwner), m_nameOwner(nameOwner), m_patronymicOwner(patronymicOwner), m_numberOwner(numberOwner), m_scoreCard(scoreCard) {}

// Destructor
BankCard::~BankCard() {}

// Getters
const std::string& BankCard::getNameCard() const { return m_nameCard; }
const std::string& BankCard::getNumberCard() const { return m_numberCard; }
const std::tm& BankCard::getValidityPeriod() const { return m_validityPeriodCard; }; // Изменено на std::tm
const std::string& BankCard::getSurnameOwner() const { return m_surnameOwner; }
const std::string& BankCard::getNameOwner() const { return m_nameOwner; }
const std::string& BankCard::getPatronomycOwner() const { return m_patronymicOwner; }
const std::string& BankCard::getNumberOwner() const { return m_nameOwner; }
int BankCard::getScoreCard() const { return m_scoreCard; }

// Setters
void BankCard::setNameCard(const std::string& nameCard) { m_nameCard = nameCard; }
void BankCard::setNumberCard(const std::string& numberCard) { m_numberCard = numberCard; }
void BankCard::setValidityPeriod(const std::tm& validityPeriod) { m_validityPeriodCard = validityPeriod; }
void BankCard::setSurnameOwner(const std::string& surnameOwner) { m_surnameOwner = surnameOwner; }
void BankCard::setNameOwner(const std::string& nameOwner) { m_nameOwner = nameOwner; }
void BankCard::setPatronymicOwner(const std::string& patronymicOwner) { m_patronymicOwner = patronymicOwner; }
void BankCard::setNumberOwner(const std::string& numberOwner) { m_numberOwner = numberOwner; }
void BankCard::setScoreCard(const int& scoreCard) { m_scoreCard = scoreCard; }

// Operator Overloading
std::ostream& operator<<(std::ostream& os, const BankCard& card) {
    os << "Information of Card:" << std::endl;
    os << "Card name: " << card.getNameCard() << std::endl;
    os << "Card number: " << card.getNumberCard() << std::endl;
        
    std::ostringstream oss;
    oss << std::put_time(&card.getValidityPeriod(), "%d-%m-%Y");
    os << "Validity period card: " << oss.str() << std::endl;

    os << "Surname owner of card: " << card.getSurnameOwner() << std::endl;
    os << "Name owner of card: " << card.getNameOwner() << std::endl;
    os << "Patronomyc owner of card: " << card.getPatronomycOwner() << std::endl;
    os << "Number owner: " << card.getNumberOwner() << std::endl;
    os << "Score of card: " << card.getScoreCard() << std::endl;
    return os;
}

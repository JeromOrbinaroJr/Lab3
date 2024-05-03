#pragma once
#include <string>
#include <cinttypes>
#include <iostream>

class BankCard {
public:
    //Constructor
    BankCard();

    BankCard(const std::string& nameCard, const int64_t& numberCard, const std::string& validityPeriod, const std::string& surnameOwner, const std::string& nameOwner, const std::string& patronymicOwner, const int64_t& numberOwner, const int64_t& scoreCard);

    //Destructor
    ~BankCard();

    //Getters
    std::string getNameCard() const;
    int64_t getNumberCard() const;
    std::string getValidityPeriod() const;
    std::string getSurnameOwner() const;
    std::string getNameOwner() const;
    std::string getPatronomycOwner() const;
    int64_t getNumberOwner() const;
    int64_t getScoreCard() const;

    //Setters
    void setNameCard(const std::string& nameCard);
    void setNumberCard(const int64_t& numberCard);
    void setValidityPeriod(const std::string& validityPeriod);
    void setSurnameOwner(const std::string& surnameOwner);
    void setNameOwner(const std::string& nameOwner);
    void setPatronymicOwner(const std::string& patronymicOwner);
    void setNumberOwner(const int64_t& numberOwner);
    void setScoreCard(const int64_t& scoreCard);

    //Operator Overloading
    friend std::ostream& operator<<(std::ostream& os, const BankCard& card);

    //Methods
    std::string receiveValidityPeriod(int64_t& numberOwner);

private:
    std::string m_nameCard;
    int64_t m_numberCard;
    std::string m_validityPeriodCard;
    std::string m_surnameOwner;
    std::string m_nameOwner;
    std::string m_patronymicOwner;
    int64_t m_numberOwner;
    int64_t m_scoreCard;
};
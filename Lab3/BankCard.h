#pragma once
#include <string>
#include <cinttypes>
#include <iostream>
#include <vector>

#include <ctime>    
#include <sstream>
#include <iomanip> 

class BankCard {
public:
    //Constructor
    BankCard() = default;
    explicit BankCard(const std::string& nameCard, const std::string& numberCard, const std::tm& validityPeriod
        , const std::string& surnameOwner, const std::string& nameOwner, const std::string& patronymicOwner
        , const std::string& numberOwner, const int& scoreCard);

    //Destructor
    virtual ~BankCard();

    //Getters
    const std::string& getNameCard() const;
    const std::string& getNumberCard() const;
    const std::tm& getValidityPeriod() const; // Изменено на std::tm
    const std::string& getSurnameOwner() const;
    const std::string& getNameOwner() const;
    const std::string& getPatronomycOwner() const;
    const std::string& getNumberOwner() const;
    int getScoreCard() const;

    //Setters
    void setNameCard(const std::string& nameCard);
    void setNumberCard(const std::string& numberCard);
    void setValidityPeriod(const std::tm& validityPeriod); // Изменено на std::tm
    void setSurnameOwner(const std::string& surnameOwner);
    void setNameOwner(const std::string& nameOwner);
    void setPatronymicOwner(const std::string& patronymicOwner);
    void setNumberOwner(const std::string& numberOwner);
    void setScoreCard(const int& scoreCard);

    //Operator Overloading
    friend std::ostream& operator<<(std::ostream& os, const BankCard& card);

protected:
    std::string m_nameCard;
    std::string m_numberCard;
    std::tm m_validityPeriodCard; // Изменено на std::tm
    std::string m_surnameOwner;
    std::string m_nameOwner;
    std::string m_patronymicOwner;
    std::string m_numberOwner;
    int m_scoreCard;
};

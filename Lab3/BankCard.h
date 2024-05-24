#pragma once
#include <string>
#include <cinttypes>
#include <iostream>
#include <vector>

class BankCard {
public:
    //Constructor
    BankCard() = default;
    BankCard(const std::string& nameCard, const std::string& numberCard, const std::string& validityPeriod
        , const std::string& surnameOwner, const std::string& nameOwner, const std::string& patronymicOwner
        , const std::string& numberOwner, const int& scoreCard); //tm

    //Destructor
    ~BankCard();//virtual

    //Getters
    std::string getNameCard() const&;//const ref

    const std::string& getNameCard() const;

    std::string getNumberCard() const&;
    std::string getValidityPeriod() const&;
    std::string getSurnameOwner() const&;
    std::string getNameOwner() const&;
    std::string getPatronomycOwner() const&;
    std::string getNumberOwner() const&;
    int getScoreCard() const;

    //Setters
    void setNameCard(const std::string& nameCard);
    void setNumberCard(const std::string& numberCard);
    void setValidityPeriod(const std::string& validityPeriod);
    void setSurnameOwner(const std::string& surnameOwner);
    void setNameOwner(const std::string& nameOwner);
    void setPatronymicOwner(const std::string& patronymicOwner);
    void setNumberOwner(const std::string& numberOwner);
    void setScoreCard(const int& scoreCard);

    //Operator Overloading
    friend std::ostream& operator<<(std::ostream& os, const BankCard& card);

private:
    std::string m_nameCard;
    std::string m_numberCard;
    std::string m_validityPeriodCard;
    std::string m_surnameOwner;
    std::string m_nameOwner;
    std::string m_patronymicOwner;
    std::string m_numberOwner;
    int m_scoreCard;
};

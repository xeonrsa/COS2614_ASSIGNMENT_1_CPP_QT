#ifndef LOYALTYCARD_H
#define LOYALTYCARD_H
#include "customer.h"

class LoyaltyCard{
public:
    LoyaltyCard();
    void setDetails(int cardNum, QString custName, QString cellNum, QStringList custAddress);
    void addPoints(int points);
    int getPoints() const; //note use of const...important concept. 
    void purchase(double value);
    double currentValue();
    QString toString(bool labelled);
private:
    Customer m_Customer;
    int m_Points;
    int m_CardNum;
};
#endif // LOYALTYCARD_H

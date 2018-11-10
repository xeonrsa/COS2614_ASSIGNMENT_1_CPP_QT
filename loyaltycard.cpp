#include <QString>
#include "loyaltycard.h"

LoyaltyCard::LoyaltyCard():m_Customer(Customer()), m_Points(0), m_CardNum(-1){
}

 
void LoyaltyCard::setDetails(int cardNum, QString custName, QString cellNum, QStringList custAddress){
    m_Customer = Customer(custName, cellNum, custAddress);
    m_CardNum = cardNum;
}

 
void LoyaltyCard::addPoints(int points){
    m_Points += points;
}

 
int LoyaltyCard::getPoints() const{
    return m_Points;
}

 
void LoyaltyCard::purchase(double value){
  addPoints(value);
}

 
double LoyaltyCard:: currentValue() {
    return m_Points*0.04;
}

 
QString LoyaltyCard::toString(bool labelled) {
    return QString("%1").arg(m_Customer.toString(labelled));
}

#ifndef CUSTOMER_H
#define CUSTOMER_H
//TO DO: add you includes here
#include <QString>
class Customer{
public:
    Customer();
    QString toString(bool labelled) const;
    Customer(QString name, QString cell, QStringList addr);    
private:
    //TO DO: add your variables here
    QString     m_Name;
    QString     m_CellNum;
    QStringList m_Address;
};
#endif // CUSTOMER_H

#include "customer.h"

Customer::Customer(): m_Name("none"), m_CellNum("none"), m_Address("none"){
}
Customer::Customer(QString name, QString cellNumber, QStringList address): m_Name(name), m_CellNum(cellNumber), m_Address(address){ //Note costructor initialization..Important concept
}
QString Customer:: toString(bool labelled) const{

    if (labelled)
        return QString("Name: %1\nCell: %2\nAddress: %3").arg(m_Name).arg(m_CellNum).arg(m_Address.join(","));
    else
        return QString("%1, %2, %3").arg(m_Name).arg(m_CellNum).arg(m_Address.join(","));
}
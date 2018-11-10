//TO DO: add your includes here

#include <QTextStream>
#include <QString>
#include <QFile>

#include "customer.h"
#include "customer.cpp"
#include "loyaltycard.h"
#include "loyaltycard.cpp"

int main(){
    QTextStream cout(stdout);
    QTextStream cin (stdin);


    cout<<"Customer Details:" <<"\n";
    cout<<"Enter customer name and press <ENTER>: ";
    cout.flush();
    QString cname = cin.readLine(); //read name from console


    cout<<"Enter customer cell number and press <ENTER>: ";
    cout.flush();
    QString cnum = cin.readLine(); //read cell number from console


    cout << "Enter customer address (each address line separated by ,) and press <ENTER> after entering address:";
    cout.flush();
    QString addr = cin.readLine(); //read address from console


    cout << endl;


    cout<<"Loyalty Card Details:" <<"\n";
    cout<<"Enter loyalty card number and press <ENTER>: ";
    cout.flush();
    QString cardnum = cin.readLine();


    LoyaltyCard myLoyaltyCard; //initialise loyalty card
    myLoyaltyCard.setDetails(cardnum.toInt(), cname, cnum, addr.split(",")); //set details

    QString result = myLoyaltyCard.toString(true);

    cout << result << "\n";

    cout << "\nPurchase using the loyalty card..\n";
    double myAmount;
    QString yesORno;
    do{
        cout << "Enter purchase amount and press <ENTER>: ";
        cout.flush();
        myAmount = cin.readLine().toDouble();
        myLoyaltyCard.purchase(myAmount);
        cout << "Would you like to enter another purchase (y/n) and press <ENTER>:";
        cout.flush();
        yesORno = cin.readLine();
    } while(yesORno == "y");


    cout << "\nLoyalty card details without labels..\n" << myLoyaltyCard.toString(false) << "\n";    
    cout << "\nTotal points: " << myLoyaltyCard.getPoints();
    cout << "\nValue of the card: " << myLoyaltyCard.currentValue();
    cout << "\n";
    return 0;
}

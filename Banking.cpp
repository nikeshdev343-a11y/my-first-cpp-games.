#include <iostream>
#include <iomanip>
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main ()
{
    int number;
    double balance=123.01;
    do{
    std::cout<<"-------------------------------"<<'\n';
    std::cout<<"Welcome To Our Bank"<<'\n';
     std::cout<<"-------------------------------"<<'\n';
     std::cout<<"Enter 1 for To Check Balance"<<'\n';
     std::cout<<"Enter 2 for To Deposite Money"<<'\n';
     std::cout<<"Enter 3 for To Withdraw Money"<<'\n';
     std::cout<<"Enter 4 for Exit "<<'\n';
     std::cin>>number;
     std::cin.clear();
     fflush(stdin);
    switch (number)
    {
    case 1:showbalance(balance);
        break;
    case 2:balance+=deposit();
    showbalance(balance);

    break;
    case 3:balance-=withdraw(balance);
    showbalance(balance);
    break;
    case 4:std::cout<<"Thanks For Visting Us ";
    break;
    default:std::cout<<"Invalid Input";
        break;
        }
     }while(number!=4);
return 0;
}
void showbalance(double balance)
{
    std::cout<<"Your balance is :$ "<<std::setprecision(2)<<std::fixed<<balance<<'\n' ;
}
double deposit(){
    double b;
    std::cout<<"How much money you want to deposite";
    std::cin>>b;
    if(b>0){
        return b;}
        else{
            std::cout<<"This money is invalid";
       return 0;
     }
    }
double withdraw(double balance){
    double w;
    
    std::cout<<"How much money you want to withdraw";
    std::cin>>w;
    if( w > balance){
        std::cout<<"Too much amount";
return 0;
}
else if(w<0){
    std::cout<<"Invalid amount";
return 0;
}
else{
    return w;
}

}

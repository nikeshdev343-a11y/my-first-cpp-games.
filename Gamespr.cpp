#include <iostream>
#include <ctime>
char userchoice();
char computerchoice();
void showchoice(char choice);
void showwinner(char player, char computer);
int main(){
    char player,computer;
   player=userchoice();
   std::cout<<"Your choice: ";
   showchoice(player);
   std::cout<<"Computer choice: ";
   computer=computerchoice();
   showchoice(computer);
   showwinner(player,computer);
   return 0;
}
char userchoice(){
    char player;
     do{
    std::cout<<"*******************"<<'\n';
    std::cout<<"Welcome To Our Game"<<'\n';
    std::cout<<"*******************"<<'\n'<<'\n';
    std::cout<<"Choose one of the following"<<'\n';
    std::cout<<"Enter 'r' for rock"<<'\n';
    std::cout<<"Enter 'p' for paper"<<'\n';
    std::cout<<"Enter 's' for siccisor"<<'\n';
    std::cin>>player;
    }while(player != 'r' && player!='p' && player !='s');
    return player;

}
void showchoice(char choice){
    switch(choice){
        case 'r':std::cout<<" Rock"<<'\n';
        break;
        case 's':std::cout<<"Siccisor"<<'\n';
        break;
        case 'p':std::cout<<"Paper"<<'\n';
    }

}
char computerchoice(){
    int a;
    srand(time(0));
    a=(rand()%3)+1;
    switch(a){
    case 1:return 'r';
    case 2:return 's';
    case 3:return 'p';
    default:return 0;
}
}
void showwinner(char player, char computer){
    switch(player){
        case 'r': if(computer=='r'){
            std::cout<<"Tie";
        }
        else if(computer=='p'){
            std::cout<<"You loser";
        }
        else {
            std::cout<<"you won";
        }
        break;
         case 'p': if(computer=='p'){
            std::cout<<"Tie";
        }
        else if(computer=='s'){
            std::cout<<"You loser";
        }
        else {
            std::cout<<"You won";
        }
        break;
         case 's': if(computer=='s'){
            std::cout<<"Tie";
        }
        else if(computer=='r'){
            std::cout<<"You loser";
        }
        else {
            std::cout<<"You won";
        }
        break;
    }
}
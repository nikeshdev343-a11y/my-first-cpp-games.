#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
    int n,g,t=0;//let n be random number and g be guess & t be the tiers
    srand(time(NULL));
n=(rand()%100)+1;
    do
    {
        std::cout<<"enter the number what u guess";
        std::cin>>g;
        t++;
        if (g>n)
        {
            std::cout<<"Too high\n";
        }
        else if(g<n){
            std::cout<<"too low\n";
        }
        else{
            std::cout<<"CORRECT!"<<'\n'<<t;
        }
    } while (g!=n);
 return 0;   
}
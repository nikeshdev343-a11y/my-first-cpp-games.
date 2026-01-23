#include <iostream>
int main()
{
    int score;
    char guess;
    std::string Question[]={"1.In which country The Mount Everest lie ?",
                             "2.In which country  have many top 10 highest mountains ?",
                            "3.Which country is open boarder to another contry ?",
                             "4.Which country is never colonised in its history ?"};
                             //
    std::string Answer[4][4]={{"A.Nepal","B.India","C.China","D.America"},
                               { "A.US","B.America","C.China","D.Nepal"},
                               {"A.India-Nepal","B.China-Russia","C.Japan-Korea","D.North Korea-South Korea"},
                               {"A.Nepal","B.India","C.China","D.Denmark"}
};
char key[]={'A','D','A','A'};
int size=sizeof(Question)/sizeof(Question[0]);
for(int i=0;i<size;i++){
     std::cout<<Question[i]<<'\n';
for(int j=0;j<sizeof(Answer[i])/sizeof(Answer[i][0]);j++){
    std::cout<<Answer[i][j]<<'\n';
  }
  std::cin>>guess;
  guess=toupper(guess);
  if(guess==key[i]){
    std::cout<<"CORRECT"<<'\n';
    score++;
  }
  else{
    std::cout<<"INCORRECT"<<'\n';
    std::cout<<"The correct answer is: "<<key[i];
  }
}  
std::cout<<"Your score is: "<<score<<" in out of 4";                       

return 0;
}
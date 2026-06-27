#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    std::srand(std::time(nullptr));
    int num=(std::rand()%100)+1;
    int guesscount=7;
    for(int i=1;i<=7;i++){
        int guess;
        std::cout<<"\nEnter the number:";
        std::cin>>guess;
        if(guess==num){
            std::cout<<"\nAwesome! Your guess is correct in "<<i<<" chances";
            return 0;
        }
        else if(guess>num){
            std::cout<<"Your Guess is too high!";
        }
        else{
            std::cout<<"Your Guess is too low!";
        }
        guesscount-=1;
        std::cout<<"\nGuess remaining: "<<guesscount; 
    }
    std::cout<<"\nYou're Out of Chances the number is: "<<num;
    return 0;
}
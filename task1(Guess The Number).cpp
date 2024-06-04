#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//rand();

//int random = offset + (rand() % range);
//int random = 1 + (rand()% 100);

int main(){

    cout<<"\n\t\tWelcome to the Guess The Number Game!"<<endl;
    cout<<"Guess The Number Between 1 - 100. You have limited choices based on the levels."<<endl;
    cout<<"Good Luck!"<<endl;

    
    while(true){
        cout<<"\nEnter the difficulty level:\n";
        cout<<"1.Easy\t\t";
        cout<<"2.Medium\t";
        cout<<"3.Difficult\t";
        cout<<"4.End The Game\t"<<endl;

        int difficultyChoice;
        cout<<"Enter a number: ";
        cin>>difficultyChoice;

        srand(time(0));
        int secretNum = 1 + (rand()% 100);
        int playerChoice;

        if(difficultyChoice==1){
            cout<<"\nYou have 10 Choices for finding the Secret Number Between 1 - 100.";
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout<<"\n\nEnter The Number: ";
                cin>>playerChoice;
                if(playerChoice==secretNum){
                    cout<<"Well Played! You Won, Congratulation! " <<playerChoice<<" is the Secret Number" <<endl;
                    cout<<"\t\t\t Thanks For Played......"<<endl;
                    cout<<"Play the Game Again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout<<"Nope, " <<playerChoice << " is not correct number\n";
                    if(playerChoice>secretNum){
                        cout<< " The secret number is smaller then the number you have chosen" <<endl;
                    }
                    else{
                        cout<<"The secret number is greater then the number you have chosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<" Choices Left. "<<endl;
                    if(choicesLeft==0){
                        cout<<"Not Find the Correct Number,Tt Was "<<secretNum<<",You Lose!\n\n";
                        cout<<"Play Again To Win!!\n\n";
                    }
                }
            }
        }
        else if(difficultyChoice==2){
            cout<<"\nYou have 7 Choices for finding the Secret Number Between 1 - 100.";
            int choicesLeft=7;
            for(int i=1;i<=7;i++){
                cout<<"\n\nEnter The Number: ";
                cin>>playerChoice;
                if(playerChoice==secretNum){
                    cout<<"Well Played! You Won, Congratulation!"<<playerChoice<<"is the Secret Number"<<endl;
                    cout<<"\t\t\t Thanks For Played......"<<endl;
                    cout<<"Play the Game Again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout<<"Nope, " <<playerChoice << " is not correct number\n";
                    if(playerChoice>secretNum){
                        cout<< " The secret number is smaller then the number you have chosen" <<endl;
                    }
                    else{
                        cout<<"The secret number is greater then the number you have chosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<"Choices Left. "<<endl;
                    if(choicesLeft==0){
                        cout<<"Not find the correct number,it was "<<secretNum<<",You Lose!\n\n";
                        cout<<"Play Again To Win!!\n\n";
                    }
                }
            }
        }
        else if(difficultyChoice==3){
            cout<<"\nYou have 5 Choices for finding the Secret Number Between 1 - 100.";
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout<<"\n\nEnter The Number: ";
                cin>>playerChoice;
                if(playerChoice==secretNum){
                    cout<<"Well Played! You Won, Congratulation!"<<playerChoice<<"is the Secret Number"<<endl;
                    cout<<"\t\t\t Thanks For Played......"<<endl;
                    cout<<"Play the Game Again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout<<"Nope, " <<playerChoice << " is not correct number\n";
                    if(playerChoice>secretNum){
                        cout<< " The secret number is smaller then the number you have chosen" <<endl;
                    }
                    else{
                        cout<<"The secret number is greater then the number you have chosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<"Choices Left. "<<endl;
                    if(choicesLeft==0){
                        cout<<"Not find the correct number,it was "<<secretNum<<",You Lose!\n\n";
                        cout<<"Play Again To Win!!\n\n";
                    }
                }
            }
        }
        else if(difficultyChoice==4){
            exit(0);
        }
        else{
            cout<<"Invalid Choice, Enter Valid Choice To Play The Game! (1,2,3,4)";
        }

    }
    return 0;
}
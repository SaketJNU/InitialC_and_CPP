#include<iostream>
#include<string>

int main(){
    while(true){
        std::string collection[9] = {" "," "," "," "," "," "," "," "," "};
        int user_1, user_2;
        int draw = 0;
        bool check = true;
        while(check){
            system("CLS");       //player first roll

            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[6]<<"    |    "<<collection[7]<<"    |    "<<collection[8]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[3]<<"    |    "<<collection[4]<<"    |    "<<collection[5]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[0]<<"    |    "<<collection[1]<<"    |    "<<collection[2]<<"    "<<std::endl;
            std::cout<<"         |         |         "<<std::endl;

            std::cout<<"Enter the 0 Player: ";
            std::cin>>user_1;
            
            if(user_2!=user_1){
                if(user_1==1){
                    collection[0] = "0";
                }
                else if(user_1==2){
                    collection[1] = "0";
                }
                else if(user_1==3){
                    collection[2] = "0";
                }
                else if(user_1==4){
                    collection[3] = "0";
                }
                else if(user_1==5){
                    collection[4] = "0";
                }
                else if(user_1==6){
                    collection[5] = "0";
                }
                else if(user_1==7){
                    collection[6] = "0";
                }
                else if(user_1==8){
                    collection[7] = "0";
                }
                else if(user_1==9){
                    collection[8] = "0";
                }
                else{
                    std::cout<<"Invlaid Input"<<std::endl;
                }
            }
            else{
                continue;
            }
            //checking part of player 1

            system("CLS");

            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[6]<<"    |    "<<collection[7]<<"    |    "<<collection[8]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[3]<<"    |    "<<collection[4]<<"    |    "<<collection[5]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[0]<<"    |    "<<collection[1]<<"    |    "<<collection[2]<<"    "<<std::endl;
            std::cout<<"         |         |         "<<std::endl;

            if(collection[0]=="0" && collection[1]=="0" && collection[2]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Row 1"<<std::endl;
                break;
            }
            else if(collection[3]=="0" && collection[4]=="0" && collection[5]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Row 2"<<std::endl;
                break;
            }
            else if(collection[6]=="0" && collection[7]=="0" && collection[8]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Row 3"<<std::endl;
                break;
            }
            else if(collection[0]=="0" && collection[3]=="0" && collection[6]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Column 1"<<std::endl;
                break;
            }
            else if(collection[1]=="0" && collection[4]=="0" && collection[7]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Column 2"<<std::endl;
                break;
            }
            else if(collection[2]=="0" && collection[5]=="0" && collection[8]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Column 3"<<std::endl;
                break;
            }
            else if(collection[0]=="0" && collection[4]=="0" && collection[8]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Right Diagonal"<<std::endl;
                break;
            }
            else if(collection[2]=="0" && collection[4]=="0" && collection[6]=="0"){
                std::cout<<"Player 1 Winner"<<std::endl;
                std::cout<<"Left Diagonal"<<std::endl;
                break;
            }

            draw++;
            if(draw==5){
                system("CLS");
                std::cout<<"         |         |         "<<std::endl;
                std::cout<<"    "<<collection[6]<<"    |    "<<collection[7]<<"    |    "<<collection[8]<<"    "<<std::endl;
                std::cout<<"_________|_________|_________"<<std::endl;
                std::cout<<"         |         |         "<<std::endl;
                std::cout<<"    "<<collection[3]<<"    |    "<<collection[4]<<"    |    "<<collection[5]<<"    "<<std::endl;
                std::cout<<"_________|_________|_________"<<std::endl;
                std::cout<<"         |         |         "<<std::endl;
                std::cout<<"    "<<collection[0]<<"    |    "<<collection[1]<<"    |    "<<collection[2]<<"    "<<std::endl;
                std::cout<<"         |         |         "<<std::endl;
                std::cout<<"Match Draw"<<std::endl;
                break;
            }
            
            //player seconds roll
            system("CLS");

            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[6]<<"    |    "<<collection[7]<<"    |    "<<collection[8]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[3]<<"    |    "<<collection[4]<<"    |    "<<collection[5]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[0]<<"    |    "<<collection[1]<<"    |    "<<collection[2]<<"    "<<std::endl;
            std::cout<<"         |         |         "<<std::endl;

            std::cout<<"Enter the X Player: ";
            std::cin>>user_2;
            
            if(user_1!=user_2){
                if(user_2==1){
                    collection[0] = "X";
                }
                else if(user_2==2){
                    collection[1] = "X";
                }
                else if(user_2==3){
                    collection[2] = "X";
                }
                else if(user_2==4){
                    collection[3] = "X";
                }
                else if(user_2==5){
                    collection[4] = "X";
                }
                else if(user_2==6){
                    collection[5] = "X";
                }
                else if(user_2==7){
                    collection[6] = "X";
                }
                else if(user_2==8){
                    collection[7] = "X";
                }
                else if(user_2==9){
                    collection[8] = "X";
                }
                else{
                    std::cout<<"Invlaid Input"<<std::endl;
                }
            }
            else{
                continue;
            }
            //checing part of player 2

            system("CLS");

            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[6]<<"    |    "<<collection[7]<<"    |    "<<collection[8]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[3]<<"    |    "<<collection[4]<<"    |    "<<collection[5]<<"    "<<std::endl;
            std::cout<<"_________|_________|_________"<<std::endl;
            std::cout<<"         |         |         "<<std::endl;
            std::cout<<"    "<<collection[0]<<"    |    "<<collection[1]<<"    |    "<<collection[2]<<"    "<<std::endl;
            std::cout<<"         |         |         "<<std::endl;

            if(collection[0]=="X" && collection[1]=="X" && collection[2]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Row 1"<<std::endl;
                break;
            }
            else if(collection[3]=="X" && collection[4]=="X" && collection[5]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Row 2"<<std::endl;
                break;
            }
            else if(collection[6]=="X" && collection[7]=="X" && collection[8]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Row 3"<<std::endl;
                break;
            }
            else if(collection[0]=="X" && collection[3]=="X" && collection[6]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Column 1"<<std::endl;
                break;
            }
            else if(collection[1]=="X" && collection[4]=="X" && collection[7]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Column 2"<<std::endl;
                break;
            }
            else if(collection[2]=="X" && collection[5]=="X" && collection[8]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Column 3"<<std::endl;
                break;
            }
            else if(collection[0]=="X" && collection[4]=="X" && collection[8]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Right Diagonal"<<std::endl;
                break;
            }
            else if(collection[2]=="X" && collection[4]=="X" && collection[6]=="X"){
                std::cout<<"Player 2 Winner"<<std::endl;
                std::cout<<"Left Diagonal"<<std::endl;
                break;
            }
        }

        std::string yn;
        std::cout<<"Press C for continue and Press any key for Exit: ";
        std::cin>>yn;

        if(yn=="c" || yn=="C"){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}
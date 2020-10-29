//
// Created by Will Grana on 4/6/20.
//

#include <iostream>
#include <fstream>
using namespace std;

// Different OSs use different CLI commands to run Python
#ifdef _WIN32
const string python = "python";
#else
const string python = "python3";
#endif

string player_picker(bool b, bool b1, bool b2);

int main() {

    bool shoot;
    bool pass;
    bool height;

    char shooting;
    char passing;
    char tallness;

    cout << "This program will help you find a basketball player with the skills for your specific needs." << endl;

    cout << "Do you want a player who can shoot(Y OR N)" << endl;
    cin >> shooting;

    while(shooting != 'Y' and shooting != 'y' and shooting != 'N' and shooting != 'n'){
        cout << "Invalid input" << endl;
        cout << "Do you want a player who can shoot(Y OR N)" << endl;
        cin >> shooting;

    }

    if(shooting == 'y' or shooting == 'Y'){
        shoot = true;
    }
    if(shooting == 'n' or shooting == 'N'){
        shoot = false;
    }


    cout << "Do you want a player who can pass(Y OR N)" << endl;
    cin >> passing;

    while(passing != 'Y' and passing != 'y' and passing != 'N' and passing != 'n'){
        cout << "Invalid input" << endl;
        cout << "Do you want a player who can pass(Y OR N)" << endl;
        cin >> passing;

    }

    if(passing == 'y' or passing == 'Y'){
        pass = true;
    }
    if(passing == 'n' or passing == 'N'){
        pass = false;
    }


    cout << "Do you want a player who is tall(Y OR N)" << endl;
    cin >> tallness;

    while(tallness != 'Y' and tallness != 'y' and tallness != 'N' and tallness != 'n'){
        cout << "Invalid input" << endl;
        cout << "Do you want a player who is tall(Y OR N)" << endl;
        cin >> tallness;

    }

    if(tallness == 'y' or tallness == 'Y'){
        height = true;
    }
    if(tallness == 'n' or tallness == 'N'){
        height = false;
    }

    string player_name = player_picker(shoot, pass, height);

    ofstream outputFile;
    outputFile.open("player.txt");

    outputFile << player_name;
    outputFile.close();

    string command;
    command = python + " engine.py";
    system(command.c_str());
}

string player_picker(bool shoot, bool pass, bool height){
    if(shoot == true && pass == true && height == true){
        return "lebron.jpeg";
    }
    if(shoot == true && pass == true && height == false){
        return "curry.jpeg";
    }
    if(shoot == true && pass == false && height == true){
        return "durant.jpeg";
    }
    if(shoot == false  && pass == true && height == true){
        return "giannas.jpeg";
    }
    if(shoot == true && pass == false && height == false){
        return "klay.jpeg";
    }
    if(shoot == false && pass == true && height == false){
        return "cp3.jpeg";
    }
    if(shoot == false && pass == false && height == true){
        return "tacko.jpeg";
    }
    else{
        return "thon.jpeg";
    }


}
#include<iostream>
using namespace std;

int main()
{
    string name;    //Variable to Store the user's name
    cout << "Please Enter your name : ";  //Ask the user to enter their name

    cin >> name ; // Take input from user and store it in name

    cout<< "Welcome ,"<< name <<endl; //Display a welcome msg with entered name

    return 0; 
}
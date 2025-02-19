#include<iostream>
using namespace std;

// CALCULATOR

int add(int num1, int num2){
    return num1 + num2;
}

int subtract(int num1, int num2){
    return num1 - num2;
}

int multiply(int num1, int num2){
    return num1 * num2;
}

int divide(int num1, int num2){
    if(num2 != 0){
        return num1 / num2;
    }else{
        cout<<"Error !";
        return 0;
    }
}

int modu(int num1, int num2){
    if(num2 != 0){
        return num1 % num2;
    }else{
        cout<<"Error !";
        return 0;
    }
}

int main(){

    int num1,num2 ,choice;

    do {
        cout<<"Press 1 for +"<<endl;
        cout<<"Press 2 for -"<<endl;
        cout<<"Press 3 for *"<<endl;
        cout<<"Press 4 for /"<<endl;
        cout<<"Press 5 for %"<<endl;
        cout<<"Press 0 for exit"<<endl;
        cout<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;

        switch (choice){
            case 1:
                cout<<"Addition of " <<num1<< " and " <<num2<< " is: "<<add(num1,num2)<<endl;
                break;

            case 2:
                cout<<"Subtraction of " <<num1<< " and " <<num2<< " is: "<<subtract(num1,num2)<<endl;
                break;

            case 3:
                cout<<"Multiplication of " <<num1<< " and " <<num2<< " is: "<<multiply(num1,num2)<<endl;
                break;

            case 4:
                cout<<"Divison of " <<num1<< " and " <<num2<< " is: "<<divide(num1,num2)<<endl;
                break;

            case 5:
                cout<<"Modular of " <<num1<< " and " <<num2<< " is: "<<modu(num1,num2)<<endl;
                break;

            default:
                cout<<"Invalid Choice !"<<endl;
                break;
        }
        cout<<endl;

   }while(choice != 0);

   cout<<"Program will termineted."<<endl;

    return 0;
}
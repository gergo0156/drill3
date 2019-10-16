#include <iostream>
#include "std_lib_facilities.h"


using namespace std;

int main()
{

         cout << "Enter the name of the person you want to write to: ";
         string first_name;
         cin >> first_name;
         cout << endl;
         cout << "Dear " << first_name << "," << endl;
         cout << endl;
         cout << "  It's been a while since we last met. I hope you are okay. We should meet sometime in the near future." << endl;
         cout << endl;

         string friend_name;
         cout << "Enter one of your friend's name: ";
         cin >> friend_name;
         cout << endl;
         cout << "Have you seen " << friend_name << " recently?";
         cout << endl;

         char friend_sex = '0';
         cout << "Type 'm' , if your friend is a male , but type 'f' if your friend is a female.";
         cout << endl;
         cout << "Your friend is a: ";
         cin >> friend_sex;

         if(friend_sex == 'm'){

            cout << "If you see " << friend_name << " please ask him to call me.";
            cout << endl;
         }

         if(friend_sex == 'f'){

            cout << "If you see " << friend_name << " please ask her to call me.";
            cout << endl;

         }

         int age;
         cout << "Enter your age: ";
         cin >> age;

         if(age == 0 || age <= 0 || age >= 110){

         simple_error("you're     kidding!");
         }

         if( age >= 0 && age < 12){

            cout << "Next year you will be " << age+1 << endl;
         }else


         if( age == 17){

            cout << "Next year you will be able to vote." << endl;

         }else

         if( age > 70){

            cout << "I hope you are enjoying retirement." << endl;


         }else{

         cout << "I hear you just had a birthday and you are " << age << " years old.\n\n";
         }

         cout <<"Yours sincerely,\n\n\n";
         cout << "Bacskai Gergő";

         }


#include<iostream>
using namespace std;

class loginManager
 {
 public:
    string usernameAttempt;
    string passwordAttempt;
    int a=0;;


    loginManager()
    {


    }
    int login ()
    {
        cout<<"Username: "<<endl;

        cin>>usernameAttempt;
        if (usernameAttempt==username)
        {
            cout<<"Password: "<<endl;
            cin>>passwordAttempt;
            if (passwordAttempt==password)
            {
                cout<<"Login Successful\n\n"<<endl;
                a=1;


            }
            else
            {
            cout<<"Invalid Password"<<endl;
            }
        }
        else
            {
            cout<<"Invalid Username"<<endl;
            }
            return a;
    }

 private:
    string username="user";
    string password="1234";


 };

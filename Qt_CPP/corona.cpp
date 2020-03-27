#include<iostream>
using namespace std;

void age(double age){
    cout<<"Age is: "<<age<<endl;
}

void body_temp(double temp){
    cout<<"Body Temp is: "<<temp<<endl;
}

void respiratory_prob(char x){
    cout<<"Respiratory prob: "<<x<<endl;
}

void cough_test(char x){
    cout<<"cough prob: "<<x<<endl;
}

bool visit_history(char x){
    if (x == 'y')
        return true;
    else
        return false;
}

bool friend_history(char x){
    if (x == 'y')
        return true;
    else
        return false;
}



int main(){

    cout<<"---------------------A BOOLSHIT CORONA VIRUS TEST---------------------"<<endl;

    double patient_age {};
    cout<<"Please provide your age: ";cin>>patient_age;
    cout<<"---------------------------------------------------------------"<<endl;
    double body_temperature {};
    cout<<"What is your body temperature?";cin>>body_temperature;

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Have you respiratory problem??"<<endl;
    char respiratory_problem {};
    cout<<"Press y/n if you have respiratory problem ";
    cin>>respiratory_problem;
    if (respiratory_problem == 'y')
        respiratory_prob(respiratory_problem);
    else
        cout<<"You are free from respiratory prob"<<endl;    
    
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Have you Cough and Physical Weakness?? "<<endl;
    char cough_problem {};
    cout<<"Press y/n if you have cough problem ";
    cin>>cough_problem;
    if (cough_problem == 'y')
        cough_test(cough_problem);
    else
        cout<<"You are free from cough prob"<<endl;

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Be conscious from here Buddy !!!!"<<endl;
    cout<<"Have you visited any Corona affected country??";
    char my_visit {};
    cout<<"Press y/n if you have cough problem ";
    cin>>my_visit;
    bool case_1 = visit_history(my_visit);

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"This question is the Weirdest !!!!"<<endl;
    cout<<"Have you met/travelled/OR whatever (Allah knows) with any COVID-19 patient??\nI don't know how will you tick this";
    char my_friend {};
    cout<<"Press y/n if you have met/travelled ";
    cin>>my_friend;
    bool case_2 = friend_history(my_friend);
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------------THE RESULT PART--------------------------------------"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;

    if (case_1 == 1 || case_2==1)
        cout<<"Dear Mr/Mrs ready to be chopped. You are the national villain from right now\nGo toi hell Demon !!!!!"<<endl;
    else
        cout<<"Hey Buddy why so serious !!!! Everything is under control. Chill Chill Chill"<<endl;
    


    return 0;
}
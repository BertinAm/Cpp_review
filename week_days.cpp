#include <iostream>  //header file
using namespace std; // aids you with standard variables and keywords in the standard library
int main(){
int day;
cout<<"Enter a number from (1 to 7) to see the day of the week"<<endl;
cin>>day;
switch (day){    // switch initialised
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday"<<endl;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    default:
        cout<<"Not in range!"<<endl;

}
return 0;
}

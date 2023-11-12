#include <string>
#include <sstream>
using namespace std;

string problemSolution4(const string &macAddress) {
    // write your code here
    string result,first_two_string;;
    int first_two_int;

    first_two_string=macAddress.substr(0,2);
    stringstream ss(first_two_string);
    ss>>hex>>first_two_int;

    if (macAddress=="FF:FF:FF:FF:FF:FF"){
        result="Broadcast";
    }else if(first_two_int%2==0){
        result="Unicast";
    }else if (first_two_int%2==1){
        result="Broadcast";
    }

    // make use of control flow statements
    // return result;
    return result;
}

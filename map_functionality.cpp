#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    map<int, string> student_info;
    
    student_info.insert(pair<int, string>(202010001, "John Doe"));
    student_info.insert(pair<int, string>(202010002, "Mike"));
    student_info.insert(pair<int, string>(202010003, "Nobita"));
    student_info.insert(pair<int, string>(202010004, "Mei Yaung"));
    student_info.insert(pair<int, string>(202010005, "Jerry"));
    student_info.insert(pair<int, string>(202010006, "Tom"));
    student_info.insert(pair<int, string>(202010007, "Nayem"));
    student_info.insert(pair<int, string>(202010008, "Bindu"));
    
    student_info[202010009] = "Gqury"; // // another way of inserting a value in a map
    
    map<int, string>::iterator itr;
    
    cout << "map student_info: \n";
    cout << "\tKEY\t\tELEMENT\n";
    for (itr = student_info.begin(); itr != student_info.end(); itr++)
    {
        cout << "\t" << itr->first << "\t" << itr->second << endl;
    }
    
    cout << endl;
    
    // copy the elements of map1(student_info) to map2(student_info_2)
    map<int, string> student_info_2(student_info.begin(), student_info.end());
    // print all elements of the map student_info_2
    cout << "map student_info_2: \n";
    cout << "\tKEY\t\tELEMENT\n";
    for (itr = student_info_2.begin(); itr != student_info_2.end(); itr++)
    {
        cout << "\t" << itr->first << "\t" << itr->second << endl;
    }
    
    cout << endl;
    
    
    // remove all elements up to
    // element with key=202010005 in student_info_2
    student_info_2.erase(student_info_2.begin(), student_info_2.find(202010005));
    cout << "after removing some elements from map student_info_2: \n";
    cout << "\tKEY\t\tELEMENT\n";
    for (itr = student_info_2.begin(); itr != student_info_2.end(); itr++)
    {
        cout << "\t" << itr->first << "\t" << itr->second << endl;
    }
    
    cout << endl;
    
    
    // remove all elements with key = 202010007
    int num;
    num = student_info_2.erase(202010007);
    cout << "\nstudent_info_2.erase(202010007) : ";
    cout << num << " removed \n";
    cout << "\tKEY\t\tELEMENT\n";
    
    for (itr = student_info_2.begin(); itr != student_info_2.end(); itr++)
    {
        cout << "\t" << itr->first << "\t" << itr->second << endl;
    }
    
    cout << endl;
    
    // lower bound and upper bound for first map student_info key = 202010006
    cout << "student_info.lower_bound(202010006) : \tKEY = " << student_info.lower_bound(202010006)->first << "\t" << "\tELEMENT = " << student_info.lower_bound(202010006)->second << endl;
    
    cout << "student_info.upper_bound(202010006) : \tKEY = " << student_info.upper_bound(202010006)->first << "\t" << "\tELEMENT = " << student_info.upper_bound(202010006)->second << endl;
    
    /////////////////////////////////
    cout << "\ncheck if a key is in the map\t";
    if (student_info.count(202040005) > 0)
    {
        cout << "\nKey \"202010005\" is in the map" << endl;
    } 
    else
    {
        cout << "\nKey \"202010005\" isn't in the map" << endl;
    }

    return 0;
}


/**
expected output::::::::::::
***************************
map student_info: 
        KEY             ELEMENT
        202010001       John Doe
        202010002       Mike
        202010003       Nobita
        202010004       Mei Yaung
        202010005       Jerry
        202010006       Tom
        202010007       Nayem
        202010008       Bindu
        202010009       Gqury

map student_info_2: 
        KEY             ELEMENT
        202010001       John Doe
        202010002       Mike
        202010003       Nobita
        202010004       Mei Yaung
        202010005       Jerry
        202010006       Tom
        202010007       Nayem
        202010008       Bindu
        202010009       Gqury

after removing some elements from map student_info_2: 
        KEY             ELEMENT
        202010005       Jerry
        202010006       Tom
        202010007       Nayem
        202010008       Bindu
        202010009       Gqury


student_info_2.erase(202010007) : 1 removed 
        KEY             ELEMENT
        202010005       Jerry
        202010006       Tom
        202010008       Bindu
        202010009       Gqury

student_info.lower_bound(202010006) :   KEY = 202010006         ELEMENT = Tom
student_info.upper_bound(202010006) :   KEY = 202010007         ELEMENT = Nayem

check if a key is in the map
Key "202010005" is in the map
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    // create
    map<string, int> myMap;
    
    // insert value
    myMap["one"] = 1;
    myMap["Two"] = 2;
    myMap["Three"] = 3;
    
    map<string, int>::iterator it = myMap.begin();
    
    while(it != myMap.end())
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
        it++;
    }
    

    return 0;
}

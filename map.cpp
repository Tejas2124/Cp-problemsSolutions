#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,string> myDictionary;
    myDictionary.insert(pair<string,string>("apple","der apfel"));
    myDictionary.insert(pair<string,string>("banana","die banane"));
    myDictionary.insert(pair<string,string>("orange","die orange, die apfelsine "));

    for (auto pair : myDictionary)
        cout<<pair.first<<" - "<<pair.second<<endl;
    
return 0;

}
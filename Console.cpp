/*
  Auto addresses will print out the address in console format.
  This is NOT a .DLL file, this is a .EXE console application!
*/

#include <iostream>
#include <Windows.h> //need for some functions
using namespace std;

int main()//works only on console
{
    SetConsoleTitleA("Auto Addresses Console // By SpeedSterKawaii");
    Sleep(1000);//wait a second before getting offsets
    cout << "Wait, replacing latest addresses" << endl; 
    Sleep(10);
    cout << "This will display in int (not hex) format" << endl; 
    //it will show the int's (NOT IN HEX FORMAT)
   
   return NULL;
}

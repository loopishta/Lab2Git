#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void f1()
{
    string a,b,c;
    vector <string> array(3);
    ifstream in("txt.txt");
    if (in.is_open())
    {
        in >> a >> b >> c;
        array[0] = a;
        array[1] = b;
        array[2] = c;

    }
}

void f2()
{
    string a,b,c;
    vector <string> array(3);
    ifstream in("txt.txt");
    if (in.is_open())
    {
        in >> a >> b >> c;
        array[0] = a;
        array[1] = b;
        array[2] = c;
        cout << array[0] << " " << array[1]<< " " << array[2] << " "<< endl;
    }
}

int main()
{
    f1();
    f2();
}




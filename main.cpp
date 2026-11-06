#include <iostream>

using namespace std;

void say(string s);
int add(int a, int b);

int main()
{
    cout << "Greetings!\n";
    cout << "Hello World!\n";
    cout << add(5, 7) << endl;
    say("Hi");
    return 0;
}

void say(string s)
{
    cout << s << endl;
}

int add(int a, int b)
{
    return a + b;
}
#include<iostream>
#include <Windows.h>
#include <unistd.h>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int i=1;
    int j=1;


    while (j)
    {
                if(j%2==0)
                {
                    
                    
                    
                    cout<<"                               ''---,,,,,,,,,,\n";
                    cout<<"                               [''''          ''''''''--\n";
                    cout<<"                           _3'''':.\n";
                    cout<<" _                  .,---------------.\n";
                    cout<<" \\\\    / _________./  |[__]| o   |J@'\\\\__\n";
                    cout<<"  \\\\==o=========:;    |____|[IL__|''''/_/')\n";
                    cout<<"     /            `'-,._____===\\=_____.,-'\n";
                    cout<<"                          \\         \\     , \n";
                    cout<<"                    ''''''''''''''''''''''\n";
                    std::this_thread::sleep_for(std::chrono::milliseconds(50));
                    system("cls");
                }
                else{
                    
                    
                    cout<<"                ,,,,,,,,,,---''\n";
                    cout<<"      --''''''''          ````]\n";
                    cout<<"                           _3'''':.\n";
                    cout<<" _                  .,---------------.\n";
                    cout<<" \\\\  \\   _________./  |[__]| o   |J@'\\\\__\n";
                    cout<<"  \\\\==o=========:;    |____|[IL__|''''/_/')\n";
                    cout<<"       \\          `'-,._____===\\=_____.,-'\n";
                    cout<<"                          \\         \\     , \n";
                    cout<<"                    ''''''''''''''''''''''\n";
                    std::this_thread::sleep_for(std::chrono::milliseconds(50));
                    system("cls");
                }
                j++;
            }
    return 0;
}






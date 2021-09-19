#include <string>
#include <iostream>
#include "MediaPlayer.h"
using namespace std;

void main(void)
{
    wstring path_input = L"C:/Users/Raphaelle/Documents/UniDocs/Automne 2021/Architecture_logiciels/6GEI311_lab1/Example.avi";
    LPCWSTR path = path_input.c_str();
    MediaPlayer mediaPlayer(path);
    mediaPlayer.Run();
}

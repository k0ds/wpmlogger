#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <chrono>
#include <ctime>
using namespace std;
//make chronometer that starts when the program starts, then ends when 50 characters are registered, then it figures out the wpm
//after that it saves it to a file and gets the top speed, 

  /*std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";*/

int elapsec = elapse_seconds.cout();
double wpmcalc(int elapsed_time, std::string words);
char buffer[50];
int Save (int key_stroke, char *file);
void Stealth();
int main()
{
    Stealth();
    int charstyped;
    char i;
    int time;
    std::string words;
    int wpm;  
    
    while (1) 
    {
        
          auto start = std::chrono::system_clock::now();



          auto end = std::chrono::system_clock::now();

    
    }

 

}

void Stealth()
{
     HWND stealth;
     AllocConsole();
     stealth = FindWindowA("ConsoleWindowClass", NULL);
     ShowWindow(stealth,0);
}



int Save (int key_stroke, char *file)
{
    if ( (key_stroke == 1) || (key_stroke == 2) )
    return 0;
     
    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file, "a+");
    cout << key_stroke << endl;
     
    if (key_stroke == 8)
    fprintf(OUTPUT_FILE, "%s", "[BACKSPACE]");
    else if (key_stroke == 13)
    fprintf(OUTPUT_FILE, "%s", "\n");
    else if (key_stroke == 32)
    fprintf(OUTPUT_FILE, "%s", " ");
    else
    fprintf(OUTPUT_FILE, "%s", &amp; key_stroke); //output should be Timestamp : text, speed (in wpm)
    // fprintf(OUTPUT_FILE,"%d : %s, %d", time, chart, wpm) use this
     
    fclose(OUTPUT_FILE);
    return 0;
}

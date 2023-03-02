#include <wiringPi.h>
#include <stdio.h>
#include <conio.h>
#include <MMSystem.h>

#define sensorPin 0

int main(void){
    printf("program initializing......\n");

    wiringPiSetup();

    pinMode(sensorPin, INPUT);

    while(1){
        if(digitalRead(sensorPin) == HIGH){
            //trigger  music
            PlaySound(TEXT("seinfeld.wav"),NULL,SND_ASYNC);
           // system("pause"); //may  not need this line
            Sleep(10500);
            printf("Seinfeld babyyyy >>>>> \n");
        } 
        /* 
        May have to have an Else statement that
        that turns off the music, unless we can have the
        music stop after x seconds
         */
    }
    return 0;
}
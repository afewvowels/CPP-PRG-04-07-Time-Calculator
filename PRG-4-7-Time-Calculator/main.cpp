//
//  main.cpp
//  PRG-4-7-Time-Calculator
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user to enter a number of seconds
//
//  * There are 60 seconds in a minute. If the number of seconds entered by the user is
//    greater than or equal to 60, the program should display the number of minutes in
//    that many seconds.
//  * There are 3,600 seconds in an hour. If the number of seconds entered by the user is
//    greater than or equal to 3,600, the program should display the number of hours in
//    that many seconds.
//  * There are 86,400 seconds in an day. If the number of seconds entered by the user is
//    greater than or equal to 86,400, the program should display the number of days in
//    that many seconds.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float fltSecondsInput,
          fltDisplay;
    
    float const FLT_TIME_MINUTES = (1.0f / 60.0f),
                FLT_TIME_HOURS = (1.0f / 3600.0f),
                FLT_TIME_DAYS = (1.0f / 86400.0f);
    
    cout << setprecision(2) << fixed << showpoint;
    
    cout << "Please enter a number of seconds:\n";
    cin >> fltSecondsInput;
    
    if(fltSecondsInput < 60)
    {
        //fltDisplay = fltSecondsInput;
        cout << "Please enter a higher number of seconds.";
    }
    else if(fltSecondsInput <= 3600 && fltSecondsInput > 60)
    {
        fltDisplay = fltSecondsInput * FLT_TIME_MINUTES;
        cout << "That many seconds is equal to "
             << fltDisplay << " minutes.";
    }
    else if(fltSecondsInput <= 86400 && fltSecondsInput > 3600)
    {
        fltDisplay = fltSecondsInput * FLT_TIME_HOURS;
        cout << "That many seconds is equal to "
             << fltDisplay << " hours.";
    }
    else if(fltSecondsInput >= 86400)
    {
        fltDisplay = fltSecondsInput * FLT_TIME_DAYS;
        cout << "That many seconds is equal to "
             << fltDisplay << " days.";
    }
    
    return 0;
}



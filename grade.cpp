// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: gets a grade level from user and returns the associated middle
// percentage

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

string calcGrade(string grade) {
    string percent;
    if (grade == "4++") {
        percent = "100%";
    } else if (grade == "4+") {
        percent = "98%";
    } else if (grade == "4") {
        percent = "91%";
    } else if (grade == "4-") {
        percent = "83%";
    } else if (grade == "3+") {
        percent = "78%";
    } else if (grade == "3") {
        percent = "75%";
    } else if (grade == "3-") {
        percent = "71%";
    } else if (grade == "2+") {
        percent = "68%";
    } else if (grade == "2") {
        percent = "65%";
    } else if (grade == "2-") {
        percent = "61%";
    } else if (grade == "1+") {
        percent = "58%";
    } else if (grade == "1") {
        percent = "54%";
    } else if (grade == "1-") {
        percent = "51%";
    } else if (grade == "R") {
        percent = "Percent is less than 50%";
    } else {
        percent = "level inputted was invalid";
    }
    return percent;
}


int main() {
    string grade;
    cout <<
    "Enter the grade level you would like to find the middle percentage of: ";
    cin >> grade;

    string calculatedGrade = calcGrade(grade);

    if (calculatedGrade == "level inputted was invalid") {
        cout << calculatedGrade;
    } else {
        cout << "The middle percent of " << grade <<
        " is " << calculatedGrade << ".";
    }
}

/*
Given an array of integers arr, a lucky integer is an integer which has a frequency in the array equal to its value.

Return a lucky integer in the array. If there are multiple lucky integers return the largest of them. If there is no lucky integer return -1.

*/

#ifndef PROJECT_1394
#define PROJECT_1394

#include<iostream>
#include<vector>
#include<time.h>
#include<algorithm>
using namespace std;


void checkLuckyNumber(vector<int> myVector)
{
    sort(myVector.begin(), myVector.end());

    int currentNum = 0, count = 1, highestLucky = -1;
    int prevCount = -1;

    cout << "\t[";
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << ",";
        if (myVector[i] == currentNum)
            count++;
        else
        {
            currentNum = myVector[i];
            count = 1;
        }
        if (count == currentNum)
        {
            prevCount = highestLucky;
            highestLucky = currentNum;
        }
        if (count > currentNum)
        {
            highestLucky = prevCount;
        }

    }
    cout << "]";

    if (highestLucky != -1)
        cout << "\n\tThe highest lucky number is: " << highestLucky << endl << endl;
    else
        cout << "\n\tThere is no lucky number" << endl << endl;

}


void project1394()
{
    srand(time(0));
    // [1,2,1,3,3,3]
    vector<int> firstVector;
    for (int i = 0; i < 10; i++)
        firstVector.push_back(rand() % 6 + 1);

    vector<int> secondVector;
    for (int i = 0; i < 5; i++)
        secondVector.push_back(rand() % 3 + 1);

    vector<int> thirdVector;
    for (int i = 0; i < 20; i++)
        thirdVector.push_back(rand() % 10 + 1);

    checkLuckyNumber(firstVector);
    checkLuckyNumber(secondVector);
    checkLuckyNumber(thirdVector);

    cout << "\n\n\t\t-----END OF PROJECT1394-----\n\n";

}




#endif
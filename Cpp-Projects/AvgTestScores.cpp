#include <iostream>
#include <iomanip>


using namespace std;

void getScore(int&);
void calcAverage(int, int, int, int, int);
double findLowest(int, int, int, int, int);

int main()
{
    // 5 grades
    int tests1, tests2, tests3, tests4, tests5;
    // call getScore for each grade
    getScore(tests1);
    getScore(tests2);
    getScore(tests3);
    getScore(tests4);
    getScore(tests5);
    // pass scores to calcAverage
    calcAverage(tests1, tests2, tests3, tests4, tests5);
    return 0;
}

//getting 5 valid test scores
void getScore(int& score)
{
    cout << "Enter a test score: ";
    cin >> score;
    //invalid test score
    while (score < 0 || score > 100) {
        cout << "Invalid test score.";
        cin >> score;
    }
}

//finding the average of the 4 highest test scores
void calcAverage(int ts1, int ts2, int ts3, int ts4, int ts5)
{
    int sum;
    int lowest;
    double average;

    lowest = findLowest(ts1, ts2, ts3, ts4, ts5);

    sum = ts1 + ts2 + ts3 + ts4 + ts5 - lowest;
    average = sum / 4.00;

    cout << setprecision(2) << fixed;
    cout << "The average of the four highest test scores are: " << average << endl;
}

//finding lowest test score
double findLowest(int ts1, int ts2, int ts3, int ts4, int ts5)
{
    double lowest = ts1;

    if (ts2 < lowest) {
        lowest = ts2;
    }
    else if (ts3 < lowest) {
        lowest = ts3;
    }
    else if (ts4 < lowest) {
        lowest = ts4;
    }
    else if (ts5 < lowest) {
        lowest = ts5;
    }
    cout << "The lowest test score is: " << lowest << endl;
    return lowest;
}
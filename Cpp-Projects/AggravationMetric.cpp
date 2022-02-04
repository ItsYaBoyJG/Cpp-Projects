/**
*  The "Down in Front" Aggravation Metric
*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int feet_height;
    int inch_height;
    string name;
public:
    Person(string nam, int feet, int inch) {
        name = nam;
        feet_height = feet;
        inch_height = inch;
    };
    int accessor(string name);
    friend bool operator == (const Person& hf, const Person& hi);
    friend bool operator < (const Person& hf, const Person& hi);
    friend bool operator > (const Person& hf, const Person& hi);
    friend bool operator <= (const Person& hf, const Person& hi);
    friend bool operator >= (const Person& hf, const Person& hi);
};

int main()
{
    int count = 0;
    int n;
    //number of people
    cin >> n;
    //creates dynamic person array
    person** list = new person * [n];
    //calls vals to cin values
    for (int i = 0; i < n; i++) {
        string name;
        int feet_height, inch_height;
        cin >> name >> feet_height >> inch_height;
        list[i] = new person(name, feet_height, inch_height);
    }//O(n)
    int i = 0;
    if (n > 0 && n <= 10000) {
        while (i < n - 1) {
            for (int j = i + 1; j < n; j++) {
                //larger but not last spot comparison
                if (*list[i] > *list[j] && j != n - 1) {
                    count++;
                }
                //last spot comparison
                else if (*list[i] > *list[j] && j == n - 1) {
                    count++;
                    j = i + 1;
                    i++;
                }
                //next first comparison slot
                else {
                    j = i + 1;
                    i++;
                }
            }
        }
    }//O(n^2)
    cout << count;
    //deletes dynamic array, and sets to NULL
    delete[] list;
    list = NULL;
    return 0;
}

//overloading operators, converting feet to inches

bool operator == (const Person& hf, const Person& hi) {
    return (hf.feet_height == hi.feet_height) && (hf.inch_height == hi.inch_height);
}

bool operator < (const Person& hf, const Person& hi) {
    return (hf.feet_height * 12 + hf.inch_height < hi.feet_height * 12 + hi.inch_height);
}

bool operator > (const Person& hf, const Person& hi) {
    return (hf.feet_height * 12 + hf.inch_height > hi.feet_height * 12 + hi.inch_height);
}

bool operator <= (const Person& hf, const Person& hi) {
    return (hf.feet_height * 12 + hf.inch_height <= hi.feet_height * 12 + hi.inch_height);
}

bool operator >= (const Person& hf, const Person& hi) {
    return (hf.feet_height * 12 + hf.inch_height >= hi.feet_height * 12 + hi.inch_height);
}
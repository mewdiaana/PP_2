#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student {
    string id; // property
    string name;
    int age;
    float gpa
};

int main(){

    // Struct create tip like char or int but your own

    int a;
    a = 2;

    Student s;
    s.id = "23B001";
    s.name = "KBTU";
    s.age = 23;
    s.gpa = 3.8;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;

}
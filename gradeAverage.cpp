#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> grades;
    float grade;
    float sum = 0;
    float worst = -1;
    float best = 101;
    float average = 0;

    // Get grades from user until -1 is entered
    cout << "Enter your grades one by one, type -1 to finish:" << endl;

    while(true) {
        cout << "Enter a grade: " << endl;
        cin >> grade;

        if(grade == -1){
            break;
        }
        //Add grade to grades array
        grades.push_back(grade);
        //update sum
        sum += grade;
    
        //find highest and lowest grades
        if (grade > worst) worst = grade;
        if (grade < best) best = grade;
    }
    
    //Display results
    if (!grades.empty()) { // only if grades is not empty
        average = sum / grades.size();


        cout << "\n" << endl;
        cout << "Average grade: " << average << endl;
        cout << "Best grade: " << best << endl;
        cout << "Worst grade: " << worst << endl;
    } else {
        cout << "No grades entered." << endl;
    }

    return 0;


    



}
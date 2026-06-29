#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

// Returns the sum of three given scores
double calculateTotal(double score1, double score2, double score3) {
    return score1 + score2 + score3;
}

// Returns an average (total divided by count)
// Returns 0.0 if count is invalid (less than or equal to 0)
double calculateAverage(double total, int count) {
    if(count <= 0)
        return 0.0;

    return total / count;
}

// Returns 'A' for averages 90 or higher.
// Returns 'B' for averages 80 or higher.
// Returns 'C' for averages 70 or higher.
// Returns 'D' for averages 60 or higher.
// Returns 'F' otherwise.
char determineLetterGrade(double average) {
    if(average >= 90) return 'A';
    if(average >= 80) return 'B';
    if(average >= 70) return 'C';
    if(average >= 60) return 'D';

    return 'F';
}

// Returns true when an average is passing (70 or higher)
bool isPassing(double average) {
    return average >= 70;
}

// Returns true when a score is valid (between 0 and 100, inclusive)
bool isValidScore(double score) {
    return score >= 0 && score <= 100;
}

// Prompts the user for a score until a valid score is entered
// Returns the validated score
double getValidScore(int scoreNumber) {
    double score;
    cout << "Enter score" << scoreNumber << ": ";
    cin >> score;

    while(!isValidScore(score)) {
        cout << "Invalid score. Enter a score from 0 to 100";
        cin >> score;
    }

    return score;
}

// Command-line grade report
// Includes: total points, average score, letter grade, and passing status
void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}

#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

int main() {
    double score1 = 0.0;
    double score2 = 0.0;
    double score3 = 0.0;

    cout << "Grade Analyzer" << endl;
    cout << endl;

    score1 = getValidScore(1);
    score2 = getValidScore(2);
    score3 = getValidScore(3);

    double total = calculateTotal(score1, score2, score3);
    double average = calculateAverage(total, SCORE_COUNT);
    char letterGrade = determineLetterGrade(average);
    bool passing = isPassing(average);

    printGradeReport(total, average, letterGrade, passing);

    return 0;
}

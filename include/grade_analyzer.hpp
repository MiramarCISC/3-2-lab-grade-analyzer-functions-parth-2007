#ifndef GRADE_ANALYZER_HPP
#define GRADE_ANALYZER_HPP

const double A_MINIMUM = 90.0;
const double B_MINIMUM = 80.0;
const double C_MINIMUM = 70.0;
const double D_MINIMUM = 60.0;
const double PASSING_MINIMUM = 70.0;

const int SCORE_COUNT = 3;

// Required calculation and validation functions
double calculateTotal(double score1, double score2, double score3);
double calculateAverage(double total, int count);
char determineLetterGrade(double average);
bool isPassing(double average);
bool isValidScore(double score);
double getValidScore(int scoreNumber);

// Required output helper
void printGradeReport(double total, double average, char letterGrade, bool passing);

#endif

#include <stdio.h>

int main()
{

float TotalClasses, AttendedClasses, AttendancePercentage;

printf("Enter total number of classes: ");
scanf("%f", &TotalClasses);

printf("Enter number of classes attended: ");
scanf("%f", &AttendedClasses);

AttendancePercentage = (AttendedClasses / TotalClasses) * 100;

int AttendanceMark;

if (AttendancePercentage >= 90)
{
AttendanceMark = 10;
}
else if (AttendancePercentage >= 85)
{
AttendanceMark = 9;
}
else if (AttendancePercentage >= 80)
{
AttendanceMark = 8;
}
else if (AttendancePercentage >= 75)
{
AttendanceMark = 7;
}
else if (AttendancePercentage >= 70)
{
AttendanceMark = 6;
}
else if (AttendancePercentage >= 65)
{
AttendanceMark = 5;
}
else if (AttendancePercentage >= 60)
{
AttendanceMark = 4;
}
else
{
AttendanceMark = 0;
printf("\n");
printf("Not eligible for final exam.\n");
return 0;
}

float a, b, c, d, SumOfBest3CTMarks, CTMark;

printf("Enter marks of 4 class tests: ");
scanf("%f %f %f %f", &a, &b, &c, &d);

if (a == -1) a = 0;
if (b == -1) b = 0;
if (c == -1) c = 0;
if (d == -1) d = 0;

if (a > b)
{
if (b > c)
{
if (c > d)
{
SumOfBest3CTMarks = a + b + c;
}
else
{
SumOfBest3CTMarks = a + b + d;
}
}
else
{
if (b > d)
{
SumOfBest3CTMarks = a + b + c;
}
else
{
SumOfBest3CTMarks = a + c + d;
}
}
}
else
{
if (a > c)
{
if (c > d)
{
SumOfBest3CTMarks = b + a + c;
}
else
{
SumOfBest3CTMarks = b + a + d;
}
}
else
{
if (a > d)
{
SumOfBest3CTMarks = b + c + a;
}
else
{
SumOfBest3CTMarks = b + c + d;
}
}
}

CTMark = SumOfBest3CTMarks / 3;

float AQ1, AQ2, AQ3, AQ4, BQ1, BQ2, BQ3, BQ4, BestTwoMarkA, BestTwoMarkB, SectionRawMarkA, SectionRawMarkB, SectionFinalMarkA, SectionFinalMarkB, TermFinalMark, FinalMark;

printf("Enter marks of 4 questions in Section A: ");
scanf("%f %f %f %f", &AQ1, &AQ2, &AQ3, &AQ4);

printf("Enter marks of 4 questions in Section B: ");
scanf("%f %f %f %f", &BQ1, &BQ2, &BQ3, &BQ4);
printf("\n");

if (AQ2 != -1 && AQ3 != -1 && AQ4 != -1)
{
printf("Warning: More than 2 optional questions answered in Section A.\n");
}

if (BQ2 != -1 && BQ3 != -1 && BQ4 != -1)
{
printf("Warning: More than 2 optional questions answered in Section B.\n");
}

if (AQ1 == -1) AQ1 = 0;
if (AQ2 == -1) AQ2 = 0;
if (AQ3 == -1) AQ3 = 0;
if (AQ4 == -1) AQ4 = 0;

if (BQ1 == -1) BQ1 = 0;
if (BQ2 == -1) BQ2 = 0;
if (BQ3 == -1) BQ3 = 0;
if (BQ4 == -1) BQ4 = 0;

if (AQ2 > AQ3)
{
if (AQ3 > AQ4)
{
BestTwoMarkA = AQ2 + AQ3;
}
else
{
BestTwoMarkA = AQ2 + AQ4;
}
}
else
{
if (AQ2 > AQ4)
{
BestTwoMarkA = AQ3 + AQ2;
}
else
{
BestTwoMarkA = AQ3 + AQ4;
}
}

if (BQ2 > BQ3)
{
if (BQ3 > BQ4)
{
BestTwoMarkB = BQ2 + BQ3;
}
else
{
BestTwoMarkB = BQ2 + BQ4;
}
}
else
{
if (BQ2 > BQ4)
{
BestTwoMarkB = BQ3 + BQ2;
}
else
{
BestTwoMarkB = BQ3 + BQ4;
}
}

SectionRawMarkA = AQ1 + BestTwoMarkA;
SectionRawMarkB = BQ1 + BestTwoMarkB;

SectionFinalMarkA = (SectionRawMarkA / 105) * 35;
SectionFinalMarkB = (SectionRawMarkB / 105) * 35;

TermFinalMark = SectionFinalMarkA + SectionFinalMarkB;
FinalMark = AttendanceMark + CTMark + TermFinalMark;

if (FinalMark >= 80)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: A+\n");
printf("CGPA: 4.00\n");
}
else if (FinalMark >= 75)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: A\n");
printf("CGPA: 3.75\n");
}
else if (FinalMark >= 70)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: A-\n");
printf("CGPA: 3.50\n");
}
else if (FinalMark >= 65)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: B+\n");
printf("CGPA: 3.25\n");
}
else if (FinalMark >= 60)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: B\n");
printf("CGPA: 3.00\n");
}
else if (FinalMark >= 55)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: B-\n");
printf("CGPA: 2.75\n");
}
else if (FinalMark >= 50)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: C+\n");
printf("CGPA: 2.50\n");
}
else if (FinalMark >= 45)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: C\n");
printf("CGPA: 2.25\n");
}
else if (FinalMark >= 40)
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: D\n");
printf("CGPA: 2.00\n");
}
else
{
printf("Final Mark: %.2f\n", FinalMark);
printf("Grade: F\n");
printf("CGPA: 0.00\n");
}

return 0;
}

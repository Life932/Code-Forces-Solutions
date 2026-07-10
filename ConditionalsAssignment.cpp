
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Attendance starts here ---->

    float TotalClasses, AttendedClasses, AttendancePercentage;

    cout << "Enter total number of classes: \n";
    cin >> TotalClasses;

    cout << "Enter number of classes attended: \n";
    cin >> AttendedClasses;

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

        cout << "Not eligible for final exam.\n";
    }
    if (AttendanceMark >= 4)
    {

        // CT Mark starts here ----->

        float a, b, c, d, SumOfBest3CTMarks, CTMark; // Class Test Marks

        cout << "Enter marks of 4 class tests: \n";
        cin >> a >> b >> c >> d;

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

        // Term Final starts here ----->

        float AQ1, AQ2, AQ3, AQ4, BQ1, BQ2, BQ3, BQ4, BestTwoMarkA, BestTwoMarkB, SectionRawMarkA, SectionRawMarkB, SectionFinalMarkA, SectionFinalMarkB, TermFinalMark, FinalMark;

        cout << "Enter marks of 4 questions in Section A: \n";
        cin >> AQ1 >> AQ2 >> AQ3 >> AQ4;

        cout << "Enter marks of 4 questions in Section B: \n";
        cin >> BQ1 >> BQ2 >> BQ3 >> BQ4;
        cout << "\n";

        if (AQ2 != -1 && AQ3 != -1 && AQ4 != -1)
        {
            cout << "Warning: More than 2 optional questions answered in Section A.\n";
        }
        else
        {
        }
        if (BQ2 != -1 && BQ3 != -1 && BQ4 != -1)
        {
            cout << "Warning: More than 2 optional questions answered in Section B.\n";
        }
        else
        {
        }

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

        string Grade, CGPA;

        if (FinalMark >= 80)
        {
            Grade = "A+";
            CGPA = "4.00";
        }
        else if (FinalMark >= 75)
        {
            Grade = "A";
            CGPA = "3.75";
        }
        else if (FinalMark >= 70)
        {
            Grade = "A-";
            CGPA = "3.50";
        }
        else if (FinalMark >= 65)
        {
            Grade = "B+";
            CGPA = "3.25";
        }
        else if (FinalMark >= 60)
        {
            Grade = "B-";
            CGPA = "3.00";
        }
        else if (FinalMark >= 55)
        {
            Grade = "B-";
            CGPA = "2.75";
        }
        else if (FinalMark >= 50)
        {
            Grade = "C+";
            CGPA = "2.50";
        }
        else if (FinalMark >= 45)
        {
            Grade = "C";
            CGPA = " 2.25";
        }
        else if (FinalMark >= 40)
        {
            Grade = "D";
            CGPA = "2.00";
        }
        else
        {
            Grade = "F";
            CGPA = "0.00";
        }

        cout << "Final Mark: " << FinalMark << "\n";
        cout << "Grade: " << Grade << "\n";
        cout << "CGPA: " << CGPA << "\n";
    }
    return 0;
}

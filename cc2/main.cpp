#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void loseexam()
{
    cout << "You didn't pass the exam, fuck you cunt" << endl;
    system("pause");
    exit(2);
}
void win()
{
    cout << "You passed the exam, congratulations!" << endl;
    system("pause");
    exit(2);
}
void fail()
{
    cout << "You lose" << endl;
    system("pause");
    exit(2);
}
int main()
{
    float sleepiness, knowledge, preparation, exam_success, answers = 0, risk = 0;
    int a1, a2, a3, a4, a5;
    srand(time(NULL));
    int answer_true = rand() % 10;
    std::string fall_a_sleep("22:00");
    cout << "Tomorrow I have the final test in algebra for the first half of the year,\nbut the clock is already 22:00, what should I do?\nGo to bed early or go to bed late, but better prepared?\n"
         << endl;
    do
    {
        cout << "[1] Relax and gain strength before tomorrow's work and fall asleep at 22:00\n[2] Read a couple of paragraphs one more time and fall asleep at 00:00\n[3] Solve a couple of tests without difficult tasks and fall asleep at 02:00\n[4] Solve a couple of tests with difficult tasks and fall asleep at 04:00" << endl;
        cin >> a1;
    } while (a1 <= 0 || a1 > 4);
    if (a1 == 1)
    {
        preparation = 0.5;
        sleepiness = 0.10;
        fall_a_sleep = "22:00";
        exam_success = preparation - (preparation * sleepiness); // 0.45
    }
    else if (a1 == 2)
    {
        preparation = 0.75;
        sleepiness = 0.3;
        fall_a_sleep = "00:00";
        exam_success = preparation - (preparation * sleepiness); // 0.525
    }
    else if (a1 == 3)
    {

        preparation = 0.80;
        sleepiness = 0.35;
        fall_a_sleep = "02:00";
        exam_success = preparation - (preparation * sleepiness); // 0.52
    }
    else
    {
        preparation = 1;
        sleepiness = 0.50;
        fall_a_sleep = "04:00";
        exam_success = preparation - (preparation * sleepiness); // 0.5
    }
    if (a1 <= 2) // выспался
        cout << "\nAt 7:30 a.m., after 2 hours you need to be at school,\nbut you got enough sleep, because you went to bed today at " << fall_a_sleep << endl;
    else // не выспался
    {
        cout << "\nAt 8:20 a.m., after 1 hour and 10 minutes you need to be at school,\ntoday you have the final test, but you didn’t get enough sleep, because you went to bed today at " << fall_a_sleep << "\n\n";
    }
    do
    {
        cout << "                  \n*Thoughts in the head*\n[1] Sleep another hour\n[2] Sleep another half hour and other to prepare for the exam\n[3] Hour to prepare for the exam" << endl;
        cin >> a2;
    } while (a2 <= 0 || a2 > 3);
    if (a2 == 1) //
    {
        if (sleepiness >= 0.50)
        {
            fail();
        }
        else
        {
            cout << "\nYou slept a little half an hour and became a little more cheerful than you were, rather go to school!\n"
                 << endl;
            sleepiness -= 0.10;                                      // [1] 0 [2] 0.2 [3] 0.25 [4] ---
            exam_success = preparation - (preparation * sleepiness); // [1] 0.5 [2] 0.6 [3] 0.6 [4] ---
        }
    }
    else if (a2 == 2)
    {
        cout << "\nYou slept for half an hour and spent a little more time preparing for the exam, time to go to school...\n"
             << endl;
        sleepiness -= 0.05;                                      // [1] 0.05 [2] 0.15 [3] 0.20 [4] 0.45
        preparation += 0.10;                                     // [1] 0.6 [2] 0.85 [3] 0.95 [4] 1.1
        exam_success = preparation - (preparation * sleepiness); // [1] 0.57 [2] 0.7225 [3] 0.76 [4] 0.605
    }
    else
    {
        cout << "\nYou spent the rest of your time preparing for the exam, time to go to school...\n"
             << endl;
        sleepiness += 0.10;                                      // [1] 0.20 [2] 0.40 [3] 0.45 [4] 0.6
        preparation += 0.20;                                     // [1] 0.7 [2] 0.95 [3] 1.15 [4] 1.2
        exam_success = preparation - (preparation * sleepiness); // [1] 0.56 [2] 0.7225 [3] 0.6325 [4] 0.48
        if (a1 == 4)
        {
            exam_success += 0.15;
        }
    }
    do
    {
        cout << "You came to school and your classmate sells the answers to the exam,\nbut no one guarantees that they are true, what will you do? " << endl;
        cout << "[1] I will buy answers\n[2] I can handle it myself" << endl;
        cin >> a3;
    } while (a3 <= 0 || a3 > 2);
    if (a3 == 1)
    {
        cout << "*You bought the answers*\n"
             << endl;
        answers++;
    }
    else
    {
        cout << "*You refused to buy answers*\n";
    }
    do
    {
        cout << "You are distributed by audience, which one will you choose?" << endl;
        cout << "[1] 231 [2] 233 [3] 321 [4] 422" << endl; // [1] 0.30 [2] 0.6 [3] 1 [4] 0.3
        cin >> a4;
    } while (a4 <= 0 || a4 > 4);
    if (a4 == 1)
    {
        risk = 0.3;
    }
    else if (a4 == 2)
    {
        risk = 0.6;
    }
    else if (a4 == 3)
    {
        risk = 1;
    }
    else
    {
        risk = 0.3;
    }
    do
    {
        cout << "\nYou sat in the audience and were given blanks and assignments, will we see the answers?" << endl;
        cout << "[1] Yes [2] No" << endl;
        cin >> a5;
    } while (a5 <= 0 || a5 > 2);
    if (a5 == 1)
    {
        if (answers == 1)
        {
            if (answer_true % 2 == 0 && risk < 0.50)
            {
                cout << "The answers coincided with the tasks, super!" << endl;
                win();
            }
            else
            {
                cout << "Fuck... Answers do not match." << endl;
                cout << "\nOkay, let's try myself!\n"
                     << endl;
                if (exam_success >= 0.6)
                {
                    win();
                }
                else
                {
                    loseexam();
                }
            }
        }
        else
        {
            cout << "You refused to buy answers ...\n";
            cout << "\nOkay, let's do it!\n"
                 << endl;
            if (exam_success >= 0.6)
            {
                win();
            }
            else
            {
                loseexam();
            }
        }
    }
    else
    {
        cout << "\nOkay, let's do it!\n"
             << endl;
        if (exam_success >= 0.6)
        {
            win();
        }
        else
        {
            loseexam();
        }
    }
}
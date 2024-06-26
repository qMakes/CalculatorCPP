#include <iostream>
#include <cmath>

using namespace std;

double arithmetic();
double trigonometric();
double exponential();
double logarithmic();
void displayResult(float result);

int main()
{
    int selectionOperator;
    float result = 0;
    cout << "this is our calculator app" << endl;
    cout << "you have to pick out which operator you want to use" << endl
    << "1: Arithmetic\n"
    << "2: Trigonometric\n"
    << "3: Exponential\n"
    << "4: Logarithmic\n"
    << "\nPlease select your option and press enter" << endl;

    cin.clear();

    cin >> selectionOperator;

    if(selectionOperator < 1 || selectionOperator > 4)
    {
        cout << "you have unfortunately selected an invalid option, please try again" << endl;
        main();
    }

    else
        switch(selectionOperator)
        {
            case 1: result = arithmetic();
                    break;
            case 2: result = trigonometric();
                    break;
            case 3: result = exponential();
                    break;
            case 4: result = logarithmic();
                    break;
        }

        cout << result << endl;



}

double arithmetic()
{
    char operation;
    float A = 0;
    float B = 0;
    cout << "This is your arithmetic calculator\n"
    << "select your arithmetic operation {+,-,*,d(for divide)}" << endl;

    cin >> operation;
    cin.clear();

    cout << "Enter first number: ";
    cin >> A;
    cin.clear();

    cout << "Enter second number: ";
    cin >> B;
    cin.clear();

    cout << "\n\nResult:";
    switch(operation)
    {
        case '+': return(A + B);
        break;

        case '-': return(A - B);
        break;

        case '*': return(A * B);
        break;

        case '/': return(A / B);
        break;

        default: return(9999.9999);
    }

}

double trigonometric()
{
    char operation;
    float angle = 0;
    cout << "This is your trigonometric calculator\n"
    << "select your arithmetic operation s, c, t" << endl;

    cin >> operation;
    cin.clear();

    cout << "Enter angle in degrees: ";
    cin >> angle;
    cin.clear();

    cout << "\n\nResult:";
    switch(operation)
    {
        case 's': return(sin(angle));
        break;

        case 'c': return(cos(angle));
        break;

        case 't': return(sin(angle) / cos(angle));
        break;

        default: return(9999.9999);
    }

}
double exponential()
{
    float base;
    float exp;
    cout << "Please type in your base" << endl;
    cin >> base;
    cout << "Please type in your exponent" << endl;
    cin >> exp;
    return pow(base, exp);
}
double logarithmic()
{
    float base;
    cout << "Type in the number you'd like to get a logarithmic of" << endl;
    cin >> base;

    return log(base);
}

void displayResult(float result)
{
    cout << "Your Answer Is: " << result << endl;
}

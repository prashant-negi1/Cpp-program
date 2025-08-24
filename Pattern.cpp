#include <iostream>
using namespace std;
int main()
{
    cout << "first pattern\n";
    // pattern1
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //  pattern2

    cout << "\nsecond pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //  third pattern

    cout << "\nthird pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    //  fourth pattern
    cout << "\nfourth pattern\n";

    for (int i = 1; i <= 5; i++)
    {
        int k = i;
        for (int j = 1; j <= i; j++)
        {

            cout << k << " ";
            k--;
        }

        cout << endl;
    }

    //  fifth pattern
    cout << "\nfifth pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + i) << " ";
        }
        cout << endl;
    }

    //  sixth pattern
    cout << "\nsixth pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(96 + i) << " ";
        }
        cout << endl;
    }

    //  seventh pattern
    cout << "\nseventh pattern\n";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //  eighth pattern
    cout << "\neight pattern\n";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    //  ninth pattern
    cout << "\nNinth pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        int k = 5;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k--;
        }
        cout << endl;
    }

    //  tenth pattern
    cout << "\ntenth pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        // print space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //  Eleventh pattern
    cout << "\nEleventh pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        // print space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    //  Twelth pattern
    cout << "\nTwelth pattern\n";
    for (int i = 1; i <= 5; i++)
    {
        int k = 1;
        // print space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    //  thirteenth pattern
    cout << "\nThirteenth pattern\n";

    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        // print space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    //  fourteenth pattern
    cout << "\nFourteenth pattern\n";

    for (int i = 1; i <= 5; i++)
    {

        // print space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        // print star
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    //  fifteenth pattern
    cout << "\nFifteenth pattern\n";

    for (int i = 1; i <= 5; i++)
    {

        // print space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        // print star
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    //  sixteenth pattern
    cout << "\nsixteenth pattern\n";

    for (int i = 1; i <= 5; i++)
    {
        int k = i - 1;

        // print space
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // print star
        for (int j = 1; j < 0 + i; j++)
        {
            cout << k << " ";
            k--;
        }

        cout << endl;
    }

    //  seventeenth pattern
    cout << "\nSeventeenth pattern\n";

    for (int i = 5; i >= 1; i--)
    {

        // print space
        for (int j = 5; j > i; j--)
        {
            cout << "  ";
        }

        // print star
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }



    
    //  eighteenth pattern
    cout << "\nEighteenth pattern\n";

    for (int i = 5; i >= 1; i--)
    {

      
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

          // print space
        for (int j = 1; j <=(5*2)-(2*i); j++ )
        {
            cout << "  ";
        }
         // print star
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

     for (int i = 1; i <= 5; i++)
    {

      
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

          // print space
        for (int j = 1; j <=(5*2)-(2*i); j++ )
        {
            cout << "  ";
        }
         // print star
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

 //  nineenth pattern
    cout << "\nNineenth pattern\n";

    for (int i = 4; i >= 1; i--)
    {

      
        // print space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

          // print star
        for (int j = i; j <=4; j++ )
        {
            cout << "* ";
        }
        

        cout << endl;
    }


    for (int i = 1; i <= 4; i++)
    {

      
        // print space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

          // print star
        for (int j = i; j <=4; j++ )
        {
            cout << "* ";
        }
        

        cout << endl;
    }




    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int pti = 0, pmln = 0, ppp = 0;
    int partyselect;
    char ch;


    string uname;
    int pass;

    cout << "\n====================================" << endl;
    cout << "    WELCOME TO ONLINE VOTING SYSTEM  " << endl;
    cout << "====================================" << endl;

    do
    {
        cout << endl;
        cout << "------------------------------------" << endl;
        cout << "           MAIN MENU                " << endl;
        cout << "------------------------------------" << endl;
        cout << "  Press [V] to vote                " << endl;
        cout << "  Press [R] to see results         " << endl;
        cout << "  Press [E] to exit                " << endl;
        cout << "------------------------------------" << endl;
        cout << "  Enter your choice: ";
        cin >> ch;
        cout << endl;


        if (ch == 'V' || ch == 'v')
        {

            cout << "====================================" << endl;
            cout << "         VOTE FOR YOUR PARTY        " << endl;
            cout << "====================================" << endl;
            cout << "  [1] Vote for PTI                 " << endl;
            cout << "  [2] Vote for PMLN                " << endl;
            cout << "  [3] Vote for PPP                 " << endl;
            cout << "====================================" << endl;
            cout << "  Enter your choice: ";
            cin >> partyselect;
            cout << endl;

            if (partyselect < 1 || partyselect > 3)
            {
                cout << "====================================" << endl;
                cout << "  ERROR: Invalid option!           " << endl;
                cout << "  No such party exists.            " << endl;
                cout << "  Please enter 1, 2, or 3.          " << endl;
                cout << "====================================" << endl;
            }
            else
            {

                switch (partyselect)
                {
                case 1:
                    pti++;
                    cout << "====================================" << endl;
                    cout << "  SUCCESS: Vote recorded!          " << endl;
                    cout << "  You voted for PTI candidate.     " << endl;
                    cout << "====================================" << endl;
                    break;
                case 2:
                    pmln++;
                    cout << "====================================" << endl;
                    cout << "  SUCCESS: Vote recorded!          " << endl;
                    cout << "  You voted for PMLN candidate.    " << endl;
                    cout << "====================================" << endl;
                    break;
                case 3:
                    ppp++;
                    cout << "====================================" << endl;
                    cout << "  SUCCESS: Vote recorded!          " << endl;
                    cout << "  You voted for PPP candidate.     " << endl;
                    cout << "====================================" << endl;
                    break;
                default:
                    cout << "====================================" << endl;
                    cout << "  ERROR: Invalid option!           " << endl;
                    cout << "  No such party exists.            " << endl;
                    cout << "====================================" << endl;
                }
            }
        }
        else if (ch == 'R' || ch == 'r')
        {

            cout << "====================================" << endl;
            cout << "         ADMIN LOGIN REQUIRED       " << endl;
            cout << "====================================" << endl;
            cout << "  Enter username: ";
            cin >> uname;
            cout << "  Enter password: ";
            cin >> pass;
            cout << endl;


            if (uname == "Admin" && pass == 1234)
            {
                cout << "===================================" << endl;
                cout << "       POLLING STATION RESULTS      " << endl;
                cout << "====================================" << endl;
                cout << endl;
                cout << "  PTI  : " << pti << " votes" << endl;
                cout << "  PMLN : " << pmln << " votes" << endl;
                cout << "  PPP  : " << ppp << " votes" << endl;
                cout << endl;
                cout << "====================================" << endl;

                if (pti == 0 && pmln == 0 && ppp == 0)
                {
                    cout << "  RESULT: No votes cast yet!       " << endl;
                    cout << "====================================" << endl;
                }

                else if (pti > pmln && pti > ppp)
                {
                    cout << "  WINNER: PTI is the winner!       " << endl;
                    cout << "====================================" << endl;
                }
                else if (pmln > pti && pmln > ppp)
                {
                    cout << "  WINNER: PMLN is the winner!      " << endl;
                    cout << "====================================" << endl;
                }
                else if (ppp > pti && ppp > pmln)
                {
                    cout << "  WINNER: PPP is the winner!       " << endl;
                    cout << "====================================" << endl;
                }
                else if (pti == pmln && pti > ppp)
                {
                    cout << "  RESULT: Tie between PTI & PMLN!   " << endl;
                    cout << "====================================" << endl;
                }
                else if (pti == ppp && pti > pmln)
                {
                    cout << "  RESULT: Tie between PTI & PPP!    " << endl;
                    cout << "====================================" << endl;
                }
                else if (pmln == ppp && pmln > pti)
                {
                    cout << "  RESULT: Tie between PMLN & PPP!  " << endl;
                    cout << "====================================" << endl;
                }
                else
                {
                    cout << "  RESULT: All parties are tied!     " << endl;
                    cout << "====================================" << endl;
                }
            }
            else
            {
                cout << "====================================" << endl;
                cout << "  ERROR: Incorrect username or     " << endl;
                cout << "         password!                 " << endl;
                cout << "  Please try again.                " << endl;
                cout << "====================================" << endl;
            }
        }
        else if (ch == 'E' || ch == 'e')
        {
            cout << "====================================" << endl;
            cout << "    THANK YOU FOR USING OUR SYSTEM   " << endl;
            cout << "====================================" << endl;
            cout << "              GOODBYE!              " << endl;
            cout << "====================================" << endl;
        }
        else
        {
            cout << "====================================" << endl;
            cout << "  ERROR: Invalid choice!            " << endl;
            cout << "  Please enter V, R, or E only.     " << endl;
            cout << "====================================" << endl;
        }

    } while (ch != 'E' && ch != 'e');

    return 0;
}
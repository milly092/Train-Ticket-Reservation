#include <bits/stdc++.h>
#include "customDLL&Queue.h"
#include "login.h"

using namespace std;

int main() {
    int choice = 0;
    int a = 0;
    int c = 0;
    srand(time(NULL));
    time_t now = time(0);
    char* dt = ctime(&now);

    DLL *Dhaka = new DLL();
    DLL *Rajshahi = new DLL();
    DLL *Chittagong = new DLL();
    DLL *Cumilla = new DLL();
    DLL *Sylhet = new DLL();

    Dhaka->add(1130);
    Dhaka->add(1131);
    Dhaka->add(1132);
    Dhaka->add(1133);

    Rajshahi->add(1230);
    Rajshahi->add(1231);
    Rajshahi->add(1232);
    Rajshahi->add(1233);

    Chittagong->add(1330);
    Chittagong->add(1331);
    Chittagong->add(1332);
    Chittagong->add(1333);

    Cumilla->add(1430);
    Cumilla->add(1431);
    Cumilla->add(1432);
    Cumilla->add(1433);

    Sylhet->add(1530);
    Sylhet->add(1531);
    Sylhet->add(1532);
    Sylhet->add(1533);

    Queue *q = new Queue();

    int Parabat_Express[20] = {0};
    int Godhuli_express[20] = {0};
    int Shonar_Bangla[20] = {0};
    int BD_Express[20] = {0};

    while (a != 3) {
        int b;

        loginManager log;
        b = log.login();
        a++;
        c++;

        if (b == 1) {
            while (choice != 3) {
                cout << "1. Reserve a ticket" << endl;
                cout << "2. Cancel ticket" << endl;
                cout << "3. Exit" << endl;
                cin >> choice;

                if (choice == 1) {
                    int x;
                    cout << "From:\n1. Dhaka \n2. Rajshahi \n3. Chittagong \n4. Cumilla \n5. Sylhet" << endl;
                    cin >> x;

                    int y;
                    if (x == 1) {
                        cout << "Destination:\n1. Rajshahi \n2. Chittagong \n3. Cumilla \n4. Sylhet" << endl;
                        cin >> y;
                    } else if (x == 2) {
                        cout << "Destination:\n1. Dhaka \n2. Chittagong \n3. Cumilla \n4. Sylhet" << endl;
                        cin >> y;
                    } else if (x == 3) {
                        cout << "Destination:\n1. Dhaka \n2. Rajshahi \n3. Cumilla \n4. Sylhet" << endl;
                        cin >> y;
                    } else if (x == 4) {
                        cout << "Destination:\n1. Dhaka \n2. Rajshahi \n3. Chittagong \n4. Sylhet" << endl;
                        cin >> y;
                    } else if (x == 5) {
                        cout << "Destination:\n1. Dhaka \n2. Rajshahi \n3. Chittagong \n4. Cumilla" << endl;
                        cin >> y;
                    }

                    int z;
                    cout << "Available Trains: \n1. Godhuli Express \n2. Shonar Bangla \n3. BD Express" << endl;
                    cin >> z;

                    if (z >= 1 && z <= 3) {
                        int e;
                        cout << "Select class: \n1. Shovon \n2. AC coach \n3. Non-AC coach" << endl;
                        cin >> e;

                        int f;
                        cout << "Select Bogey: \n1. A \n2. B \n3. C \n4. D" << endl;
                        cin >> f;

                        if (e >= 1 && e <= 3 && f >= 1 && f <= 2) {
                            int g, m;
                            cout << "How many tickets do you want to buy" << endl;
                            cin >> m;

                            for (int n = 0; n < m; n++) {
                                cout << "Available seats" << endl;
                                int* train;
                                if (z == 1) train = Godhuli_express;
                                else if (z == 2) train = Shonar_Bangla;
                                else if (z == 3) train = BD_Express;

                                for (int k = 0; k < 20; k++) {
                                    if (train[k] == 0) {
                                        cout << " " << k + 1;
                                    }
                                }
                                cout << "\n\nEnter seat No:" << endl;
                                cin >> g;

                                if (train[g - 1] == 0) {
                                    q->Enque(g);
                                    train[g - 1] = 1;
                                } else {
                                    cout << "Seat is unavailable" << endl;
                                    n--; // Decrease n to retry this seat selection
                                }
                            }

                            cout << "                        Ticket      " << endl;
                            cout << "Name: User" << endl;
                            cout << "Train: ";
                            if (z == 1) cout << "Godhuli Express" << endl;
                            else if (z == 2) cout << "Shonar Bangla" << endl;
                            else if (z == 3) cout << "BD Express" << endl;

                            cout << "From: ";
                            if (x == 1) cout << "Dhaka";
                            else if (x == 2) cout << "Rajshahi";
                            else if (x == 3) cout << "Chittagong";
                            else if (x == 4) cout << "Cumilla";
                            else if (x == 5) cout << "Sylhet";

                            cout << "                         Destination: ";
                            if (y == 1) cout << "Rajshahi" << endl;
                            else if (y == 2) cout << "Chittagong" << endl;
                            else if (y == 3) cout << "Cumilla" << endl;
                            else if (y == 4) cout << "Sylhet" << endl;

                            cout << "Departure time: 4 pm               Arrival time: 12 am" << endl;
                            cout << "Number of seats: " << m << "                 Price: " << 350 * m << " Taka" << endl;
                            cout << "Date & Time: " << dt << endl;
                            cout << "Ticket no: " << rand() % 100000 << endl;
                            cout << "\n\n";
                            q->Deque();
                        }
                    }
                } else if (choice == 2) {
                    int o;
                    cout << "Enter ticket No: " << endl;
                    cin >> o;
                    cout << "Ticket cancelled" << endl;
                } else if (choice == 3) {
                    a = 3;
                    cout << "Program ended successfully" << endl;
                }
            }
        }
    }
    if (c == 3) {
        cout << "Too many incorrect attempts" << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

class Train
{
public:
    int trainNumber;

    string trainName;

    string source;

    string destination;

    string arrivalTime;

    string departureTime;

    int fare;

    int max_seats;

    int booked_seats = 0;

    int seats_rem = max_seats;

    Train *prev;

    Train *next;
};

class Bus
{
public:
    int busID;

    string busName;

    string source;

    string destination;

    string arrivalTime;

    string departureTime;

    int fare;

    int max_seats;

    int booked_seats = 0;

    int seats_rem = max_seats;

    Bus *prev;

    Bus *next;
};

class Plane
{
public:
    string flightNumber;

    string flightName;

    string source;

    string destination;

    string arrivalTime;

    string departureTime;

    int fare;

    int max_seats;

    int booked_seats = 0;

    int seats_rem = max_seats;

    Plane *prev;

    Plane *next;
};

Train *headTrain = new Train;
Bus *headBus = new Bus;
Plane *headPlane = new Plane;

void initTrain()
{
    headTrain->trainNumber = 12439;

    headTrain->trainName = "RAJDHANI EXPRESS";

    headTrain->source = "NEW DELHI";

    headTrain->destination = "AHEMDABAD";

    headTrain->arrivalTime = "07:45";

    headTrain->departureTime = "08:15";

    headTrain->fare = 490;

    headTrain->max_seats = 88;

    headTrain->booked_seats = 1;

    headTrain->seats_rem = 87;

    headTrain->next = NULL;

    headTrain->prev = NULL;
}

void initBus()
{
    headBus->busID = 1001;

    headBus->busName = "JanRath AC";

    headBus->source = "Khalilabad";

    headBus->destination = "Varanasi";

    headBus->arrivalTime = "21:00";

    headBus->departureTime = "07:45";

    headBus->fare = 580;

    headBus->max_seats = 40;

    headBus->booked_seats = 1;

    headBus->seats_rem = 39;

    headBus->next = NULL;

    headBus->prev = NULL;
}

void initPlane()
{
    headPlane->flightNumber = "6E-2507";

    headPlane->flightName = "IndiGo";

    headPlane->source = "Gorakhpur";

    headPlane->destination = "Delhi";

    headPlane->arrivalTime = "08:40";

    headPlane->departureTime = "10:10";

    headPlane->fare = 9067;

    headPlane->max_seats = 30;

    headPlane->booked_seats = 1;

    headPlane->seats_rem = 39;

    headPlane->next = NULL;

    headPlane->prev = NULL;
}

class Passenger
{
public:
    string pname;
    string page;
    char gender;
    Passenger *next = NULL;
};

class trainTicket : public Train
{
public:
    int no_of_booked_seats, totalFare;

    trainTicket *next;

    trainTicket *prev;

    Passenger *pass;
};

class busTicket : public Bus
{
public:
    int no_of_booked_seats, totalFare;

    busTicket *next;

    busTicket *prev;

    Passenger *pass;
};

class planeTicket : public Plane
{
public:
    int no_of_booked_seats, totalFare;

    planeTicket *next;

    planeTicket *prev;

    Passenger *pass;
};

trainTicket *headTrainTicket = new trainTicket;
busTicket *headBusTicket = new busTicket;
planeTicket *headPlaneTicket = new planeTicket;

void initTrainTicket()
{
    headTrainTicket->trainNumber = 12439;

    headTrainTicket->trainName = "RAJDHANI EXPRESS";

    headTrainTicket->source = "NEW DELHI";

    headTrainTicket->destination = "AHEMDABAD";

    headTrainTicket->arrivalTime = "07:45";

    headTrainTicket->departureTime = "08:15";

    headTrainTicket->no_of_booked_seats = 1;

    headTrainTicket->totalFare = 490;

    Passenger *ptr = new Passenger;
    ptr->pname = "Anubhav Singh";
    ptr->page = "19";
    ptr->gender = 'M';
    ptr->next = NULL;

    headTrainTicket->pass = ptr;

    headTrainTicket->prev = NULL;

    headTrainTicket->next = NULL;
}

void initBusTicket()
{
    headBusTicket->busID = 1001;

    headBusTicket->busName = "JanRath AC";

    headBusTicket->source = "Khalilabad";

    headBusTicket->destination = "Varanasi";

    headBusTicket->arrivalTime = "21:00";

    headBusTicket->departureTime = "07:45";

    headBusTicket->no_of_booked_seats = 1;

    headBusTicket->totalFare = 580;

    Passenger *ptr = new Passenger;
    ptr->pname = "Anubhav Singh";
    ptr->page = "19";
    ptr->gender = 'M';
    ptr->next = NULL;

    headBusTicket->pass = ptr;

    headBusTicket->prev = NULL;

    headBusTicket->next = NULL;
}

void initPlaneTicket()
{
    headPlaneTicket->flightNumber = "6E-2507";

    headPlaneTicket->flightName = "IndiGo";

    headPlaneTicket->source = "Gorakhpur";

    headPlaneTicket->destination = "Delhi";

    headPlaneTicket->arrivalTime = "80:40";

    headPlaneTicket->departureTime = "10:10";

    headPlaneTicket->no_of_booked_seats = 1;

    headPlaneTicket->totalFare = 9067;

    Passenger *ptr = new Passenger;
    ptr->pname = "Anubhav Singh";
    ptr->page = "19";
    ptr->gender = 'M';
    ptr->next = NULL;

    headPlaneTicket->pass = ptr;

    headPlaneTicket->prev = NULL;

    headPlaneTicket->next = NULL;
}

void showtrain(Train *ptr)
{
    system("CLS");

    cout << "Train No. = " << ptr->trainNumber << endl
         << endl;
    cout << "Train Name = " << ptr->trainName << endl
         << endl;
    cout << "Source = " << ptr->source << endl
         << endl;
    cout << "Destination = " << ptr->destination << endl
         << endl;
    cout << "Arrival = " << ptr->arrivalTime << endl
         << endl;
    cout << "Departure = " << ptr->departureTime << endl
         << endl;
    cout << "Fare = " << ptr->fare << endl
         << endl;
    cout << "Seats remaining = " << ptr->seats_rem << endl
         << endl;
}

void showbus(Bus *ptr)
{
    system("CLS");

    cout << "Bus ID = " << ptr->busID << endl
         << endl;
    cout << "Bus Name = " << ptr->busName << endl
         << endl;
    cout << "Source = " << ptr->source << endl
         << endl;
    cout << "Destination = " << ptr->destination << endl
         << endl;
    cout << "Arrival = " << ptr->arrivalTime << endl
         << endl;
    cout << "Departure = " << ptr->departureTime << endl
         << endl;
    cout << "Fare = " << ptr->fare << endl
         << endl;
    cout << "Seats remaining = " << ptr->seats_rem << endl
         << endl;
}

void showplane(Plane *ptr)
{
    system("CLS");

    cout << "Flight No. = " << ptr->flightNumber << endl
         << endl;
    cout << "Flight Name = " << ptr->flightName << endl
         << endl;
    cout << "Source = " << ptr->source << endl
         << endl;
    cout << "Destination = " << ptr->destination << endl
         << endl;
    cout << "Arrival = " << ptr->arrivalTime << endl
         << endl;
    cout << "Departure = " << ptr->departureTime << endl
         << endl;
    cout << "Fare = " << ptr->fare << endl
         << endl;
    cout << "Seats remaining = " << ptr->seats_rem << endl
         << endl;
}

void addTrainInfo()
{

    system("CLS");

    Train *ptr = headTrain;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    Train *newNode = new Train;

    cout << "Enter train number : ";
    cin >> newNode->trainNumber;

    cout << "Enter train name : ";
    getline(cin, newNode->trainName);
    getline(cin, newNode->trainName);

    cout << "Enter source : ";
    getline(cin, newNode->source);

    cout << "Enter destination : ";
    getline(cin, newNode->destination);

    cout << "Enter Time of Arrival of train : ";
    getline(cin, newNode->arrivalTime);

    cout << "Enter Time of Departure of train : ";
    getline(cin, newNode->departureTime);

    cout << "Enter fare : ";
    cin >> newNode->fare;

    cout << "Enter max no of seats : ";
    cin >> newNode->max_seats;

    newNode->seats_rem = newNode->max_seats;

    ptr->next = newNode;
    newNode->prev = ptr;
    newNode->next = NULL;
}

void addBusInfo()
{

    system("CLS");

    Bus *ptr = headBus;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    Bus *newNode = new Bus;

    cout << "Enter Bus Id : ";
    cin >> newNode->busID;

    cout << "Enter Bus name : ";
    getline(cin, newNode->busName);
    getline(cin, newNode->busName);

    cout << "Enter source : ";
    getline(cin, newNode->source);

    cout << "Enter destination : ";
    getline(cin, newNode->destination);

    cout << "Enter Time of Arrival of bus : ";
    getline(cin, newNode->arrivalTime);

    cout << "Enter Time of Departure of bus : ";
    getline(cin, newNode->departureTime);

    cout << "Enter fare : ";
    cin >> newNode->fare;

    cout << "Enter max no of seats : ";
    cin >> newNode->max_seats;

    newNode->seats_rem = newNode->max_seats;

    ptr->next = newNode;
    newNode->prev = ptr;
    newNode->next = NULL;
}

void addPlaneInfo()
{

    system("CLS");

    Plane *ptr = headPlane;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    Plane *newNode = new Plane;

    cout << "Enter flight number : ";
    getline(cin, newNode->flightNumber);
    getline(cin, newNode->flightNumber);

    cout << "Enter flight name : ";
    getline(cin, newNode->flightName);

    cout << "Enter source : ";
    getline(cin, newNode->source);

    cout << "Enter destination : ";
    getline(cin, newNode->destination);

    cout << "Enter Time of Arrival of flight : ";
    getline(cin, newNode->arrivalTime);

    cout << "Enter Time of Departure of flight : ";
    getline(cin, newNode->departureTime);

    cout << "Enter fare : ";
    cin >> newNode->fare;

    cout << "Enter max no of seats : ";
    cin >> newNode->max_seats;

    newNode->seats_rem = newNode->max_seats;

    ptr->next = newNode;
    newNode->prev = ptr;
    newNode->next = NULL;
}

void modifyTrainInfo()
{

    Train *ptr = headTrain;
    int choice;

    do
    {

        showtrain(ptr);
        cout << "Press :" << endl
             << endl
             << "1 to display next train" << endl
             << endl
             << "2 to display prev train" << endl
             << endl
             << "3 to modify this train info" << endl
             << endl
             << "4 to go back to previous menu" << endl
             << endl;
        cout << endl
             << endl
             << "Enter choice : ";
        cin >> choice;

        cout << endl
             << endl;

        switch (choice)
        {
        case 1:
        {
            if (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            else
            {
                cout << "Already at last entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 2:
        {
            if (ptr->prev != NULL)
            {
                ptr = ptr->prev;
            }
            else
            {
                cout << "Already at first entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 3:
        {

            int ch;

            cout << "Select field to change : " << endl
                 << endl
                 << "1. Train Number" << endl
                 << endl
                 << "2. Train Name" << endl
                 << endl
                 << "3. Source" << endl
                 << endl
                 << "4. Destination" << endl
                 << endl
                 << "5. Arrival Time" << endl
                 << endl
                 << "6. Departure Time" << endl
                 << endl
                 << "7. Fare" << endl
                 << endl
                 << endl

                 << "Enter choice : ";

            cin >> ch;

            cout << endl
                 << endl;

            switch (ch)
            {
            case 1:
            {
                int newInfo1;

                cout << "Enter new Train Number : ";
                cin >> newInfo1;

                ptr->trainNumber = newInfo1;

                break;
            }
            case 2:
            {
                string newInfo2;

                cout << "Enter new Train Name : ";
                getline(cin, newInfo2);
                getline(cin, newInfo2);

                ptr->trainName = newInfo2;

                break;
            }
            case 3:
            {
                string newInfo3;

                cout << "Enter new source name : ";
                getline(cin, newInfo3);
                getline(cin, newInfo3);

                ptr->source = newInfo3;

                break;
            }
            case 4:
            {
                string newInfo4;

                cout << "Enter new destination name : ";
                getline(cin, newInfo4);
                getline(cin, newInfo4);

                ptr->destination = newInfo4;

                break;
            }
            case 5:
            {
                string newInfo5;

                cout << "Enter new Arrival Time : ";
                getline(cin, newInfo5);
                getline(cin, newInfo5);

                ptr->arrivalTime = newInfo5;

                break;
            }
            case 6:
            {
                string newInfo6;

                cout << "Enter new Departure Time : ";
                getline(cin, newInfo6);
                getline(cin, newInfo6);

                ptr->departureTime = newInfo6;

                break;
            }

            case 7:
            {
                int newInfo7;

                cout << "Enter new fare : ";
                cin >> newInfo7;

                ptr->fare = newInfo7;

                break;
            }

            default:
            {
                cout << "Enter valid choice" << endl
                     << endl;
                sleep(1);
                break;
            }
            }
        }
        break;

        case 4:
        {
            cout << "Going back to previous menu" << endl;
            sleep(1);
            break;
        }

        default:
        {
            cout << "Enter valid choice" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 4);
}

void modifyBusInfo()
{

    Bus *ptr = headBus;
    int choice;

    do
    {

        showbus(ptr);
        cout << "Press :" << endl
             << endl
             << "1 to display next bus" << endl
             << endl
             << "2 to display prev bus" << endl
             << endl
             << "3 to modify this bus info" << endl
             << endl
             << "4 to go back to previous menu" << endl
             << endl;
        cout << endl
             << endl
             << "Enter choice : ";
        cin >> choice;

        cout << endl
             << endl;

        switch (choice)
        {
        case 1:
        {
            if (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            else
            {
                cout << "Already at last entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 2:
        {
            if (ptr->prev != NULL)
            {
                ptr = ptr->prev;
            }
            else
            {
                cout << "Already at first entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 3:
        {

            int ch;

            cout << "Select field to change : " << endl
                 << endl
                 << "1. Bus ID" << endl
                 << endl
                 << "2. Bus Name" << endl
                 << endl
                 << "3. Source" << endl
                 << endl
                 << "4. Destination" << endl
                 << endl
                 << "5. Arrival Time" << endl
                 << endl
                 << "6. Departure Time" << endl
                 << endl
                 << "7. Fare" << endl
                 << endl
                 << endl

                 << "Enter choice : ";

            cin >> ch;

            cout << endl
                 << endl;

            switch (ch)
            {
            case 1:
            {
                int newInfo1;

                cout << "Enter new Bus ID : ";
                cin >> newInfo1;

                ptr->busID = newInfo1;

                break;
            }
            case 2:
            {
                string newInfo2;

                cout << "Enter new Bus Name : ";
                getline(cin, newInfo2);
                getline(cin, newInfo2);

                ptr->busName = newInfo2;

                break;
            }
            case 3:
            {
                string newInfo3;

                cout << "Enter new source name : ";
                getline(cin, newInfo3);
                getline(cin, newInfo3);

                ptr->source = newInfo3;

                break;
            }
            case 4:
            {
                string newInfo4;

                cout << "Enter new destination name : ";
                getline(cin, newInfo4);
                getline(cin, newInfo4);

                ptr->destination = newInfo4;

                break;
            }
            case 5:
            {
                string newInfo5;

                cout << "Enter new Arrival Time : ";
                getline(cin, newInfo5);
                getline(cin, newInfo5);

                ptr->arrivalTime = newInfo5;

                break;
            }
            case 6:
            {
                string newInfo6;

                cout << "Enter new Departure Time : ";
                getline(cin, newInfo6);
                getline(cin, newInfo6);

                ptr->departureTime = newInfo6;

                break;
            }

            case 7:
            {
                int newInfo7;

                cout << "Enter new fare : ";
                cin >> newInfo7;

                ptr->fare = newInfo7;

                break;
            }

            

            default:
            {
                cout << "Enter valid choice" << endl
                     << endl;
                sleep(1);
                break;
            }
            }
        }
        break;

        case 4:
            {
                cout << "Going back to previous menu" << endl;
                sleep(1);
                break;
            }

        default:
        {
            cout << "Enter valid choice" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 4);
}

void modifyPlaneInfo()
{

    Plane *ptr = headPlane;
    int choice;

    do
    {

        showplane(ptr);
        cout << "Press :" << endl
             << endl
             << "1 to display next flight" << endl
             << endl
             << "2 to display prev flight" << endl
             << endl
             << "3 to modify this flight info" << endl
             << endl
             << "4 to go back to previous menu" << endl
             << endl;
        cout << endl
             << endl
             << "Enter choice : ";
        cin >> choice;

        cout << endl
             << endl;

        switch (choice)
        {
        case 1:
        {
            if (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            else
            {
                cout << "Already at last entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 2:
        {
            if (ptr->prev != NULL)
            {
                ptr = ptr->prev;
            }
            else
            {
                cout << "Already at first entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 3:
        {

            int ch;

            cout << "Select field to change : " << endl
                 << endl
                 << "1. Flight Number" << endl
                 << endl
                 << "2. Flight Name" << endl
                 << endl
                 << "3. Source" << endl
                 << endl
                 << "4. Destination" << endl
                 << endl
                 << "5. Arrival Time" << endl
                 << endl
                 << "6. Departure Time" << endl
                 << endl
                 << "7. Fare" << endl
                 << endl
                 << endl

                 << "Enter choice : ";

            cin >> ch;

            cout << endl
                 << endl;

            switch (ch)
            {
            case 1:
            {
                string newInfo1;

                cout << "Enter new Flight Number : ";
                getline(cin, newInfo1);
                getline(cin, newInfo1);

                ptr->flightNumber = newInfo1;

                break;
            }
            case 2:
            {
                string newInfo2;

                cout << "Enter new Flight Name : ";
                getline(cin, newInfo2);
                getline(cin, newInfo2);

                ptr->flightName = newInfo2;

                break;
            }
            case 3:
            {
                string newInfo3;

                cout << "Enter new source name : ";
                getline(cin, newInfo3);
                getline(cin, newInfo3);

                ptr->source = newInfo3;

                break;
            }
            case 4:
            {
                string newInfo4;

                cout << "Enter new destination name : ";
                getline(cin, newInfo4);
                getline(cin, newInfo4);

                ptr->destination = newInfo4;

                break;
            }
            case 5:
            {
                string newInfo5;

                cout << "Enter new Arrival Time : ";
                getline(cin, newInfo5);
                getline(cin, newInfo5);

                ptr->arrivalTime = newInfo5;

                break;
            }
            case 6:
            {
                string newInfo6;

                cout << "Enter new Departure Time : ";
                getline(cin, newInfo6);
                getline(cin, newInfo6);

                ptr->departureTime = newInfo6;

                break;
            }

            case 7:
            {
                int newInfo7;

                cout << "Enter new fare : ";
                cin >> newInfo7;

                ptr->fare = newInfo7;

                break;
            }

            default:
            {
                cout << "Enter valid choice" << endl
                     << endl;
                sleep(1);
                break;
            }
            }
        }
        break;

        case 4:
            {
                cout << "Going back to previous menu" << endl;
                sleep(1);
                break;
            }

        default:
        {
            cout << "Enter valid choice" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 4);
}

void adminTrain()
{
    int choice;

    do
    {
        system("CLS");
        cout << endl
             << endl
             << "############################################################################################" << endl
             << "------------------------------------**WELCOME TO ADMIN MODE**-------------------------------" << endl
             << "############################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl
             << endl

             << "\t1. Add Train Info" << endl
             << endl

             << "\t2. Modify Train Info" << endl
             << endl

             << "\t3. Back to Main Menu" << endl
             << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            addTrainInfo();
            break;
        }

        case 2:
        {
            modifyTrainInfo();
            break;
        }

        case 3:
        {
            {
                cout << "Exiting to previous menu" << endl
                     << endl;
                sleep(1);
                break;
            }
        }

        default:
        {
            cout << "Enter any valid choice" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 3);
}

void adminBus()
{
    int choice;

    do
    {
        system("CLS");
        cout << endl
             << endl
             << "############################################################################################" << endl
             << "------------------------------------**WELCOME TO ADMIN MODE**-------------------------------" << endl
             << "############################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl
             << endl

             << "\t1. Add Bus Info" << endl
             << endl

             << "\t2. Modify Bus Info" << endl
             << endl

             << "\t3. Back to Main Menu" << endl
             << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            addBusInfo();
            break;
        }

        case 2:
        {
            modifyBusInfo();
            break;
        }

        case 3:
        {
            {
                cout << "Exiting to previous menu" << endl
                     << endl;
                sleep(1);
                break;
            }
        }

        default:
        {
            cout << "Enter any valid choice" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 3);
}

void adminPlane()
{
    int choice;

    do
    {
        system("CLS");
        cout << endl
             << endl
             << "############################################################################################" << endl
             << "------------------------------------**WELCOME TO ADMIN MODE**-------------------------------" << endl
             << "############################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl
             << endl

             << "\t1. Add Flight Info" << endl
             << endl

             << "\t2. Modify Flight Info" << endl
             << endl

             << "\t3. Back to Main Menu" << endl
             << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            addPlaneInfo();
            break;
        }

        case 2:
        {
            modifyPlaneInfo();
            break;
        }

        case 3:
        {
            {
                cout << "Exiting to previous menu" << endl
                     << endl;
                sleep(1);
                break;
            }
        }

        default:
        {
            cout << "Enter any valid choice" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 3);
}

Passenger *addPassenger(int pno)
{

    Passenger *ptr = new Passenger;

    cout << endl;

    cout << "Enter passenger 1 name :  ";
    getline(cin, ptr->pname);
    getline(cin, ptr->pname);

    cout << endl;

    cout << "Enter passenger 1 age :  ";
    cin >> ptr->page;

    cout << endl;

    cout << "Enter passenger 1 gender :  ";
    cin >> ptr->gender;

    cout << endl;

    Passenger *temp = ptr;
    for (int i = 1; i < pno; i++)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        Passenger *newNode = new Passenger;

        cout << "Enter passenger " << i + 1 << " name :  ";

        getline(cin, newNode->pname);
        getline(cin, newNode->pname);

        cout << endl;

        cout << "Enter passenger " << i + 1 << " age :  ";
        cin >> newNode->page;

        cout << endl;

        cout << "Enter passenger " << i + 1 << " gender :  ";
        cin >> newNode->gender;

        cout << endl;

        temp->next = newNode;
    }

    return ptr;
}

void showPassenger(Passenger *ptr, int count)
{

    for (int i = 0; i < count && ptr != NULL; i++)
    {
        cout << endl
             << endl;

        cout << "Passenger " << i + 1 << " :" << endl
             << endl;

        cout << "\t"
             << "Name = " << ptr->pname << endl
             << endl;

        cout << "\t"
             << "Age = " << ptr->page << endl
             << endl;

        cout << "\t"
             << "Gender = " << ptr->gender << endl
             << endl;

        ptr = ptr->next;
    }
}

void showTrainTicket(trainTicket *ptr)
{

    cout << "Train Number = " << ptr->trainNumber << endl
         << endl

         << "Train Name = " << ptr->trainName << endl
         << endl

         << "Source = " << ptr->source << endl
         << endl

         << "Destination = " << ptr->destination << endl
         << endl

         << "Arrival Time = " << ptr->arrivalTime << endl
         << endl

         << "Departure Time = " << ptr->departureTime << endl
         << endl

         << "No of seats booked = " << ptr->no_of_booked_seats << endl
         << endl

         << "Fare = " << ptr->fare << endl
         << endl;

    showPassenger(ptr->pass, ptr->no_of_booked_seats);
}

void showBusTicket(busTicket *ptr)
{

    cout << "Bus ID = " << ptr->busID << endl
         << endl

         << "Bus Name = " << ptr->busName << endl
         << endl

         << "Source = " << ptr->source << endl
         << endl

         << "Destination = " << ptr->destination << endl
         << endl

         << "Arrival Time = " << ptr->arrivalTime << endl
         << endl

         << "Departure Time = " << ptr->departureTime << endl
         << endl

         << "No of seats booked = " << ptr->no_of_booked_seats << endl
         << endl

         << "Fare = " << ptr->fare << endl
         << endl;

    showPassenger(ptr->pass, ptr->no_of_booked_seats);
}

void showPlaneTicket(planeTicket *ptr)
{

    cout << "Flight Number = " << ptr->flightNumber << endl
         << endl

         << "Flight Name = " << ptr->flightName << endl
         << endl

         << "Source = " << ptr->source << endl
         << endl

         << "Destination = " << ptr->destination << endl
         << endl

         << "Arrival Time = " << ptr->arrivalTime << endl
         << endl

         << "Departure Time = " << ptr->departureTime << endl
         << endl

         << "No of seats booked = " << ptr->no_of_booked_seats << endl
         << endl

         << "Fare = " << ptr->fare << endl
         << endl;

    showPassenger(ptr->pass, ptr->no_of_booked_seats);
}

void bookTrainTicket()
{

    Train *ptrTemp = headTrain;
    int choice;

    do
    {

        system("CLS");

        showtrain(ptrTemp);

        cout << "You have following choices : " << endl
             << endl

             << "1. Next" << endl
             << endl

             << "2. Previous" << endl
             << endl

             << "3. Book Ticket for this train " << endl
             << endl

             << "4. Back to previous menu " << endl
             << endl
             << endl

             << "Enter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {

        case 1:
        {
            if (ptrTemp->next != NULL)
            {
                ptrTemp = ptrTemp->next;
            }
            else
            {
                cout << "Already at last entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 2:
        {
            if (ptrTemp->prev != NULL)
            {
                ptrTemp = ptrTemp->prev;
            }
            else
            {
                cout << "Already at first entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 3:
        {

            trainTicket *ptr = headTrainTicket;

            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            trainTicket *Node = new trainTicket;

            int pNo;

            cout << "Enter no of passengers : ";
            cin >> pNo;

            ptrTemp->seats_rem = ptrTemp->seats_rem - pNo;

            ptrTemp->booked_seats = ptrTemp->booked_seats + pNo;

            Node->trainNumber = ptrTemp->trainNumber;

            Node->destination = ptrTemp->destination;

            Node->trainName = ptrTemp->trainName;

            Node->source = ptrTemp->source;

            Node->arrivalTime = ptrTemp->arrivalTime;

            Node->departureTime = ptrTemp->departureTime;

            Node->pass = addPassenger(pNo);

            Node->fare = ptrTemp->fare * pNo;

            Node->no_of_booked_seats = pNo;

            Node->next = NULL;

            Node->prev = ptr;

            ptr->next = Node;

            break;
        }

        case 4:
        {
            cout << "Exiting to previous menu" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 4);
}

void bookBusTicket()
{

    Bus *ptrTemp = headBus;
    int choice;

    do
    {

        system("CLS");

        showbus(ptrTemp);

        cout << "You have following choices : " << endl
             << endl

             << "1. Next" << endl
             << endl

             << "2. Previous" << endl
             << endl

             << "3. Book Ticket for this bus " << endl
             << endl

             << "4. Back to previous menu " << endl
             << endl
             << endl

             << "Enter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {

        case 1:
        {
            if (ptrTemp->next != NULL)
            {
                ptrTemp = ptrTemp->next;
            }
            else
            {
                cout << "Already at last entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 2:
        {
            if (ptrTemp->prev != NULL)
            {
                ptrTemp = ptrTemp->prev;
            }
            else
            {
                cout << "Already at first entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 3:
        {

            busTicket *ptr = headBusTicket;

            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            busTicket *Node = new busTicket;

            int pNo;

            cout << "Enter no of passengers : ";
            cin >> pNo;

            ptrTemp->seats_rem = ptrTemp->seats_rem - pNo;

            ptrTemp->booked_seats = ptrTemp->booked_seats + pNo;

            Node->busID = ptrTemp->busID;

            Node->destination = ptrTemp->destination;

            Node->busName = ptrTemp->busName;

            Node->source = ptrTemp->source;

            Node->arrivalTime = ptrTemp->arrivalTime;

            Node->departureTime = ptrTemp->departureTime;

            Node->pass = addPassenger(pNo);

            Node->fare = ptrTemp->fare * pNo;

            Node->no_of_booked_seats = pNo;

            Node->next = NULL;

            Node->prev = ptr;

            ptr->next = Node;

            break;
        }

        case 4:
        {
            cout << "Exiting to previous menu" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 4);
}

void bookPlaneTicket()
{

    Plane *ptrTemp = headPlane;
    int choice;

    do
    {

        system("CLS");

        showplane(ptrTemp);

        cout << "You have following choices : " << endl
             << endl

             << "1. Next" << endl
             << endl

             << "2. Previous" << endl
             << endl

             << "3. Book Ticket for this flight " << endl
             << endl

             << "4. Back to previous menu " << endl
             << endl
             << endl

             << "Enter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {

        case 1:
        {
            if (ptrTemp->next != NULL)
            {
                ptrTemp = ptrTemp->next;
            }
            else
            {
                cout << "Already at last entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 2:
        {
            if (ptrTemp->prev != NULL)
            {
                ptrTemp = ptrTemp->prev;
            }
            else
            {
                cout << "Already at first entry !" << endl
                     << endl;
                sleep(1);
            }
            break;
        }

        case 3:
        {

            planeTicket *ptr = headPlaneTicket;

            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            planeTicket *Node = new planeTicket;

            int pNo;

            cout << "Enter no of passengers : ";
            cin >> pNo;

            ptrTemp->seats_rem = ptrTemp->seats_rem - pNo;

            ptrTemp->booked_seats = ptrTemp->booked_seats + pNo;

            Node->flightNumber = ptrTemp->flightNumber;

            Node->destination = ptrTemp->destination;

            Node->flightName = ptrTemp->flightName;

            Node->source = ptrTemp->source;

            Node->arrivalTime = ptrTemp->arrivalTime;

            Node->departureTime = ptrTemp->departureTime;

            Node->pass = addPassenger(pNo);

            Node->fare = ptrTemp->fare * pNo;

            Node->no_of_booked_seats = pNo;

            Node->next = NULL;

            Node->prev = ptr;

            ptr->next = Node;

            break;
        }

        case 4:
        {
            cout << "Exiting to previous menu" << endl
                 << endl;
            sleep(1);
            break;
        }
        }
    } while (choice != 4);
}

void displayTrainTicket()
{
    trainTicket *ptr = headTrainTicket;

    int i = 0;

    while (ptr != NULL)
    {
        system("CLS");
        cout << "Ticket No " << i + 1 << endl
             << endl;

        showTrainTicket(ptr);
        i++;
        ptr = ptr->next;
        sleep(5);
    }

    cout << endl;
    sleep(10);
}

void displayBusTicket()
{
    busTicket *ptr = headBusTicket;

    int i = 0;

    while (ptr != NULL)
    {
        system("CLS");
        cout << "Ticket No " << i + 1 << endl
             << endl;

        showBusTicket(ptr);
        i++;
        ptr = ptr->next;
        sleep(5);
    }

    cout << endl;
    sleep(10);
}

void displayPlaneTicket()
{
    planeTicket *ptr = headPlaneTicket;

    int i = 0;

    while (ptr != NULL)
    {
        system("CLS");
        cout << "Ticket No " << i + 1 << endl
             << endl;

        showPlaneTicket(ptr);
        i++;
        ptr = ptr->next;
        sleep(5);
    }

    cout << endl;
    sleep(10);
}

void userTrain()
{
    int choice;

    do
    {

        system("CLS");

        cout << endl
             << endl
             << "#########################################################################################" << endl
             << "-------------------------------**WELCOME TO USER MODE**----------------------------------" << endl
             << "#########################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl

             << "\t1. Book Ticket" << endl
             << endl

             << "\t2. Display booked Ticket" << endl
             << endl

             << "\t3. Back to Main Menu" << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            bookTrainTicket();
            break;
        }

        case 2:
        {
            displayTrainTicket();
            break;
        }

        case 3:
        {
            {
                cout << "Exiting to previous menu" << endl
                     << endl;

                sleep(1);
                break;
            }
        }
        }
    } while (choice != 3);
}

void userBus()
{
    int choice;

    do
    {

        system("CLS");

        cout << endl
             << endl
             << "#########################################################################################" << endl
             << "-------------------------------**WELCOME TO USER MODE**----------------------------------" << endl
             << "#########################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl

             << "\t1. Book Ticket" << endl
             << endl

             << "\t2. Display booked Ticket" << endl
             << endl

             << "\t3. Back to Main Menu" << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            bookBusTicket();
            break;
        }

        case 2:
        {
            displayBusTicket();
            break;
        }

        case 3:
        {
            {
                cout << "Exiting to previous menu" << endl
                     << endl;

                sleep(1);
                break;
            }
        }
        }
    } while (choice != 3);
}

void userPlane()
{
    int choice;

    do
    {

        system("CLS");

        cout << endl
             << endl
             << "#########################################################################################" << endl
             << "-------------------------------**WELCOME TO USER MODE**----------------------------------" << endl
             << "#########################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl

             << "\t1. Book Ticket" << endl
             << endl

             << "\t2. Display booked Ticket" << endl
             << endl

             << "\t3. Back to Main Menu" << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            bookPlaneTicket();
            break;
        }

        case 2:
        {
            displayPlaneTicket();
            break;
        }

        case 3:
        {
            {
                cout << "Exiting to previous menu" << endl
                     << endl;

                sleep(1);
                break;
            }
        }
        }
    } while (choice != 3);
}

void train()
{
    int choice;

    do
    {
        system("CLS");

        cout << endl
             << endl
             << "########################################################################################################" << endl
             << "------------------------------**WELCOME TO TRAIN RESERVATION SYSTEM**-----------------------------------" << endl
             << "########################################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl
             << endl

             << "\t1. ADMIN MODE" << endl
             << endl

             << "\t2. USER MODE" << endl
             << endl

             << "\t3. Exit" << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            adminTrain();
            break;
        }

        case 2:
        {
            userTrain();
            break;
        }

        case 3:
        {
            cout << "Exiting" << endl;

            sleep(1);
            break;
        }

        default:
        {
            cout << "Enter any valid choice" << endl
                 << endl;

            sleep(1);
            break;
        }
        }
    } while (choice != 3);
}

void bus()
{
    int choice;

    do
    {
        system("CLS");

        cout << endl
             << endl
             << "########################################################################################################" << endl
             << "------------------------------**WELCOME TO BUS RESERVATION SYSTEM**-----------------------------------" << endl
             << "########################################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl
             << endl

             << "\t1. ADMIN MODE" << endl
             << endl

             << "\t2. USER MODE" << endl
             << endl

             << "\t3. Exit" << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            adminBus();
            break;
        }

        case 2:
        {
            userBus();
            break;
        }

        case 3:
        {
            cout << "Exiting" << endl;

            sleep(1);
            break;
        }

        default:
        {
            cout << "Enter any valid choice" << endl
                 << endl;

            sleep(1);
            break;
        }
        }
    } while (choice != 3);
}

void plane()
{
    int choice;

    do
    {
        system("CLS");

        cout << endl
             << endl
             << "########################################################################################################" << endl
             << "------------------------------**WELCOME TO FLIGHT RESERVATION SYSTEM**-----------------------------------" << endl
             << "########################################################################################################" << endl
             << endl

             << "\tYou have follwing choices" << endl
             << endl
             << endl

             << "\t1. ADMIN MODE" << endl
             << endl

             << "\t2. USER MODE" << endl
             << endl

             << "\t3. Exit" << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            adminPlane();
            break;
        }

        case 2:
        {
            userPlane();
            break;
        }

        case 3:
        {
            cout << "Exiting" << endl;

            sleep(1);
            break;
        }

        default:
        {
            cout << "Enter any valid choice" << endl
                 << endl;

            sleep(1);
            break;
        }
        }
    } while (choice != 3);
}

int main()
{
    system("Color 30");

    initTrain();
    initTrainTicket();
    initBus();
    initBusTicket();
    initPlane();
    initPlaneTicket();

    int choice;

    do
    {
        system("CLS");

        cout << endl
             << endl
             << "########################################################################################################" << endl
             << "------------------------------**WELCOME TO TOUR RESERVATION SYSTEM**-----------------------------------" << endl
             << "########################################################################################################" << endl
             << endl

             << "\tChoose your mode of travelling" << endl
             << endl
             << endl

             << "\t1. Train " << endl
             << endl

             << "\t2. Bus" << endl
             << endl

             << "\t3. Flight" << endl
             << endl

             << "\t4. Exit" << endl
             << endl

             << "\tEnter choice : ";

        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
        {
            train();
            break;
        }

        case 2:
        {
            bus();
            break;
        }

        case 3:
        {
            plane();
            break;
        }

        case 4:
        {
            cout << "Exiting" << endl;

            sleep(1);
            break;
        }

        default:
        {
            cout << "Enter any valid choice" << endl
                 << endl;

            sleep(1);
            break;
        }
        }
    } while (choice != 4);

    return 0;
}
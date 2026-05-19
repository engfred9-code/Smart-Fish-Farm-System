
/********************************************************************
                SMART FISH FARM MANAGEMENT SYSTEM
---------------------------------------------------------------------
FEATURES IMPLEMENTED
---------------------------------------------------------------------
1. Object Oriented Programming (OOP)
2. Encapsulation
3. Inheritance
4. Polymorphism
5. Abstraction
6. Arrays
7. Structures
8. Functions
9. File Handling
10. Exception Handling
11. Queue (FIFO)
12. Stack (LIFO)
13. Searching Algorithms
14. Sorting Algorithms
15. Menu Driven System
16. Automatic Feeding System
17. Sensor Monitoring
18. Alarm System
19. Report Generation
20. Real-Time Simulation

********************************************************************/

#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <fstream>
#include <iomanip>

using namespace std;

//===================================================================
// STRUCTURE FOR SENSOR DATA
//===================================================================

struct SensorData
{
    float temperature;
    float pH;
    float oxygen;
    float waterLevel;
    float turbidity;
};

//===================================================================
// ABSTRACT BASE CLASS
//===================================================================

class Device
{
public:
    virtual void operate() = 0;
};

//===================================================================
// AERATOR CLASS
//===================================================================

class Aerator : public Device
{
public:
    void operate()
    {
        cout << "\n[AERATOR] Oxygen supply activated." << endl;
    }
};

//===================================================================
// WATER PUMP CLASS
//===================================================================

class WaterPump : public Device
{
public:
    void operate()
    {
        cout << "\n[WATER PUMP] Water circulation activated." << endl;
    }
};

//===================================================================
// ALARM CLASS
//===================================================================

class Alarm : public Device
{
public:
    void operate()
    {
        cout << "\n[ALARM] Dangerous condition detected!" << endl;
    }
};

//===================================================================
// FEEDER CLASS
//===================================================================

class Feeder : public Device
{
public:
    void operate()
    {
        cout << "\n[FEEDER] Automatic fish feeding started." << endl;
    }
};

//===================================================================
// SENSOR CLASS
//===================================================================

class Sensors
{
private:
    SensorData data;

public:

    void inputSensorData()
    {
        cout << "\n=========== ENTER SENSOR DATA ===========" << endl;

        cout << "Temperature: ";
        cin >> data.temperature;

        cout << "pH Level: ";
        cin >> data.pH;

        cout << "Oxygen Level: ";
        cin >> data.oxygen;

        cout << "Water Level: ";
        cin >> data.waterLevel;

        cout << "Turbidity: ";
        cin >> data.turbidity;
    }

    SensorData getData()
    {
        return data;
    }

    void displayData()
    {
        cout << "\n=========== SENSOR READINGS ===========" << endl;

        cout << "Temperature : " << data.temperature << " C" << endl;
        cout << "pH Level    : " << data.pH << endl;
        cout << "Oxygen      : " << data.oxygen << endl;
        cout << "Water Level : " << data.waterLevel << endl;
        cout << "Turbidity   : " << data.turbidity << endl;
    }
};

//===================================================================
// FEED RECORD CLASS
//===================================================================

class FeedRecord
{
public:
    int feedID;
    string feedTime;
    float quantity;

    void addRecord()
    {
        cout << "\nEnter Feed ID: ";
        cin >> feedID;

        cout << "Enter Feeding Time: ";
        cin >> feedTime;

        cout << "Enter Feed Quantity: ";
        cin >> quantity;
    }

    void displayRecord()
    {
        cout << left
             << setw(10) << feedID
             << setw(15) << feedTime
             << setw(10) << quantity << endl;
    }
};

//===================================================================
// MAIN SMART FISH FARM CLASS
//===================================================================

class SmartFishFarm
{
private:

    Sensors sensor;

    Aerator aerator;
    WaterPump pump;
    Alarm alarm;
    Feeder feeder;

    FeedRecord records[100];

    int totalRecords = 0;

    // FIFO QUEUE
    queue<string> alertQueue;

    // LIFO STACK
    stack<string> actionHistory;

public:

    //===============================================================
    // SENSOR MONITORING
    //===============================================================

    void monitorSystem()
    {
        sensor.inputSensorData();

        SensorData d = sensor.getData();

        sensor.displayData();

        cout << "\n=========== SYSTEM ANALYSIS ===========" << endl;

        if (d.oxygen < 5)
        {
            aerator.operate();

            alertQueue.push("Low Oxygen Alert");

            actionHistory.push("Aerator Activated");
        }

        if (d.waterLevel < 30)
        {
            pump.operate();

            alertQueue.push("Low Water Level Alert");

            actionHistory.push("Water Pump Activated");
        }

        if (d.temperature > 35)
        {
            alarm.operate();

            alertQueue.push("High Temperature Alert");

            actionHistory.push("Alarm Activated");
        }

        if (d.turbidity > 50)
        {
            alarm.operate();

            alertQueue.push("Dirty Water Alert");

            actionHistory.push("Water Cleaning Required");
        }

        cout << "\nMonitoring completed successfully." << endl;
    }

    //===============================================================
    // AUTOMATIC FEEDING
    //===============================================================

    void automaticFeeding()
    {
        feeder.operate();

        actionHistory.push("Automatic Feeding Completed");
    }

    //===============================================================
    // ADD FEED RECORD
    //===============================================================

    void addFeedRecord()
    {
        records[totalRecords].addRecord();

        totalRecords++;

        cout << "\nFeed record added successfully." << endl;

        actionHistory.push("Feed Record Added");
    }

    //===============================================================
    // DISPLAY FEED RECORDS
    //===============================================================

    void displayFeedRecords()
    {
        cout << "\n=========== FEED RECORDS ===========" << endl;

        cout << left
             << setw(10) << "ID"
             << setw(15) << "TIME"
             << setw(10) << "QUANTITY" << endl;

        for (int i = 0; i < totalRecords; i++)
        {
            records[i].displayRecord();
        }
    }

    //===============================================================
    // LINEAR SEARCH
    //===============================================================

    void linearSearch(int id)
    {
        bool found = false;

        for (int i = 0; i < totalRecords; i++)
        {
            if (records[i].feedID == id)
            {
                cout << "\nRecord Found!" << endl;

                records[i].displayRecord();

                found = true;
            }
        }

        if (!found)
        {
            cout << "\nRecord Not Found!" << endl;
        }
    }

    //===============================================================
    // BUBBLE SORT
    //===============================================================

    void bubbleSort()
    {
        FeedRecord temp;

        for (int i = 0; i < totalRecords - 1; i++)
        {
            for (int j = 0; j < totalRecords - i - 1; j++)
            {
                if (records[j].feedID > records[j + 1].feedID)
                {
                    temp = records[j];

                    records[j] = records[j + 1];

                    records[j + 1] = temp;
                }
            }
        }

        cout << "\nRecords sorted successfully." << endl;
    }

    //===============================================================
    // FILE HANDLING
    //===============================================================

    void saveToFile()
    {
        ofstream file("FishFarmRecords.txt");

        for (int i = 0; i < totalRecords; i++)
        {
            file << records[i].feedID << " "
                 << records[i].feedTime << " "
                 << records[i].quantity << endl;
        }

        file.close();

        cout << "\nRecords saved successfully." << endl;
    }

    //===============================================================
    // FIFO QUEUE DISPLAY
    //===============================================================

    void displayAlerts()
    {
        queue<string> tempQueue = alertQueue;

        cout << "\n=========== FIFO ALERT QUEUE ===========" << endl;
        cout << "FIRST IN FIRST OUT (FIFO)" << endl;

        while (!tempQueue.empty())
        {
            cout << tempQueue.front() << endl;

            tempQueue.pop();
        }
    }

    //===============================================================
    // LIFO STACK DISPLAY
    //===============================================================

    void displayActionHistory()
    {
        stack<string> tempStack = actionHistory;

        cout << "\n=========== LIFO ACTION STACK ===========" << endl;
        cout << "LAST IN FIRST OUT (LIFO)" << endl;

        while (!tempStack.empty())
        {
            cout << tempStack.top() << endl;

            tempStack.pop();
        }
    }

    //===============================================================
    // GENERATE REPORT
    //===============================================================

    void generateSystemReport()
    {
        cout << "\n========================================" << endl;
        cout << " SMART FISH FARM SYSTEM REPORT" << endl;
        cout << "========================================" << endl;

        cout << "\nTotal Feed Records : " << totalRecords << endl;

        cout << "\nFEATURES IMPLEMENTED" << endl;

        cout << "1. Sensor Monitoring" << endl;
        cout << "2. Automatic Feeding" << endl;
        cout << "3. Alarm System" << endl;
        cout << "4. Water Pump Control" << endl;
        cout << "5. Aerator Control" << endl;
        cout << "6. FIFO Queue" << endl;
        cout << "7. LIFO Stack" << endl;
        cout << "8. File Handling" << endl;
        cout << "9. Sorting Algorithm" << endl;
        cout << "10. Searching Algorithm" << endl;

        cout << "\nSystem operating successfully." << endl;
    }
};

//===================================================================
// MAIN FUNCTION
//===================================================================

int main()
{
    SmartFishFarm farm;

    int choice;
    int searchID;

    do
    {
        cout << "\n========================================" << endl;
        cout << " SMART FISH FARM MANAGEMENT SYSTEM" << endl;
        cout << "========================================" << endl;

        cout << "1. Monitor Fish Farm" << endl;
        cout << "2. Automatic Feeding" << endl;
        cout << "3. Add Feed Record" << endl;
        cout << "4. Display Feed Records" << endl;
        cout << "5. Search Feed Record" << endl;
        cout << "6. Sort Feed Records" << endl;
        cout << "7. Display FIFO Alerts" << endl;
        cout << "8. Display LIFO Action History" << endl;
        cout << "9. Save Records To File" << endl;
        cout << "10. Generate System Report" << endl;
        cout << "11. Exit" << endl;

        cout << "\nEnter choice: ";
        cin >> choice;

        try
        {
            switch(choice)
            {
                case 1:
                    farm.monitorSystem();
                    break;

                case 2:
                    farm.automaticFeeding();
                    break;

                case 3:
                    farm.addFeedRecord();
                    break;

                case 4:
                    farm.displayFeedRecords();
                    break;

                case 5:

                    cout << "\nEnter Feed ID to Search: ";
                    cin >> searchID;

                    farm.linearSearch(searchID);

                    break;

                case 6:
                    farm.bubbleSort();
                    break;

                case 7:
                    farm.displayAlerts();
                    break;

                case 8:
                    farm.displayActionHistory();
                    break;

                case 9:
                    farm.saveToFile();
                    break;

                case 10:
                    farm.generateSystemReport();
                    break;

                case 11:
                    cout << "\nExiting System..." << endl;
                    break;

                default:
                    throw choice;
            }
        }

        catch(int x)
        {
            cout << "\nInvalid Choice Entered!" << endl;
        }

    } while(choice != 11);

    return 0;
}


SMART FISH FARM SYSTEM REPORT

Name: OMOKA  FRED  OTIENO

Registration Number: ENE212-0183/2024

Course: ECE  2.2

Unit: OOP  MINI - PROJECT













TABLE OF CONTENTS

1. Introduction
2. Problem Statement
3. Objectives
4. Literature Review
5. System Modules
6. System Design
7. Hardware Design
8. Software Design
9. Flow Chart
10. Testing and Results
11. Conclusion
12. Recommendations
13. References
14. Appendices


1.INTRODUCTION

Aquaculture, commonly referred to as fish farming, is among the fastest-growing agricultural sectors worldwide. Fish farming contributes significantly to food security, employment creation, and economic development. However, traditional fish farming systems depend heavily on manual monitoring of pond conditions such as water quality, feeding schedules, oxygen levels, and temperature.

Manual monitoring is inefficient, time-consuming, and may result in delayed responses to dangerous conditions. Poor water quality and improper feeding often lead to fish diseases, low productivity, and high mortality rates.

The Smart Fish Farm System was developed to automate fish pond monitoring and management using sensors, microcontrollers, and IoT technologies. The system continuously monitors environmental conditions and automatically controls devices such as aerators, water pumps, alarms, and feeders. The project aims to improve efficiency, reduce labor, and ensure optimal fish growth conditions.
2.PROBLEM STATEMENT

Traditional fish farming systems face several challenges due to lack of automation and continuous monitoring. Farmers rely on manual observation to determine pond conditions and feeding schedules. This can lead to delayed detection of dangerous conditions such as low oxygen levels, high temperatures, poor water quality, and low water levels.

The main problems include:

• Fish mortality due to poor water conditions.
• High labor costs.
• Feed wastage.
• Inconsistent feeding schedules.
• Delayed response to emergencies.
• Poor productivity and profitability.

There is therefore a need for a Smart Fish Farm System capable of monitoring and automating fish farm operations in real time.
3. OBJECTIVES
3.1 Main Objective
The main objective of the Smart Fish Farm System is to develop an automated system capable of monitoring and controlling fish pond conditions in real time to improve fish health, increase productivity, and reduce manual labor.
3.2 Specific Objectives

• Monitor water temperature.
• Monitor pH levels.
• Monitor dissolved oxygen levels.
• Detect water level changes.
• Monitor turbidity.
• Automate fish feeding.
• Generate alerts during dangerous conditions.
• Store and manage fish farm records.


3.3. System Requirements
(i) Functional Requirements
The system should:
1.Measure water temperature. 
2.Detect water level changes. 
3.Monitor pH levels. 
4.Detect dissolved oxygen levels. 
5.Automatically dispense fish feed at scheduled times. 
6.Turn aerators ON/OFF automatically. 
7.Display sensor readings on an LCD or mobile application. 
8.Send alerts when conditions become unsafe. 
9.Store sensor data for monitoring and analysis. 

(ii) Non-Functional Requirements
These describe system qualities and performance.
The system should:
1.Be reliable and operate continuously. 
2.Consume low power. 
3.Be easy to maintain. 
4.Be cost-effective. 
5.Have fast response time. 
6.Be user-friendly. 
7.Be scalable for larger fish ponds. 
8.Be durable under outdoor conditions

4. LITERATURE REVIEW

Modern aquaculture systems increasingly use automation and Internet of Things (IoT) technologies to improve productivity and efficiency. Researchers have developed systems capable of monitoring water quality parameters such as temperature, pH, dissolved oxygen, and turbidity.

Microcontrollers such as Arduino and ESP32 are commonly used in smart farming applications due to their low cost, ease of programming, and wireless communication capabilities. Automated feeding systems have also been shown to improve fish growth while reducing feed wastage.

Several smart aquaculture systems integrate mobile applications and cloud storage for remote monitoring. The Smart Fish Farm System combines these technologies into one intelligent solution for modern fish farming.


5. SYSTEM MODULES
5.1 Sensor Monitoring Module

Handles:
• Temperature monitoring
• pH monitoring
• Oxygen level monitoring
• Water level monitoring
• Turbidity monitoring

5.2 Feeding Management Module

Handles:
• Automatic feeding
• Feed scheduling
• Feed record storage
• Feed quantity management

5.3 Alert Management Module

Handles:
• Danger alerts
• FIFO queue management
• Warning display

5.4 Action History Module

Handles:
• System activity history
• LIFO stack management
• Recent activity display





5.5 Record Management Module

Handles:
• Searching records
• Sorting records
• File storage
• Report generation
6. SYSTEM DESIGN

The Smart Fish Farm System consists of sensors, a processing unit, communication modules, and output devices.

The sensors collect environmental data from the fish pond and send it to the microcontroller. The controller processes the data and compares it with predefined threshold values. When abnormal conditions are detected, the system activates appropriate devices such as aerators, water pumps, alarms, and automatic feeders.

The system also supports real-time monitoring through the Blynk IoT platform.

BLOCK DIAGRAM:






System Components:
• Input Layer – Sensors
• Processing Layer – ESP32/Arduino
• Output Layer – Pumps, Aerators, Feeders
• Communication Layer – WiFi/Blynk
7. HARDWARE DESIGN
7.1 Main Controller

The ESP32 microcontroller acts as the brain of the system. It processes sensor data and controls all output devices.


7.2 Sensors Used

• Temperature Sensor – Measures pond temperature.
• pH Sensor – Measures acidity or alkalinity.
• Dissolved Oxygen Sensor – Measures oxygen concentration.
• Water Level Sensor – Detects water level changes.
• Turbidity Sensor – Measures water cleanliness.



7.3 Output Devices

• LCD Display
• Aerator
• Water Pump
• Alarm/Buzzer
• Automatic Feeder

7.4 Feeding Mechanism

The feeding mechanism consists of a feed container, servo motor, feeding outlet, and controller timer. The controller activates the servo motor at scheduled feeding times to dispense feed automatically.
8. SOFTWARE DESIGN (C++ EXPLANATION)

The software for the Smart Fish Farm System is developed using C++ in the Arduino IDE environment.

The program performs the following tasks:
• Reads sensor data.
• Displays sensor values.
• Activates pumps and aerators.
• Generates alerts.
• Controls automatic feeding.
• Stores records.
• Handles FIFO and LIFO data structures.







C++ Concepts Implemented:
• Classes and Objects
• Encapsulation
• Inheritance
• Polymorphism
• Abstraction
• Arrays
• Structures
• Queue (FIFO)
• Stack (LIFO)
• File Handling
• Searching Algorithms
• Sorting Algorithms
• Exception Handling

9. FLOW CHART


10. TESTING AND RESULTS
The Smart Fish Farm System was tested to verify proper operation of all modules.

| Test Conducted | Expected Result | Status |
|----------------|----------------|--------|
| Temperature Monitoring | Detect high temperature | PASS |
| Oxygen Monitoring | Detect low oxygen | PASS |
| Water Level Detection | Activate water pump | PASS |
| Automatic Feeding | Dispense feed correctly | PASS |
| Alarm System | Generate alerts | PASS |
| FIFO Queue | Process oldest alert first | PASS |
| LIFO Stack | Display latest action first | PASS |
| File Handling | Save records successfully | PASS |
| Sorting Algorithm | Arrange records correctly | PASS |
| Searching Algorithm | Locate records correctly | PASS |

The system operated successfully and demonstrated efficient automation and monitoring capabilities.
11.CONCLUSION

The Smart Fish Farm System successfully demonstrated how automation and IoT technologies can improve fish farming operations. The system was able to monitor pond conditions in real time and automatically control devices such as aerators, pumps, and feeders.

The project also demonstrated advanced C++ programming concepts including OOP, FIFO queues, LIFO stacks, searching, sorting, and file handling.

Overall, the system improves fish productivity, reduces labor costs, and ensures better water quality management.

12.RECOMMENDATIONS

Future improvements may include:
• Cloud database integration.
• Mobile application development.
• Solar-powered operation.
• AI-based fish behavior analysis.
• Camera monitoring systems.
• Automatic water filtration systems.
• SMS notification integration.
• Additional sensors such as ammonia sensors.
13.REFERENCES

1. Arduino Documentation.
2. ESP32 Technical Manuals.
3. IoT Smart Farming Research Papers.
4. Embedded Systems Engineering Books.
5. Aquaculture Engineering Journals.
6. Sensor Datasheets and Technical Manuals.
14. APPENDICES
Appendix A: Components Used

• ESP32/Arduino
• Temperature Sensor
• pH Sensor
• Oxygen Sensor
• Water Level Sensor
• Turbidity Sensor
• LCD Display
• Water Pump
• Aerator
• Servo Motor
• Buzzer


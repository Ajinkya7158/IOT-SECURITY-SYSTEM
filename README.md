# IOT-SECURITY-SYSTEM

**COMPANY**: CODTECH IT SOLUTIONS

**NAME**: AJINKYA ASHOK SURYAWANSHI 

**INTERN ID**: CT08IBO

**DOMAIN**: Internet Of Things 

**BATCH DURATION**: December 30th, 2024 to January 30th, 2025

**MENTOR NAME**: NEELA SANTHOSH

Theft Alert Notification Using Blynk IoT with ESP8266 is an innovative Internet of Things (IoT) project designed to provide a real-time notification system for theft prevention. The system leverages the Blynk
2.0 IoT platform, which allows users to control and monitor devices remotely through a mobile app. Using the ESP8266 microcontroller, this project combines motion detection, alert systems, and cloud integration 
to offer a robust, efficient, and user-friendly solution for property security.At the heart of this project is the ESP8266, a low-cost and powerful Wi-Fi module known for its ease of integration with IoT 
applications. The ESP8266 acts as the central control unit, processing data from connected sensors and communicating with the Blynk cloud server. The primary sensor used in this project is a Passive Infrared 
(PIR) motion sensor, which detects the presence of motion within its range. PIR sensors are particularly effective for security applications as they can detect human motion by sensing changes in infrared 
radiation caused by body heat. When motion is detected, the PIR sensor sends a signal to the ESP8266, triggering the theft alert system.The Blynk 2.0 platform plays a pivotal role in this project. Blynk is an 
IoT platform that simplifies the process of creating smart device interfaces and offers powerful tools for monitoring and controlling IoT devices. In this project, the Blynk mobile app is used as the primary 
interface for sending theft notifications. The ESP8266 is connected to the Blynk server via Wi-Fi, enabling real-time communication between the hardware and the app. Once motion is detected, the ESP8266 sends a 
notification to the Blynk app, alerting the user of a potential intrusion. Notifications can be configured as push alerts, emails, or even SMS messages, depending on user preferences.The system also supports 
additional functionality for enhanced security. For instance, users can configure the system to trigger a buzzer or an alarm when motion is detected. This acts as an audible deterrent, scaring off potential 
intruders. Some implementations also integrate a camera module, such as the ESP32-CAM, which captures images or video footage of the intruder and sends it to the user via the Blynk app. This feature not only 
helps in identifying the intruder but also provides valuable evidence in case of theft. Setting up the system involves several steps, starting with configuring the Blynk app. Users create a new project on the 
app, select the ESP8266 as the hardware, and generate an authentication token. This token is used in the firmware code uploaded to the ESP8266, linking the microcontroller to the Blynk server. The firmware is 
typically written in Arduino IDE, where libraries for Blynk and the ESP8266 are used to establish Wi-Fi connectivity and handle sensor data.Once the system is powered and connected to the internet, it 
continuously monitors the environment for motion. The ESP8266 processes signals from the PIR sensor and decides whether to send an alert based on the presence of motion. If motion is detected, the 
microcontroller communicates with the Blynk server, which in turn sends a real-time notification to the user's smartphone. The notification includes details such as the time of detection and the specific sensor 
that triggered the alert if multiple sensors are used.The system is highly customizable, allowing users to adjust parameters such as motion sensitivity, notification frequency, and alert methods. For example, 
the PIR sensor's sensitivity can be adjusted to avoid false positives caused by pets or other small objects. Additionally, users can integrate multiple sensors for broader coverage, such as door and window 
sensors, vibration sensors, or ultrasonic sensors for detecting movement through walls or closed spaces.One of the most significant advantages of this system is its reliance on the cloud-based Blynk platform, 
which ensures that users can receive alerts from anywhere in the world as long as they have an internet connection. This feature makes the system ideal for people who travel frequently or need to monitor remote 
locations. Furthermore, the system’s cost-effectiveness and ease of deployment make it accessible to a wide range of users, from homeowners to small business owners.To enhance the system further, users can 
integrate additional features such as scheduling, geofencing, or artificial intelligence-based motion detection. Scheduling allows the system to activate or deactivate at specific times, such as during nighttime 
or when the user is away. Geofencing can enable the system to arm itself automatically when the user leaves a predefined area. AI-based motion detection can reduce false alarms by distinguishing between humans 
and other moving objects, such as animals or swaying trees.In summary, the Theft Alert Notification System Using Blynk IoT, Blynk 2.0, and ESP8266 is a versatile and efficient solution for modern security 
challenges. By leveraging the power of IoT, this project offers real-time theft alerts, remote monitoring, and the ability to integrate advanced features like cameras and alarms. Its affordability, user-friendly 
setup, and customizable features make it a highly practical choice for enhancing property security in residential, commercial, or industrial environments.

# OUTPUT OF THE TASK

https://github.com/user-attachments/assets/0fdf59e2-2e02-469f-8792-72eb8b7a6715








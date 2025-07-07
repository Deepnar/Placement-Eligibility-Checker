> **Note:** This program was developed as an assignment for the C/C++ Spoken Tutorial course conducted by IIT Bombay.
# Student Placement Eligibility System

This is a C++ console application that simulates a **Student Placement Eligibility System**. It collects details of a student and determines their eligibility for placement based on academic and test scores.

## Features

✅ Collects student details:
- Name
- Roll number
- Average marks (out of 100)
- Branch
- Technical score (out of 50)
- Aptitude score (out of 50)

✅ Checks eligibility:
- Students with an average mark below 90 are **not eligible** for placement.

✅ Placement Categories:
- For branches IT, COMP, CSE, AIDS:
  - **AI Developer**  
  - **Data Scientist**
- For branches CIVIL, MECH, ENTC:
  - **Java Developer**

✅ Placement criteria:
- If (technical score + aptitude score) >= 85 → Student is placed.
- Otherwise → Student is advised to enroll in relevant courses or workshops.

#include <stdio.h>

#include "employee.h"

int main()

{

  int numEmployees = 0;

  struct Employee employees[100]; // Maximum 100 employees Array

  int empNo;

  int choice;

  do

  {

    printf("\nEnter Employee Management System Choice:\n");

    printf("1. Add Employee\n");

    printf("2. Search Employee\n");

    printf("3. Delete Employee\n");

    printf("4. Display Employee List\n");

    printf("5. Exit\n");

    printf("Enter your choice: ");

    scanf("%d", &choice);

    switch (choice)

    {

    case 1:

      if (numEmployees < 100)

      {

        // Addition of Employee

        acceptEmployeeData(&employees[numEmployees]);

        numEmployees++;

      }

      else

      {

        printf("Maximum number of employees reached.\n");

      }

      break;

    case 2:

      // Searching the Employee

      printf("Enter Employee Number to search: ");

      scanf("%d", &empNo);

      int searchResult = searchEmployee(employees, numEmployees, empNo);

      if (searchResult != -1)

      {

        printf("Employee found at index %d.\n", searchResult);

        displayEmployeeData(&employees[searchResult]);

      }

      else

      {

        printf("Employee not found.\n");

      }

      break;

    case 3:

      // Deleting Employee Details

      printf("Enter Employee Number to delete: ");

      scanf("%d", &empNo);

      deleteEmployee(employees, &numEmployees, empNo);

      break;

    case 4:

      // Displaying Employee List

      printf("\nEmployee Details:\n");

      for (int i = 0; i < numEmployees; i++)

      {

        displayEmployeeData(&employees[i]);

      }

      break;

    case 5:

      printf("Exiting program.\n");

      break;

    default:

      printf("Invalid choice. Please try again.\n");

    }

  } while (choice != 5);

  return 0;

}
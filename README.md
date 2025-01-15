# Online Shopping Website Simulator

## Overview
The **Online Shopping Website Simulator** is a comprehensive program designed to provide users with a realistic and interactive experience of online shopping. The program is built using three main classes: **Customer**, **Product**, and **Shopping Cart**, which work together to simulate the functionality of an e-commerce platform.

## Features

### Customer Class
- Stores personal information such as name, address, and credit details.
- Includes functions to:
  - Modify personal information.
  - Display current account information.

### Product Class
- Manages information about available products for purchase.
- Reads product data from a `txt` file and stores it in an array of objects.
- Each product includes attributes such as:
  - Name.
  - Price.
- Provides a function to display the available products to the user.

### Shopping Cart Class
- Facilitates the process of adding and purchasing products.
- Includes functions to:
  - Add products to the cart.
  - Display current items in the cart.
  - Pay for items in the cart.

## User Interface
The program offers an interactive menu with the following options:

1. **Modify Account Information**
   - Allows users to update their personal details such as name, address, or credit information.

2. **Show Personal Information**
   - Displays the user’s stored personal information.

3. **Show Available Products**
   - Lists all available products for purchase, including their names and prices.

4. **Add Products to Shopping Cart**
   - Enables users to add selected products to their shopping cart.

5. **See Current Shopping Cart Items**
   - Displays all items currently in the shopping cart along with their details.

6. **Pay Shopping Cart**
   - Allows users to proceed with the payment for the items in their shopping cart.

7. **Exit**
   - Exits the program.

## Functionality
- The **Shopping Cart** class interacts with the **Product** class to ensure that:
  - Correct products are added to the cart.
  - Accurate prices are displayed.
- The **Customer** class ensures that personal information is accurate and up-to-date.

## File Structure
The repository includes a diagram file named **`Final.drawio.pdf`**, which visually represents the structure of the classes and their functions. This diagram provides a detailed overview of the program’s functionality and interaction between classes.

## Purpose
This project demonstrates how different classes can collaborate to create a cohesive and functioning program. It provides users with an engaging and realistic online shopping experience while showcasing the practical implementation of object-oriented programming concepts.

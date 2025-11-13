//
// Demonstration on Structure POINTER
// ============================================
// - Using a struct type and pointer to struct
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "product.h"

#define INV_MAX 15


int main(void)
{
    // ALWAYS set structures to a "Safe empty state":
    struct ProductInfo inventory[INV_MAX] = { {0} };

    struct CustomerOrder custOrder = { 0 };
    custOrder.maxItems = ORDER_MAX;

    // Get some inventory for the application...
    initInventory(inventory, INV_MAX);

    // Build a customer order...
    createOrder(&custOrder, inventory, INV_MAX);

    // Display the customer order
    displayCustomerOrder(&custOrder);

    // Display the inventory data:
    //displayAllProducts(inventory, INV_MAX);

    return 0;
}




/*
INVENTORY: Copy paste below inputs!!
100
Wireless Mouse
29.99
10
Y
101
Bluetooth Speaker
299.99
5
N
102
USB-C Charger
15.99
15
Y
103
Noise Canc.HPhones
454.99
3
Y
104
Smart LED Bulb
15.99
150
N
105
Portable SSD
139.99
75
Y
106
Fitness Tracker
119.99
65
N
107
Laptop Stand
15.99
35
Y
108
Gaming Keyboard
39.99
121
N
109
Action Camera
509.99
3
Y
110
Electric Toothbrush
59.99
121
N
111
Smartwatch
299.97
1100
Y
112
Mini Projector
264.47
7
N
113
Dash Cam
89.99
128
Y
114
Robot Vacuum
549.99
13
Y

*/
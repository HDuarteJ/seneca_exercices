// product description c string
#define STR_MAX 20
#define ORDER_MAX 10

struct Date
{
    int year;
    int month;
    int day;
};

struct Time
{
    int hour;
    int minute;
};
struct DateTime
{
    struct Date date;
    struct Time time;
};

// Structures
// -------------------------
struct ProductInfo
{
    int upc;
    char description[STR_MAX + 1];
    double price;
    int qty;
    char taxable;
};

struct CustomerOrder
{
    int orderNumber;
    struct DateTime timestamp;
    int maxItems;
    int itemCount;
    struct ProductInfo items[ORDER_MAX];
};

// function prototypes
// -------------------------

// Get initial inventory product data
void initInventory(struct ProductInfo inv[], int arrSize);

// Get user input for a product (efficient method)
void getProductInfo(struct ProductInfo* prod);

// Display an array of products
void displayAllProducts(const struct ProductInfo prods[], int arrSize);

// Display product data
void displayProduct(const struct ProductInfo* product); // GOOD! HAPPY... WOW! 

// Get customer product selection
struct ProductInfo getProductSelection(struct ProductInfo inv[], int arrSize);

// Build a customer order
void createOrder(struct CustomerOrder* order, const struct ProductInfo inv[], int arrSize);

// Display a customer order
void displayCustomerOrder(struct CustomerOrder* order);
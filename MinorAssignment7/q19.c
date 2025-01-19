#include <stdio.h>
#include <string.h>

#define MAX_ADDRESSES 2

// Define the structure type address_t
typedef struct {
    int xx, yy, zz, mm;
    char nickname[11];
} address_t;

// Function prototypes
void scan_address(address_t *addr);
void print_address(const address_t *addr);
int local_address(const address_t *addr1, const address_t *addr2);

int main() {
    address_t addresses[MAX_ADDRESSES];
    int count = 0;

    printf("Enter Internet addresses and nicknames (enter 0.0.0.0 none to stop):\n");

    // Read the list of addresses
    while (1) {
        address_t temp;
        scan_address(&temp);

        // Check for sentinel values
        if (temp.xx == 0 && temp.yy == 0 && temp.zz == 0 && temp.mm == 0 && strcmp(temp.nickname, "none") == 0) {
            break;
        }

        // Store the valid address
        if (count < MAX_ADDRESSES) {
            addresses[count++] = temp;
        } else {
            printf("Maximum address limit reached!\n");
            break;
        }
    }

    // Check and display messages for computers on the same local network
    printf("\nMessages:\n");
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (local_address(&addresses[i], &addresses[j])) {
                printf("Machines %s and %s are on the same local network.\n", addresses[i].nickname, addresses[j].nickname);
            }
        }
    }

    // Display the full list of addresses and nicknames
    printf("\nFull List of Addresses and Nicknames:\n");
    for (int i = 0; i < count; i++) {
        print_address(&addresses[i]);
    }

    return 0;
}

// Function to scan an address
void scan_address(address_t *addr) {
    printf("Enter address (xx.yy.zz.mm) and nickname: ");
    scanf("%d.%d.%d.%d %10s", &addr->xx, &addr->yy, &addr->zz, &addr->mm, addr->nickname);
}

// Function to print an address
void print_address(const address_t *addr) {
    printf("%d.%d.%d.%d %s\n", addr->xx, addr->yy, addr->zz, addr->mm, addr->nickname);
}

// Function to check if two addresses are on the same local network
int local_address(const address_t *addr1, const address_t *addr2) {
    return (addr1->xx == addr2->xx && addr1->yy == addr2->yy);
}

#include <stdio.h>

enum BookingStatus
{
    PENDING,
    APPROVED,
    REJECTED,
    CANCELLED
};

struct Booking
{
    int bookingId;
    int roomNumber;
    enum BookingStatus status;
};

int updateStatus(struct Booking *b,
                 enum BookingStatus newStatus)
{
    if (newStatus < PENDING || newStatus > CANCELLED)
    {
        return 0;
    }

    b->status = newStatus;
    return 1;
}

const char *statusName(enum BookingStatus status)
{
    switch (status)
    {
        case PENDING:
            return "Pending";

        case APPROVED:
            return "Approved";

        case REJECTED:
            return "Rejected";

        case CANCELLED:
            return "Cancelled";

        default:
            return "Invalid";
    }
}

int main(void)
{
    struct Booking b = {1001, 102, PENDING};

    printf("Before: %s\n", statusName(b.status));

    if (updateStatus(&b, APPROVED))
    {
        printf("After: %s\n", statusName(b.status));
    }
    else
    {
        printf("Invalid status!\n");
    }

    return 0;
}
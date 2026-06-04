#pragma once
#include "Types.h"

struct Trade {
    OrderID buy_id;
    OrderID sell_id;
    Price price;
    Quantity quantity;
};
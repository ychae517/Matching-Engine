#pragma once
#include "Types.h"

struct Order{
    OrderID id;
    Side side;
    Price price;
    Quantity quantity;

    Order(OrderID id, Side side, Price price, Quantity quantity) :
        id(id), side(side), price(price), quantity(quantity) {};
};
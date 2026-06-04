#pragma once
#pragma once
#include <deque>
#include <map>
#include <unordered_map>
#include "Trade.h"
#include "Types.h"
#include "Order.h"

class OrderBook{
    private:
        std::map<Price, std::deque<OrderID>> asks;
        std::map<Price, std::deque<OrderID>, std::greater<Price>> bids;
        std::unordered_map<OrderID, Order> orders;
    public:
        void add(const Order& order){
            Order o(order.id, order.side, order.price, order.quantity);
            orders[order.id] = o;
    
            if (o.side == Side::Buy){
                bids[o.price].push_back(o.id);
            } else if (o.side == Side::Sell) {
                asks[o.price].push_back(o.id);
            }
        }

        void print_book() const {

        }
};
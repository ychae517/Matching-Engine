#pragma once
#include <cstdint>

using OrderID = std::uint64_t;
using Price = std::int64_t;
using Quantity = std::int64_t;

enum class Side { Buy, Sell };

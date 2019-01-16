//
// Created by jwkim98 on 19/01/16.
// collection of global utility functions
//

#ifndef TAKIMATRIX_UTILITY_HPP
#define TAKIMATRIX_UTILITY_HPP

#include <cstdio>
#include <vector>

namespace TakiMatrix::processor {
    size_t calculate_size(const std::vector<size_t>& shape)
    {
        size_t size = 1;
        for (size_t elem : shape) {
            size *= elem;
        }
        return size;
    };
} // namespace TakiMatrix::processor

#endif // TAKIMATRIX_UTILITY_HPP

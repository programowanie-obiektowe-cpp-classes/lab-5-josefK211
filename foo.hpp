#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& humans)
{
    std::vector< char > result;
    result.reserve(humans.size());

    for (auto& human : humans) {
        human.birthday();
        if (human.isMonster()) {
            result.push_back('n');
        }
        else {
            result.push_back('y');
        }
    }

    std::reverse(result.begin(), result.end());
    return result;
}

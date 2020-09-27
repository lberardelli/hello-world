//
//  main.cpp
//  hello-world
//
//  Created by Lawrence Berardelli on 2020-03-14.
//  Copyright © 2020 Lawrence Berardelli. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::ostream_iterator<std::string> it(std::cout, "\n");
    std::vector<std::string> vecOut;
    vecOut.push_back("hello guv");
    std::copy(vecOut.begin(), vecOut.end(), it);
}

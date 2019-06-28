//
//  text.hpp
//  TestScope
//
//  Created by George on 10/06/2019.
//  Copyright © 2019 George. All rights reserved.
//

#ifndef text_hpp
#define text_hpp

#include <stdio.h>
#include <iostream>

#include "view.hpp"

namespace coreui {
class Text : public View {
public:
    Text(std::string text);
    ~Text() = default;
};
}

#endif /* text_hpp */

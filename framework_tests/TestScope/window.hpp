//
//  window.hpp
//  TestScope
//
//  Created by George on 09/06/2019.
//  Copyright © 2019 George. All rights reserved.
//

#ifndef window_hpp
#define window_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

#include "view.hpp"
#include "properties.hpp"

namespace coreui {
class Window {
public:
    Window Title(std::string title);
    Window() = default;
    Window(std::string title, float x, float y, float width, float height);
    template <class... Types>
    Window(Types... types) : Window(types...) {

    }
    Window(View *view);
    ~Window() = default;
private:
    std::string title;
    float x;
    float y;
    float width;
    float height;
};
} // namespace coreui

#endif /* window_hpp */

//
//  window.cpp
//  TestScope
//
//  Created by George on 09/06/2019.
//  Copyright © 2019 George. All rights reserved.
//

#include "window.hpp"

namespace coreui {

coreui::Window coreui::Window::Title(std::string title) {
    std::cout << title;
    return *this;
}

coreui::Window::Window(std::string title, float x, float y, float width, float height):
    title(title),
    x(x),
    y(y),
    width(width),
    height(height) {
    
}
    
Window::Window(View *view) {
        
}



} // namespace coreui

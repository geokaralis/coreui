//
//  window.h
//  CoreUI
//
//  Created by George on 29/06/2019.
//

#ifndef window_h
#define window_h

#include <iostream>
#include "view.h"
#include "platform/macOS/native_window_interface.h"

#define MIN_WIDTH 200
#define MIN_HEIGHT 150

namespace coreui {
  class Window {
    public:
    std::string title();
    std::string title(std::string title);
    int width();
    int height();
    View* view();
    View* view(View* view);
    Window& add(View* view);
    Window(std::string title);
    Window(int width, int height);
    Window(std::string title, int width, int height);
    Window(View* view);
    Window(View view);
    Window();
    ~Window() = default;
  private:
    std::string _title;
    int _width = MIN_WIDTH;
    int _height = MIN_HEIGHT;
    View* _view;
  };
}


#endif /* window_h */

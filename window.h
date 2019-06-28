//
//  window.hpp
//  coreui
//
//  Created by George on 28/06/2019.
//

#ifndef window_h
#define window_h

#include <iostream>

#define MIN_WIDTH 200
#define MIN_HEIGHT 150

namespace coreui {
class Window {
public:
  std::string title();
  std::string title(std::string title);
  int width();
  int height();
  Window(std::string title);
  Window(int width, int height);
  Window(std::string title, int width, int height);
  Window() = default;
    ~Window() = default;
private:
  std::string _title;
  int _width = MIN_WIDTH;
  int _height = MIN_HEIGHT;
};
} // namespace coreui

#endif /* window_h */

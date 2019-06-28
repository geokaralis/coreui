//
//  text.hpp
//  coreui
//
//  Created by George on 28/06/2019.
//

#ifndef text_h
#define text_h

#include <iostream>
#include "view.h"

namespace coreui {
class Text : public View {
public:
  using View::View;
  std::string text();
  Text(std::string text);
  Text() = default;
  ~Text() = default;
private:
  std::string _text;
};
} // namespace coreui

#endif /* text_h */
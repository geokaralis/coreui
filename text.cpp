//
//  text.cpp
//  coreui
//
//  Created by George on 28/06/2019.
//

#include "text.h"

namespace coreui {
  
std::string Text::text() {
  return _text;
}

Text::Text(std::string text) : _text(text) {}
  
} // namespace coreui

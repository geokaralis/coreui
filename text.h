//
//  text.h
//  CoreUI
//
//  Created by George on 29/06/2019.
//

#ifndef text_h
#define text_h

#include <iostream>
#include "view.h"

namespace coreui {
  class Text : public View {
  public:
    using View::View;
    Text(std::string text);
    Text() = default;
    ~Text() = default;
  protected:
    std::string _text;
  };
}

#endif /* text_h */

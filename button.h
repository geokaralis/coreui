//
//  button.h
//  coreui
//
//  Created by George on 28/06/2019.
//

#ifndef button_h
#define button_h

#include "view.h"

namespace coreui {
  class Button : public View {
  public:
    using View::View;
    
    Button();
    ~Button() = default;
  };
} // namespace coreui

#endif /* button_h */


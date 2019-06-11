# CoreUI
An advanced, descriptive UI framework for cross platform UI development, macOS, Windows, Linux. 

## Concept
CoreUI's core concept is the ability to build native user interfaces, for cross platform desktop development using c++, in a descriptive way.
```cpp
new coreui::Window(
  new coreui::Text("My Window"),
  new coreui::View(
    new coreui::Text("My Label")
  )
);
```

## Architecture
CoreUI essentially generates a tree of views to be rendered to their native counterparts, although special attention is required, because it's core concept lacks behind in a recursion problem, due to c++ limitations.

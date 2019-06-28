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
CoreUI essentially generates a tree of views to be rendered to their native counterparts.

## Setup

In order to setup the dev environment make sure to install CMake and then export the path.
```
export PATH="/Applications/CMake.app/Contents/bin":"$PATH"
```
Then generate the project to a build folder in the desired environment.
```
// Build for XCode on macOS
mkdir build && cd build
cmake -G Xcode .. 
```


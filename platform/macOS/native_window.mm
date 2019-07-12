//
//  native_window.m
//  coreui
//
//  Created by George on 11/07/2019.
//
#import <iostream>
#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "native_window.h"

@implementation NativeWindow

void showNativeWindow()
{
  
  NativeWindow *obj=[[NativeWindow alloc]init];
  
  [obj hello];
  // Call the Objective-C method using Objective-C syntax
//  NSLog(@"Driving!");
//  NSAutoreleasePool* pool = [[NSAutoreleasePool alloc] init];
//  NSApplication* app = [[NSApplication alloc] init];
//  NSWindow* window = [[NSWindow alloc]
//                      initWithContentRect: NSMakeRect(0, 0, 640, 480)
//                      styleMask: NSWindowStyleMaskTitled | NSWindowStyleMaskMiniaturizable
//                      backing: NSBackingStoreBuffered
//                      defer: NO];
//  [window setTitle: @"New Window"];
//  [window center];
//  [window makeKeyAndOrderFront:nil];
//  [app run];
//  [pool release];
//  [window setBackgroundColor:[NSColor blueColor]];
//  [window makeKeyAndOrderFront:NSApp];
  
  // Autorelease Pool:
  // Objects declared in this scope will be automatically
  // released at the end of it, when the pool is "drained".
  NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
  
  // Create a shared app instance.
  // This will initialize the global variable
  // 'NSApp' with the application instance.
  [NSApplication sharedApplication];
  
  //
  // Create a window:
  //
  
  // Style flags:
  NSUInteger windowStyle = NSWindowStyleMaskTitled | NSWindowStyleMaskClosable | NSWindowStyleMaskMiniaturizable | NSWindowStyleMaskResizable;
  
  // Window bounds (x, y, width, height).
  NSRect windowRect = NSMakeRect(0, 0, 800, 600);
  NSWindow * window = [[NSWindow alloc] initWithContentRect:windowRect
                                                  styleMask:windowStyle
                                                    backing:NSBackingStoreBuffered
                                                      defer:NO];
  [window setTitle: @"CoreUI"];
  [window center];
  [window autorelease];
  
  // Window controller:
  NSWindowController * windowController = [[NSWindowController alloc] initWithWindow:window];
  [windowController autorelease];
  
  // Since Snow Leopard, programs without application bundles and Info.plist files don't get a menubar
  // and can't be brought to the front unless the presentation option is changed
  [NSApp setActivationPolicy:NSApplicationActivationPolicyRegular];
  
  // Next, we need to create the menu bar. You don't need to give the first item in the menubar a name
  // (it will get the application's name automatically)
  id menubar = [[NSMenu new] autorelease];
  id appMenuItem = [[NSMenuItem new] autorelease];
  [menubar addItem:appMenuItem];
  [NSApp setMainMenu:menubar];
  
  // Then we add the quit item to the menu. Fortunately the action is simple since terminate: is
  // already implemented in NSApplication and the NSApplication is always in the responder chain.
  id appMenu = [[NSMenu new] autorelease];
  id appName = [[NSProcessInfo processInfo] processName];
  id quitTitle = [@"Quit " stringByAppendingString:appName];
  id quitMenuItem = [[[NSMenuItem alloc] initWithTitle:quitTitle
                                                action:@selector(terminate:) keyEquivalent:@"q"] autorelease];
  [appMenu addItem:quitMenuItem];
  [appMenuItem setSubmenu:appMenu];
  
  // This will add a simple text view to the window,
  // so we can write a test string on it.
  NSTextView * textView = [[NSTextView alloc] initWithFrame:windowRect];
  [textView autorelease];
  
  NSTextField *textField;
  
  textField = [[NSTextField alloc] initWithFrame:NSMakeRect(20, 20, 200, 17)];
  [textField setStringValue:@"An advanced ui framework"];
  [textField setBezeled:NO];
  [textField setDrawsBackground:NO];
  [textField setEditable:NO];
  [textField setSelectable:NO];
  
  NSButton *button = [[NSButton alloc] initWithFrame:NSMakeRect(20, 20, 100, 32)];
  [button setTitle:@"Core"];
  
  NSView *view = [[NSView alloc] initWithFrame:windowRect];
  [view setWantsLayer:YES];
  view.layer.backgroundColor = [[NSColor yellowColor] CGColor];
  
//  [window.contentView addSubview:view];
  
  NSRect frame = NSMakeRect(100, 100, 90, 40);
  NSButton* pushButton = [[NSButton alloc] initWithFrame: frame];
  pushButton.bezelStyle = NSBezelStyleRounded;
  
  [window.contentView addSubview:pushButton];
  
//  NSLog(@"subviews are %@", [window.contentView subviews]);
  
//  [window setContentView:aView];
  [textView insertText:@"Hello OSX/Cocoa world!" replacementRange:NSMakeRange(1, 0)];
  
  // TODO: Create app delegate to handle system events.
  // TODO: Create menus (especially Quit!)
  
  // Show window and run event loop.
  [window orderFrontRegardless];
  [NSApp run];
  
  [pool drain];
}

- (void)showNativeWindow
{
  NSLog(@"Driving!");
}

- (void)hello
{
  NSLog(@"Works");
}

@end

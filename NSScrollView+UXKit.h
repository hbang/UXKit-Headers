// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

@interface NSScrollView (UXKit)

@property (nonatomic) __weak id scrollViewDelegate;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) BOOL pagingEnabled;

@end

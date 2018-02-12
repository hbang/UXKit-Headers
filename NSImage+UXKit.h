// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

@interface NSImage (UXKit)

- (NSImage *)resizableImageWithCapInsets:(NSEdgeInsets)capInsets resizingMode:(NSImageResizingMode)resizingMode;
- (NSImage *)resizableImageWithCapInsets:(NSEdgeInsets)capInsets;

@end

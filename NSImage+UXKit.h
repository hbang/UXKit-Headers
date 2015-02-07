/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Cocoa/Cocoa.h>

@interface NSImage (UXKit)

- (NSImage *)resizableImageWithCapInsets:(NSEdgeInsets)capInsets resizingMode:(NSImageResizingMode)resizingMode;
- (NSImage *)resizableImageWithCapInsets:(NSEdgeInsets)capInsets;

@end

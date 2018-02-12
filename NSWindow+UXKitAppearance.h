// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>
#import "UXKitAppearance.h"

@interface NSWindow (UXKitAppearance) <UXKitAppearance>

- (void)tintColorDidChange;

@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) UXViewTintAdjustmentMode tintAdjustmentMode;

@end

/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Cocoa/Cocoa.h>
#import "UXKitAppearance.h"

@interface NSWindow (UXKitAppearance) <UXKitAppearance>

- (void)tintColorDidChange;

@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) UXViewTintAdjustmentMode tintAdjustmentMode;

@end

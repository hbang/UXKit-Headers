/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

typedef NS_ENUM(NSInteger, UXViewTintAdjustmentMode) {
	UXViewTintAdjustmentModeAutomatic,
	UXViewTintAdjustmentModeNormal,
	UXViewTintAdjustmentModeDimmed,
};

@class NSColor;

@protocol UXKitAppearance <NSObject>

@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) UXViewTintAdjustmentMode tintAdjustmentMode;

- (void)tintColorDidChange;

@end

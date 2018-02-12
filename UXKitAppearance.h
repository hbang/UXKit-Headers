// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

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

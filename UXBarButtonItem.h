// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXBarItem.h"
#import "UXKitAppearance.h"
#import <Cocoa/Cocoa.h>

typedef NS_ENUM(NSUInteger, UXBarButtonItemStyle) {
	UXBarButtonItemStylePlain,
	UXBarButtonItemStyleBordered,
	UXBarButtonItemStyleDone, // seemingly unused, but kept for compatibility
};

/*
no system items seem to be implemented

typedef NS_ENUM(NSUInteger, UXBarButtonSystemItem) {
};
*/

@class UXViewController;

@interface UXBarButtonItem : UXBarItem <UXKitAppearance>

@property (retain, nonatomic) NSView *customView;
@property (readonly, nonatomic) UXViewController *contentViewController;

@property (nonatomic) __weak id target;
@property (nonatomic) SEL action;

@property (nonatomic) double width;
@property (nonatomic) long long style;

@property (retain, nonatomic) NSString *toolTip;
@property (nonatomic) BOOL ignoresMultiClick;

@property (retain, nonatomic) NSString *keyEquivalent;
@property (nonatomic) NSUInteger keyEquivalentModifierMask;

- (instancetype)initWithStyle:(UXBarButtonItemStyle)style target:(id)target action:(SEL)action;

- (instancetype)initWithTitle:(NSString *)title style:(UXBarButtonItemStyle)style target:(id)target action:(SEL)action;
- (instancetype)initWithImage:(NSImage *)image style:(UXBarButtonItemStyle)style target:(id)target action:(SEL)action;
// - (instancetype)initWithBarButtonSystemItem:(UXBarButtonSystemItem)systemItem target:(id)target action:(SEL)action;

- (instancetype)initWithContentViewController:(UXViewController *)viewController;
- (instancetype)initWithCustomView:(NSView *)customView;


@end


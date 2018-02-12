// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

typedef NS_ENUM(NSInteger, UXViewAnimationCurve) {
	UXViewAnimationCurveEaseInOut,         // slow at beginning and end
	UXViewAnimationCurveEaseIn,            // slow at beginning
	UXViewAnimationCurveEaseOut,           // slow at end
	UXViewAnimationCurveLinear
};

typedef NS_ENUM(NSInteger, UXViewContentMode) {
	UXViewContentModeScaleToFill,
	UXViewContentModeScaleAspectFit,      // contents scaled to fit with fixed aspect. remainder is transparent
	UXViewContentModeScaleAspectFill,     // contents scaled to fill with fixed aspect. some portion of content may be clipped.
	UXViewContentModeRedraw,              // redraw on bounds change (calls -setNeedsDisplay)
	UXViewContentModeCenter,              // contents remain same size. positioned adjusted.
	UXViewContentModeTop,
	UXViewContentModeBottom,
	UXViewContentModeLeft,
	UXViewContentModeRight,
	UXViewContentModeTopLeft,
	UXViewContentModeTopRight,
	UXViewContentModeBottomLeft,
	UXViewContentModeBottomRight,
};

typedef NS_ENUM(NSInteger, UXViewAnimationTransition) {
	UXViewAnimationTransitionNone,
	UXViewAnimationTransitionFlipFromLeft,
	UXViewAnimationTransitionFlipFromRight,
	UXViewAnimationTransitionCurlUp,
	UXViewAnimationTransitionCurlDown,
};

#define UXViewAutoresizingNone NSViewNotSizable
#define UXViewAutoresizingFlexibleLeftMargin NSViewMinXMargin
#define UXViewAutoresizingFlexibleWidth NSViewWidthSizable
#define UXViewAutoresizingFlexibleRightMargin NSViewMaxXMargin
#define UXViewAutoresizingFlexibleTopMargin NSViewMinYMargin
#define UXViewAutoresizingFlexibleHeight NSViewHeightSizable
#define UXViewAutoresizingFlexibleBottomMargin NSViewMaxYMargin

typedef NS_OPTIONS(NSUInteger, UXViewAnimationOptions) {
	UXViewAnimationOptionLayoutSubviews            = 1 <<  0,
	UXViewAnimationOptionAllowUserInteraction      = 1 <<  1, // turn on user interaction while animating
	UXViewAnimationOptionBeginFromCurrentState     = 1 <<  2, // start all views from current value, not initial value
	UXViewAnimationOptionRepeat                    = 1 <<  3, // repeat animation indefinitely
	UXViewAnimationOptionAutoreverse               = 1 <<  4, // if repeat, run animation back and forth
	UXViewAnimationOptionOverrideInheritedDuration = 1 <<  5, // ignore nested duration
	UXViewAnimationOptionOverrideInheritedCurve    = 1 <<  6, // ignore nested curve
	UXViewAnimationOptionAllowAnimatedContent      = 1 <<  7, // animate contents (applies to transitions only)
	UXViewAnimationOptionShowHideTransitionViews   = 1 <<  8, // flip to/from hidden state instead of adding/removing
	UXViewAnimationOptionOverrideInheritedOptions  = 1 <<  9, // do not inherit any options or animation type

	UXViewAnimationOptionCurveEaseInOut            = 0 << 16, // default
	UXViewAnimationOptionCurveEaseIn               = 1 << 16,
	UXViewAnimationOptionCurveEaseOut              = 2 << 16,
	UXViewAnimationOptionCurveLinear               = 3 << 16,

	UXViewAnimationOptionTransitionNone            = 0 << 20, // default
	UXViewAnimationOptionTransitionFlipFromLeft    = 1 << 20,
	UXViewAnimationOptionTransitionFlipFromRight   = 2 << 20,
	UXViewAnimationOptionTransitionCurlUp          = 3 << 20,
	UXViewAnimationOptionTransitionCurlDown        = 4 << 20,
	UXViewAnimationOptionTransitionCrossDissolve   = 5 << 20,
	UXViewAnimationOptionTransitionFlipFromTop     = 6 << 20,
	UXViewAnimationOptionTransitionFlipFromBottom  = 7 << 20,
};

typedef NS_OPTIONS(NSUInteger, UXViewKeyframeAnimationOptions) {
	UXViewKeyframeAnimationOptionLayoutSubviews            = UXViewAnimationOptionLayoutSubviews,
	UXViewKeyframeAnimationOptionAllowUserInteraction      = UXViewAnimationOptionAllowUserInteraction, // turn on user interaction while animating
	UXViewKeyframeAnimationOptionBeginFromCurrentState     = UXViewAnimationOptionBeginFromCurrentState, // start all views from current value, not initial value
	UXViewKeyframeAnimationOptionRepeat                    = UXViewAnimationOptionRepeat, // repeat animation indefinitely
	UXViewKeyframeAnimationOptionAutoreverse               = UXViewAnimationOptionAutoreverse, // if repeat, run animation back and forth
	UXViewKeyframeAnimationOptionOverrideInheritedDuration = UXViewAnimationOptionOverrideInheritedDuration, // ignore nested duration
	UXViewKeyframeAnimationOptionOverrideInheritedOptions  = UXViewAnimationOptionOverrideInheritedOptions, // do not inherit any options or animation type

	UXViewKeyframeAnimationOptionCalculationModeLinear     = 0 << 10, // default
	UXViewKeyframeAnimationOptionCalculationModeDiscrete   = 1 << 10,
	UXViewKeyframeAnimationOptionCalculationModePaced      = 2 << 10,
	UXViewKeyframeAnimationOptionCalculationModeCubic      = 3 << 10,
	UXViewKeyframeAnimationOptionCalculationModeCubicPaced = 4 << 10
};

@interface UXView : NSView

+ (void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UXViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion;
+ (void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion;
+ (void)animateWithDuration:(NSTimeInterval)duration animations:(void (^)(void))animations;
+ (void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay usingSpringWithDamping:(CGFloat)dampingRatio initialSpringVelocity:(CGFloat)velocity options:(UXViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion;

+ (void)transitionWithView:(UXView *)view duration:(NSTimeInterval)duration options:(UXViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion;
+ (void)transitionFromView:(UXView *)fromView toView:(UXView *)toView duration:(NSTimeInterval)duration options:(UXViewAnimationOptions)options completion:(void (^)(BOOL finished))completion;

+ (Class)layerClass;

- (UXView *)snapshotView;
- (UXView *)snapshotViewFromRect:(CGRect)rect;
- (UXView *)snapshotForRect:(CGRect)rect;

- (void)sendSubviewToBack:(UXView *)subview;
- (void)bringSubviewToFront:(UXView *)subview;

@property (readonly, nonatomic) NSArray *eventTrackers;

- (void)removeEventTracker:(id)eventTrackers;
- (void)addEventTracker:(id)eventTrackers;

@property (readonly, nonatomic) CGPoint center;
@property (nonatomic) UXViewContentMode contentMode;

@property (nonatomic) BOOL blurEnabled;

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch;

@property (readonly, nonatomic) NSString *recursiveDescription;

@end

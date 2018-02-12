// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXViewController.h"

@protocol UXViewControllerInteractiveTransitioning <NSObject>

- (void)startInteractiveTransition:(id <UXViewControllerContextTransitioning>)transitionContext;

@optional

- (UXViewAnimationCurve)completionCurve;
- (CGFloat)completionSpeed;

@end


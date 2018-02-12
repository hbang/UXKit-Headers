// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXViewControllerContextTransitioning.h"

@protocol UXViewControllerAnimatedTransitioning <NSObject>

- (void)animateTransition:(id <UXViewControllerContextTransitioning>)transitionContext;
- (NSTimeInterval)transitionDuration:(id <UXViewControllerContextTransitioning>)transitionContext;

@optional

- (void)animationEnded:(BOOL)transitionCompleted;

@end

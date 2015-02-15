/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXViewControllerContextTransitioning.h"

@protocol UXViewControllerAnimatedTransitioning <NSObject>

- (void)animateTransition:(id <UXViewControllerContextTransitioning>)transitionContext;
- (NSTimeInterval)transitionDuration:(id <UXViewControllerContextTransitioning>)transitionContext;

@optional

- (void)animationEnded:(BOOL)transitionCompleted;

@end

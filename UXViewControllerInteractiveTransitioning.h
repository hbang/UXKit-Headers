/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXViewController.h"

@protocol UXViewControllerInteractiveTransitioning <NSObject>

- (void)startInteractiveTransition:(id <UXViewControllerContextTransitioning>)transitionContext;

@optional

- (UXViewAnimationCurve)completionCurve;
- (CGFloat)completionSpeed;

@end


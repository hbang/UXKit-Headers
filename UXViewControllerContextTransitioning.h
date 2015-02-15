/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXNavigationController.h"

@protocol UXViewControllerContextTransitioning <NSObject>

- (UXView *)containerView;

- (BOOL)isAnimated;
- (BOOL)isInteractive;

- (BOOL)transitionWasCancelled;

- (UXModalPresentationStyle)presentationStyle;

- (void)updateInteractiveTransition:(CGFloat)percentComplete;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;

- (void)completeTransition:(BOOL)didComplete;

- (UXViewController *)viewControllerForKey:(NSString *)key;

- (CGRect)initialFrameForViewController:(UXViewController *)viewController;
- (CGRect)finalFrameForViewController:(UXViewController *)viewController;

@end

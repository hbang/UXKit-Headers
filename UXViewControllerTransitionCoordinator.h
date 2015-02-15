/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

@protocol UXViewControllerTransitionCoordinatorContext <NSObject>

- (UXViewController *)viewControllerForKey:(NSString *)key;
- (UXView *)containerView;

- (UXModalPresentationStyle)presentationStyle;
- (NSTimeInterval)transitionDuration;
- (UXViewAnimationCurve)completionCurve;
- (CGFloat)completionVelocity;
- (CGFloat)percentComplete;

- (BOOL)initiallyInteractive;
- (BOOL)isAnimated;
- (BOOL)isCancelled;
- (BOOL)isInteractive;

@end

@protocol UXViewControllerTransitionCoordinator <UXViewControllerTransitionCoordinatorContext>

- (void)notifyWhenInteractionEndsUsingBlock:(void (^)(id <UXViewControllerTransitionCoordinatorContext> context))handler;
- (BOOL)animateAlongsideTransitionInView:(UXView *)view animation:(void (^)(id <UXViewControllerTransitionCoordinatorContext> context))arg2 completion:(void (^)(id <UXViewControllerTransitionCoordinatorContext>))completion;
- (BOOL)animateAlongsideTransition:(void (^)(id <UXViewControllerTransitionCoordinatorContext> context))animation completion:(void (^)(id <UXViewControllerTransitionCoordinatorContext>))completion;

@end

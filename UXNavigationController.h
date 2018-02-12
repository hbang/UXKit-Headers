// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXKitDefines.h"
#import "UXViewController.h"

typedef NS_ENUM(NSInteger, UXNavigationControllerOperation) {
	UXNavigationControllerOperationNone,
	UXNavigationControllerOperationPush,
	UXNavigationControllerOperationPop,
};

UXKIT_EXTERN const CGFloat UXNavigationControllerHideShowBarDuration;

@class UXEventTracker, UXNavigationBar, UXToolbar, UXTransitionController;
@protocol UXNavigationControllerDelegate;

@interface UXNavigationController : UXViewController

- (instancetype)initWithRootViewController:(UXViewController *)viewController;

- (void)pushViewController:(UXViewController *)viewController animated:(BOOL)animated;
- (NSArray *)popToViewController:(UXViewController *)viewController animated:(BOOL)animated;
- (NSArray *)popToRootViewControllerAnimated:(BOOL)animated;
- (NSArray *)popViewControllerAnimated:(BOOL)animated;

@property (readonly, nonatomic) UXViewController *visibleViewController;
@property (readonly, nonatomic) UXViewController *topViewController;

@property (copy, nonatomic) NSArray *viewControllers;

- (void)setViewControllers:(NSArray *)viewControllers animated:(BOOL)animated;

@property (retain, nonatomic) UXViewController *provisionalPreviousViewController;
@property (nonatomic) __weak UXViewController *observedViewController;
@property (retain, nonatomic) UXTransitionController *defaultTransitionController;

@property (readonly, nonatomic) UXToolbar *toolbar;
@property (readonly, nonatomic) UXNavigationBar *navigationBar;

@property (readonly, nonatomic) UXToolbar *accessoryBar;
@property (readonly, nonatomic, getter=isAccessoryBarHidden) BOOL accessoryBarHidden;

@property (nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (nonatomic, getter=isNavigationBarDetached) BOOL navigationBarDetached;

- (void)setToolbarHidden:(BOOL)toolbarHidden animated:(BOOL)animated;
- (void)setNavigationBarHidden:(BOOL)navigationBarHidden animated:(BOOL)animated;
- (void)detachNavigationBar;

@property (nonatomic) __weak id <UXNavigationControllerDelegate> delegate;

@property (retain, nonatomic) NSArray *topViewControllerOtherConstraints;
@property (retain, nonatomic) NSLayoutConstraint *topViewControllerLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolbarLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolbarVerticalConstraint;

@property (retain, nonatomic) NSArray *navigationBarConstraints;
@property (retain, nonatomic) NSLayoutConstraint *navigationBarTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;

@property (retain, nonatomic) NSMutableArray *addedConstraints;

@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) BOOL isTransitioning;

@property (readonly, nonatomic) UXEventTracker *interactivePopEventTracker;

@end

@protocol UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning;

@protocol UXNavigationControllerDelegate <NSObject>

@optional

- (void)navigationController:(UXNavigationController *)navigationController willShowViewController:(UXViewController *)viewController;
- (void)navigationController:(UXNavigationController *)navigationController didShowViewController:(UXViewController *)viewController;

- (BOOL)navigationController:(UXNavigationController *)navigationController shouldBeginInteractivePopFromViewController:(UXViewController *)fromViewController toViewController:(UXViewController *)toViewController;

- (id <UXViewControllerAnimatedTransitioning>)navigationController:(UXNavigationController *)navigationController animationControllerForOperation:(UXNavigationControllerOperation)operation fromViewController:(UXViewController *)fromViewController toViewController:(UXViewController *)toViewController;

- (id <UXViewControllerInteractiveTransitioning>)navigationController:(UXNavigationController *)navigationController interactionControllerForAnimationController:(id <UXViewControllerAnimatedTransitioning>)animationController;

@end

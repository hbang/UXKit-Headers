// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>
#import "UXKitDefines.h"

typedef NS_ENUM(NSInteger, UXModalPresentationStyle) {
	// TODO: these are probably wrong in the context of a desktop OS
	UXModalPresentationFullScreen = 0,
	UXModalPresentationPageSheet,
	UXModalPresentationFormSheet,
	UXModalPresentationCurrentContext,
	UXModalPresentationCustom,
	UXModalPresentationOverFullScreen,
	UXModalPresentationOverCurrentContext,
	UXModalPresentationPopover,
	UXModalPresentationNone = -1,
};

UXKIT_EXTERN NSString *const UXViewControllerHierarchyInconsistencyException;

@class UXBarButtonItem, UXNavigationItem, UXNavigationController, UXTabBarController, UXTabBarItem;
@protocol UXBarButtonItem, UXLayoutSupport, UXViewControllerTransitionCoordinator;

@interface UXViewController : NSViewController <NSCoding>

@property (strong) UXView *view;

@property (nonatomic, readonly) UXViewController *presentedViewController;

- (void)presentViewController:(UXViewController *)viewController animated:(BOOL)animated completion:(void (^)(void))completion;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(void (^)(void))completion;

@property (nonatomic, assign) UXModalPresentationStyle modalPresentationStyle;

- (id <UXViewControllerTransitionCoordinator>)transitionCoordinator;

@property (nonatomic, assign) CGRectEdge edgesForExtendedLayout;
@property (nonatomic, assign) BOOL automaticallyAdjustsScrollViewInsets;

@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, readonly) UXBarButtonItem *editButtonItem;

- (void)setEditing:(BOOL)editing animated:(BOOL)animated;

@property (nonatomic, readonly) NSArray *childViewControllers;

- (void)addChildViewController:(UXViewController *)childController;
- (void)removeFromParentViewController;

- (void)willMoveToParentViewController:(UXViewController *)parentViewController;
- (void)didMoveToParentViewController:(UXViewController *)parentViewController;

@property (nonatomic, readonly, retain) id<UXLayoutSupport> topLayoutGuide;
@property (nonatomic, readonly, retain) id<UXLayoutSupport> bottomLayoutGuide;

@property (nonatomic, readonly, retain) UXNavigationItem *navigationItem;
@property (nonatomic, readonly, retain) UXNavigationController *navigationController;
@property (nonatomic) BOOL hidesBottomBarWhenPushed;

@property (nonatomic, retain) UXViewController *toolbarViewController;
@property (nonatomic, retain) NSArray *toolbarItems;

- (void)setToolbarItems:(NSArray *)toolbarItems animated:(BOOL)animated;

@property (nonatomic, retain) UXViewController *accessoryViewController;
@property (nonatomic, retain) NSArray *accessoryBarItems;

@property (nonatomic, retain) UXTabBarItem *tabBarItem;
@property (nonatomic, readonly, retain) UXTabBarController *tabBarController;

@end

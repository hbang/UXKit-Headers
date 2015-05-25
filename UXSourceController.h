/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXViewController.h"

typedef NS_ENUM(NSUInteger, UXSourceControllerStyle) {
	UXSourceControllerStyleTabBar,
	UXSourceControllerStyleSplitView
};

@class _UXSourceSplitView;

@protocol UXSourceList;

@interface UXSourceController : UXViewController

@property (retain, nonatomic) NSArray *rootViewControllers;
@property (retain, nonatomic) UXViewController *selectedViewController;

@property (readonly, nonatomic) NSSegmentedControl *segmentedControl;
@property (readonly, nonatomic) _UXSourceSplitView *splitView;

@property (retain, nonatomic) UXViewController<UXSourceList> *sourceListViewController;
@property (copy, nonatomic) NSString *sourceListAutosaveName;

@property (nonatomic) UXSourceControllerStyle style;
@property (nonatomic) UXSourceControllerStyle preferredStyle;

@property (readonly, nonatomic) NSMapTable *transitionControllerClassByToViewControllerClass;
@property (readonly, nonatomic) NSMapTable *navigationControllerByRootViewController;
@property (readonly) NSOperationQueue *viewControllerOperations;

@end

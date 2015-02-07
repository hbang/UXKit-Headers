/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Cocoa/Cocoa.h>

@interface UXViewController : NSViewController

- (void)didMoveToParentViewController:(UXViewController *)viewController;
- (void)willMoveToParentViewController:(UXViewController *)viewController;
- (void)removeFromParentViewController;
- (void)removeChildViewControllerAtIndex:(NSUInteger)index;

@end

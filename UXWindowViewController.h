/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Cocoa/Cocoa.h>

@class UXViewController;

@interface UXWindowController : NSWindowController

- (instancetype)initWithRootViewController:(UXViewController *)viewController;

@property (retain, nonatomic) UXViewController *rootViewController;
@property __weak NSToolbarItem *navigationBarToolbarItem;

@end

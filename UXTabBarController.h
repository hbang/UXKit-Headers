// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXViewController.h"

@interface UXTabBarController : UXViewController

@property (copy, nonatomic) NSArray *viewControllers;

@property (nonatomic) __weak UXViewController *selectedViewController;

@end

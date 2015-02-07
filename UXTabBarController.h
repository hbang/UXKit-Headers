/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXViewController.h"

@interface UXTabBarController : UXViewController

@property (copy, nonatomic) NSArray *viewControllers;

@property (nonatomic) __weak UXViewController *selectedViewController;

@end

/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXBarItem.h"

@interface UXTabBarItem : UXBarItem

- (instancetype)initWithTitle:(NSString *)title;

@property (copy, nonatomic) NSSet *possibleTitles;

@end

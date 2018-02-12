// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXBarItem.h"

@interface UXTabBarItem : UXBarItem

- (instancetype)initWithTitle:(NSString *)title;

@property (copy, nonatomic) NSSet *possibleTitles;

@end

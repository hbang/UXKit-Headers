/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Foundation/Foundation.h>

@interface UXBarItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) NSString *accessibilityLabel;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSInteger tag;

@end

// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Foundation/Foundation.h>

@interface UXBarItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) NSString *accessibilityLabel;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSInteger tag;

@end

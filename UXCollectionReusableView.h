// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

@interface UXCollectionReusableView : NSView

- (void)prepareForReuse;

@property (readonly, copy, nonatomic) NSString *reuseIdentifier;

@end

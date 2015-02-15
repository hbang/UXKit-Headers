/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Cocoa/Cocoa.h>

@interface UXCollectionReusableView : NSView

- (void)prepareForReuse;

@property (readonly, copy, nonatomic) NSString *reuseIdentifier;

@end

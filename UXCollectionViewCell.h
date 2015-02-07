/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXCollectionReusableView.h"

@class NSView;

@interface UXCollectionViewCell : UXCollectionReusableView

@property (nonatomic, getter=isSelected) BOOL selected;

@property (readonly, nonatomic) NSView *contentView;

@end

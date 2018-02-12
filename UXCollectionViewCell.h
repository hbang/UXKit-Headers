// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXCollectionReusableView.h"

@class NSView;

@interface UXCollectionViewCell : UXCollectionReusableView

@property (nonatomic, getter=isSelected) BOOL selected;

@property (readonly, nonatomic) NSView *contentView;

@end

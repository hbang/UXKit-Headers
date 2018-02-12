// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

@interface UXLabel : UXView <NSAccessibilityStaticText>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;

@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic) NSLineBreakMode lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;

@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSTextFieldCell *textFieldCell;
@property (retain, nonatomic) NSColor *textColor;

@property (nonatomic) BOOL selectable;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) NSColor *highlightedTextColor;

@property (retain, nonatomic) NSColor *shadowColor;
@property (nonatomic) CGSize shadowOffset;

@property (nonatomic) BOOL centerVertically;
@property (nonatomic) CGFloat preferredMaxLayoutWidth;

- (CGSize)sizeThatFits:(CGSize)size;
- (void)sizeToFit;

@end

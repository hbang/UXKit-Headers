// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

@interface UXImageView : UXView

@property (retain, nonatomic) NSImage *image;

- (instancetype)initWithImage:(NSImage *)image;

- (void)sizeToFit;
- (void)setFrameSize:(CGSize)frameSize;

@property (readonly) CGSize intrinsicContentSize;
@property (retain, nonatomic) NSString *accessibilityLabel;

- (void)viewWillMoveToWindow:(NSWindow *)window;
- (void)viewDidChangeBackingProperties;

@end

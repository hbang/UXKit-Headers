/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

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

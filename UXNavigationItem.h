/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

@class UXBarButtonItem;

@interface UXNavigationItem : NSObject

- (instancetype)initWithTitle:(NSString *)title;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSView *titleView;
@property (copy, nonatomic) NSString *prompt;

@property (retain, nonatomic) UXBarButtonItem *backBarButtonItem;
@property (nonatomic) BOOL hidesBackButton;

@property (retain, nonatomic) NSArray *leftBarButtonItems;
@property (retain, nonatomic) NSArray *rightBarButtonItems;

- (void)setLeftBarButtonItems:(NSArray *)leftBarButtonItems animated:(BOOL)animated;
- (void)setRightBarButtonItems:(NSArray *)rightBarButtonItems animated:(BOOL)animated;

@property (retain, nonatomic) NSArray *leadingBarButtonItems;
@property (retain, nonatomic) NSArray *trailingBarButtonItems;

- (void)setLeadingBarButtonItems:(NSArray *)leadingBarButtonItems animated:(BOOL)animated;
- (void)setTrailingBarButtonItems:(NSArray *)trailingBarButtonItems animated:(BOOL)animated;

@property (nonatomic) BOOL leftItemsSupplementBackButton;

@property (retain, nonatomic) UXBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UXBarButtonItem *rightBarButtonItem;

- (void)setLeftBarButtonItem:(UXBarButtonItem *)leftBarButtonItem animated:(BOOL)animated;

@property (retain) NSMutableArray *childItems;

- (void)removeChildItem:(UXNavigationItem *)childItem;
- (void)addChildItem:(UXNavigationItem *)childItem;

@property (readonly, nonatomic) UXLabel *internalTitleView;
@property (nonatomic) BOOL hidesAlternateTitleView;

@end


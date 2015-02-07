/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, UXTableViewStyle) {
	UXTableViewStylePlain,
	UXTableViewStyleGrouped
};

typedef NS_ENUM(NSInteger, UXTableViewRowAnimation) {
	UXTableViewRowAnimationFade,
	UXTableViewRowAnimationRight,
	UXTableViewRowAnimationLeft,
	UXTableViewRowAnimationTop,
	UXTableViewRowAnimationBottom,
	UXTableViewRowAnimationNone,
	UXTableViewRowAnimationMiddle,
	UXTableViewRowAnimationAutomatic = 100
};

@protocol UXTableViewDataSource;
@protocol UXTableViewDelegate;

@class UXView, UXTableViewCell;

@interface UXTableView : UXCollectionView

@property (nonatomic) __weak id<UXTableViewDelegate> tableViewDelegate;
@property (nonatomic) __weak id<UXTableViewDataSource> tableViewDataSource;

@property (nonatomic) NSEdgeInsets separatorInset;
@property (copy, nonatomic) NSColor *separatorColor;
@property (nonatomic) UXTableViewCellSeparatorStyle separatorStyle;

@property (nonatomic) CGFloat rowHeight;

- (instancetype)initWithFrame:(CGRect)frame style:(UXTableViewStyle)style;

- (NSInteger)numberOfRowsInSection:(NSInteger)section;
- (UXTableViewCell *)cellForRowAtIndexPath:(NSIndexPath *)indexPath;

- (void)deselectRowAtIndexPath:(NSIndexPath *)indexPath animated:(BOOL)arg2;
- (void)selectRowAtIndexPath:(NSIndexPath *)indexPath animated:(BOOL)arg2 scrollPosition:(NSInteger)scrollPosition;

- (void)beginUpdates;
- (void)endUpdates;

- (void)moveRowAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)toIndexPath;
- (void)reloadRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UXTableViewRowAnimation)rowAnimation;
- (void)deleteRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UXTableViewRowAnimation)rowAnimation;
- (void)insertRowsAtIndexPaths:(NSArray *)indexPaths withRowAnimation:(UXTableViewRowAnimation)rowAnimation;
- (void)deleteSections:(NSArray *)sections withRowAnimation:(UXTableViewRowAnimation)rowAnimation;
- (void)insertSections:(NSArray *)sections withRowAnimation:(UXTableViewRowAnimation)rowAnimation;

- (NSIndexPath *)indexPathsForVisibleRows;
- (NSIndexPath *)indexPathForSelectedRow;
- (NSIndexPath *)indexPathForClickedRow;

- (void)registerClass:(Class)cellClass forCellReuseIdentifier:(NSString *)reuseIdentifier;

- (UXTableViewCell *)dequeueReusableCellWithReuseIdentifier:(NSString *)reuseIdentifier forIndexPath:(NSIndexPath *)indexPath;
- (UXTableViewCell *)dequeueReusableCellWithIdentifier:(NSString *)reuseIdentifier forIndexPath:(NSIndexPath *)indexPath;
- (UXView *)dequeueReusableHeaderFooterViewWithReuseIdentifier:(NSString *)reuseIdentifier forSection:(NSInteger)section;

@end

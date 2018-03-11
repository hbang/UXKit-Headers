// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXView.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, UXCollectionViewScrollPosition) {
	UXCollectionViewScrollPositionNone                 = 0,
	UXCollectionViewScrollPositionTop                  = 1 << 0,
	UXCollectionViewScrollPositionCenteredVertically   = 1 << 1,
	UXCollectionViewScrollPositionBottom               = 1 << 2,
	UXCollectionViewScrollPositionLeft                 = 1 << 3,
	UXCollectionViewScrollPositionCenteredHorizontally = 1 << 4,
	UXCollectionViewScrollPositionRight                = 1 << 5
};

@class UXCollectionViewLayout, UXCollectionReusableView, UXCollectionViewCell, UXCollectionViewLayoutAttributes;
@protocol UXCollectionViewDelegate, UXCollectionViewDataSource;

@interface UXCollectionView : NSScrollView

- (instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UXCollectionViewLayout *)layout;

@property (nonatomic, strong) UXCollectionViewLayout *collectionViewLayout;
@property (nonatomic, weak, nullable) id <UXCollectionViewDelegate> delegate;
@property (nonatomic, weak, nullable) id <UXCollectionViewDataSource> dataSource;

- (void)registerClass:(nullable Class)cellClass forCellWithReuseIdentifier:(NSString *)identifier;
- (void)registerNib:(nullable NSNib *)nib forCellWithReuseIdentifier:(NSString *)identifier;

- (void)registerClass:(nullable Class)viewClass forSupplementaryViewOfKind:(NSString *)elementKind withReuseIdentifier:(NSString *)identifier;
- (void)registerNib:(nullable NSNib *)nib forSupplementaryViewOfKind:(NSString *)kind withReuseIdentifier:(NSString *)identifier;

- (UXCollectionViewCell *)dequeueReusableCellWithReuseIdentifier:(NSString *)identifier forIndexPath:(NSIndexPath *)indexPath;
- (UXCollectionReusableView *)dequeueReusableSupplementaryViewOfKind:(NSString *)elementKind withReuseIdentifier:(NSString *)identifier forIndexPath:(NSIndexPath *)indexPath;

@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) BOOL allowsContinuousSelection;
@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) BOOL allowsLassoSelection;
@property (nonatomic) BOOL allowsPaintingSelection;

@property (nonatomic) BOOL lassoInvertsSelection;

@property (nonatomic, readonly, nullable) NSArray<NSIndexPath *> *indexPathsForSelectedItems;

- (void)selectItemAtIndexPath:(nullable NSIndexPath *)indexPath animated:(BOOL)animated scrollPosition:(UXCollectionViewScrollPosition)scrollPosition;
- (void)deselectItemAtIndexPath:(NSIndexPath *)indexPath animated:(BOOL)animated;

- (void)reloadData;

- (void)setCollectionViewLayout:(UXCollectionViewLayout *)layout animated:(BOOL)animated;
- (void)setCollectionViewLayout:(UXCollectionViewLayout *)layout animated:(BOOL)animated completion:(void (^ __nullable)(BOOL finished))completion;

@property (nonatomic, readonly) NSInteger numberOfSections;

- (NSInteger)numberOfItemsInSection:(NSInteger)section;

- (nullable UXCollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)indexPath;
- (nullable UXCollectionViewLayoutAttributes *)layoutAttributesForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath;

- (nullable NSIndexPath *)indexPathForItemAtPoint:(CGPoint)point;
- (nullable NSIndexPath *)indexPathForCell:(UXCollectionViewCell *)cell;

- (nullable UXCollectionViewCell *)cellForItemAtIndexPath:(NSIndexPath *)indexPath;

@property (nonatomic, readonly) NSArray<__kindof UXCollectionViewCell *> *visibleCells;
@property (nonatomic, readonly) NSArray<NSIndexPath *> *indexPathsForVisibleItems;

- (NSArray<UXCollectionReusableView *> *)visibleSupplementaryViewsOfKind:(NSString *)elementKind;
- (NSArray<NSIndexPath *> *)indexPathsForVisibleSupplementaryElementsOfKind:(NSString *)elementKind;

- (void)scrollToItemAtIndexPath:(NSIndexPath *)indexPath atScrollPosition:(UXCollectionViewScrollPosition)scrollPosition animated:(BOOL)animated;

- (void)insertSections:(NSIndexSet *)sections;
- (void)deleteSections:(NSIndexSet *)sections;
- (void)reloadSections:(NSIndexSet *)sections;
- (void)moveSection:(NSInteger)section toSection:(NSInteger)newSection;

- (void)insertItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)deleteItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)reloadItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)moveItemAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)newIndexPath;

- (void)performBatchUpdates:(void (NS_NOESCAPE ^ _Nullable)(void))updates completion:(void (^ _Nullable)(BOOL finished))completion;

@end

NS_ASSUME_NONNULL_END

// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>
#import "UXCollectionViewLayoutInvalidationContext.h"
#import "UXCollectionViewUpdateItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface UXCollectionViewLayout : NSObject <NSCoding>

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@property (nullable, nonatomic, readonly) UXCollectionView *collectionView;

- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(UXCollectionViewLayoutInvalidationContext *)context;

- (void)registerClass:(nullable Class)viewClass forDecorationViewOfKind:(NSString *)elementKind;
- (void)registerNib:(nullable NSNib *)nib forDecorationViewOfKind:(NSString *)elementKind;

@end

@interface UXCollectionViewLayout (UISubclassingHooks)

@property (class, nonatomic, readonly) Class layoutAccessibilityClass;
@property (class, nonatomic, readonly) Class layoutAttributesClass;
@property (class, nonatomic, readonly) Class invalidationContextClass;

- (void)prepareLayout;

- (nullable NSArray<__kindof UXCollectionViewLayoutAttributes *> *)layoutAttributesForElementsInRect:(CGRect)rect;
- (nullable UXCollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)indexPath;
- (nullable UXCollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)indexPath;
- (nullable UXCollectionViewLayoutAttributes *)layoutAttributesForDecorationViewOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath *)indexPath;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds;
- (UXCollectionViewLayoutInvalidationContext *)invalidationContextForBoundsChange:(CGRect)newBounds;

- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset withScrollingVelocity:(CGPoint)velocity;

@property (nonatomic, readonly) CGSize collectionViewContentSize;

@end

@interface UXCollectionViewLayout (UIUpdateSupportHooks)

- (void)prepareForCollectionViewUpdates:(NSArray<UXCollectionViewUpdateItem *> *)updateItems;
- (void)finalizeCollectionViewUpdates;

- (void)prepareForAnimatedBoundsChange:(CGRect)oldBounds;
- (void)finalizeAnimatedBoundsChange;

- (void)prepareForTransitionToLayout:(UXCollectionViewLayout *)newLayout;
- (void)prepareForTransitionFromLayout:(UXCollectionViewLayout *)oldLayout;
- (void)finalizeLayoutTransition;

- (nullable UXCollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath *)itemIndexPath;
- (nullable UXCollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath *)itemIndexPath;
- (nullable UXCollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)elementIndexPath;
- (nullable UXCollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)elementIndexPath;
- (nullable UXCollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingDecorationElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)decorationIndexPath;
- (nullable UXCollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingDecorationElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)decorationIndexPath;

- (NSArray<NSIndexPath *> *)indexPathsToDeleteForSupplementaryViewOfKind:(NSString *)elementKind;
- (NSArray<NSIndexPath *> *)indexPathsToDeleteForDecorationViewOfKind:(NSString *)elementKind;
- (NSArray<NSIndexPath *> *)indexPathsToInsertForSupplementaryViewOfKind:(NSString *)elementKind;
- (NSArray<NSIndexPath *> *)indexPathsToInsertForDecorationViewOfKind:(NSString *)elementKind;

@end

NS_ASSUME_NONNULL_END

// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

@class UXCollectionView;

@protocol UXCollectionViewDelegate <NSObject>

@optional
- (BOOL)collectionView:(UXCollectionView *)collectionView shouldSelectItemAtIndexPath:(NSIndexPath *)indexPath;
- (BOOL)collectionView:(UXCollectionView *)collectionView shouldDeselectItemAtIndexPath:(NSIndexPath *)indexPath;

- (void)collectionView:(UXCollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath;
- (void)collectionView:(UXCollectionView *)collectionView didDeselectItemAtIndexPath:(NSIndexPath *)indexPath;

- (void)collectionView:(UXCollectionView *)collectionView didEndDisplayingCell:(UXCollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath;
- (void)collectionView:(UXCollectionView *)collectionView didEndDisplayingSupplementaryView:(UXCollectionReusableView *)view forElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)indexPath;

- (void)collectionView:(UXCollectionView *)collectionView indexPathsForSelectedItemsWillAdd:(NSArray *)addedIndexPaths remove:(NSArray *)removedIndexPaths animated:(BOOL)animated;
- (void)collectionView:(UXCollectionView *)collectionView indexPathsForSelectedItemsDidAdd:(NSArray *)addedIndexPaths remove:(NSArray *)removedIndexPaths animated:(BOOL)animated;

- (void)collectionView:(UXCollectionView *)collectionView mouseDownWithEvent:(NSEvent *)event;
- (void)collectionView:(UXCollectionView *)collectionView itemWasDoubleClickedAtIndexPath:(NSIndexPath *)indexPath withEvent:(NSEvent *)event;
- (void)collectionView:(UXCollectionView *)collectionView itemWasRightClickedAtIndexPath:(NSIndexPath *)indexPath withEvent:(NSEvent *)event;

- (void)collectionViewWillBeginScrolling:(UXCollectionView *)collectionView;
- (void)collectionViewDidScroll:(UXCollectionView *)collectionView;
- (void)collectionViewDidEndScrolling:(UXCollectionView *)collectionView;
- (void)collectionViewWillBeginDecelerating:(UXCollectionView *)collectionView targetContentOffset:(CGPoint)contentOffset;
- (void)collectionViewDidEndDecelerating:(UXCollectionView *)collectionView;

- (CGPoint)collectionView:(UXCollectionView *)collectionView targetContentOffsetOnResizeForProposedContentOffset:(CGPoint)contentOffset;
- (void)collectionView:(UXCollectionView *)collectionView didPrepareForOverdraw:(CGRect)rect;

@end

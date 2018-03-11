// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXViewController.h"
#import "UXCollectionViewDataSource.h"
#import "UXCollectionViewDelegate.h"

@class UXCollectionViewLayout;

@interface UXCollectionViewController : UXViewController <UXCollectionViewDataSource, UXCollectionViewDelegate>

@property (nonatomic, retain) UXCollectionView *collectionView;

- (instancetype)initWithCollectionViewLayout:(UXCollectionViewLayout *)layout;

@end

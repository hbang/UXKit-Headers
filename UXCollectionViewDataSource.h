// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

@class UXCollectionViewCell, UXCollectionReusableView;

@protocol UXCollectionViewDataSource <NSObject>

@required
- (NSInteger)collectionView:(UXCollectionView *)collectionView numberOfItemsInSection:(NSInteger)section;

- (__kindof UXCollectionViewCell *)collectionView:(UXCollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath;

@optional
- (NSInteger)numberOfSectionsInCollectionView:(UXCollectionView *)collectionView;

- (UXCollectionReusableView *)collectionView:(UXCollectionView *)collectionView viewForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath;

@end

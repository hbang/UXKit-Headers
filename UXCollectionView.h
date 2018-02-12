// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import "UXView.h"

@interface UXCollectionView : UXView

- (void)registerClass:(Class)cellClass forCellWithReuseIdentifier:(NSString *)reuseIdentifier;

@end

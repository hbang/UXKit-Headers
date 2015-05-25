/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

@interface NSIndexPath (UXCollectionViewAdditions)

+ (instancetype)indexPathForItem:(NSUInteger)item inSection:(NSUInteger)section;

@property (readonly, nonatomic) NSUInteger section;
@property (readonly, nonatomic) NSUInteger item;

@end

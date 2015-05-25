/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

@interface NSIndexPath (UXTableView)

+ (instancetype)indexPathForRow:(NSUInteger)row inSection:(NSUInteger)section;

@property (readonly, nonatomic) NSUInteger section;
@property (readonly, nonatomic) NSUInteger row;

@end

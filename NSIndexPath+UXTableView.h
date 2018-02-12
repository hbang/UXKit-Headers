// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

@interface NSIndexPath (UXTableView)

+ (instancetype)indexPathForRow:(NSUInteger)row inSection:(NSUInteger)section;

@property (readonly, nonatomic) NSUInteger section;
@property (readonly, nonatomic) NSUInteger row;

@end

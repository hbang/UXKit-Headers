// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Foundation/Foundation.h>
#import "UXTableView.h"
#import "UXTableViewDataSource.h"
#import "UXTableViewDelegate.h"

@interface UXTableViewController : UXCollectionViewController <UXTableViewDataSource, UXTableViewDelegate>

- (instancetype)initWithStyle:(UXTableViewStyle)style;

@property (readonly, nonatomic) UXTableView *tableView;
@property (readonly, nonatomic) id<UXTableViewDelegate> tableViewDelegate;

@end

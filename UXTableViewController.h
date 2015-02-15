/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import <Foundation/Foundation.h>
#import "UXTableViewDataSource.h"
#import "UXTableViewDelegate.h"

@class UXTableView;

@protocol UXTableViewDataSource, UXTableViewDelegate;

@interface UXTableViewController : UXCollectionViewController <UXTableViewDataSource, UXTableViewDelegate>

@property (readonly, nonatomic) UXTableView *tableView;
@property (readonly, nonatomic) id<UXTableViewDelegate> tableViewDelegate;

@end

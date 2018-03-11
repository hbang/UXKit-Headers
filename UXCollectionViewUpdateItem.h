// UXKit headers, derived from reverse engineering by Adam Demasi (@kirb)
// This is free and unencumbered software released into the public domain. Refer to LICENSE.md.

#import <Cocoa/Cocoa.h>

typedef NS_ENUM(NSInteger, UXCollectionUpdateAction) {
	UXCollectionUpdateActionInsert,
	UXCollectionUpdateActionDelete,
	UXCollectionUpdateActionReload,
	UXCollectionUpdateActionMove,
	UXCollectionUpdateActionNone
};

@interface UXCollectionViewUpdateItem : NSObject

@property (nonatomic, readonly, nullable) NSIndexPath *indexPathBeforeUpdate;
@property (nonatomic, readonly, nullable) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, readonly) UXCollectionUpdateAction updateAction;

@end

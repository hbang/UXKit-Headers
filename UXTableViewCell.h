/**
 * UXKit headers, derived from reverse engineering
 * Reversed by Adam D (kirb), licensed under WTFPL v2
 */

#import "UXCollectionViewCell.h"

typedef NS_ENUM(NSInteger, UXTableViewCellStyle) {
	UXTableViewCellStyleDefault,
	UXTableViewCellStyleValue1,
	UXTableViewCellStyleValue2,
	UXTableViewCellStyleSubtitle
};

typedef NS_ENUM(NSInteger, UXTableViewCellAccessoryType) {
	UXTableViewCellAccessoryNone,
	UXTableViewCellAccessoryDisclosureIndicator,
	UXTableViewCellAccessoryDetailDisclosureButton,
	UXTableViewCellAccessoryCheckmark,
	UXTableViewCellAccessoryDetailButton
};

typedef NS_ENUM(NSInteger, UXTableViewCellEditingStyle) {
	UXTableViewCellEditingStyleNone,
	UXTableViewCellEditingStyleDelete,
	UXTableViewCellEditingStyleInsert
};

typedef NS_ENUM(NSInteger, UXTableViewCellSelectionStyle) {
	UXTableViewCellSelectionStyleNone,
	UXTableViewCellSelectionStyleBlue,
	UXTableViewCellSelectionStyleGray,
	UXTableViewCellSelectionStyleDefault
};

typedef NS_ENUM(NSInteger, UXTableViewCellSeparatorStyle)  {
	UXTableViewCellSeparatorStyleNone,
	UXTableViewCellSeparatorStyleSingleLine,
	UXTableViewCellSeparatorStyleSingleLineEtched
};

@class UXLabel;

@interface UXTableViewCell : UXCollectionViewCell

- (instancetype)initWithStyle:(UXTableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;

- (void)prepareForReuse;

@property (nonatomic) UXTableViewCellStyle style;

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;

@property (retain, nonatomic) UXLabel *textLabel;
@property (retain, nonatomic) UXLabel *detailTextLabel;

@property (retain, nonatomic) UXView *accessoryView;
@property (nonatomic) UXTableViewCellAccessoryType accessoryType;

@property (nonatomic) CGFloat indentationWidth;
@property (nonatomic) NSInteger indentationLevel;

@property (nonatomic) NSEdgeInsets separatorInset;
@property (nonatomic) UXTableViewCellSelectionStyle selectionStyle;

@property (retain, nonatomic) NSColor *highlightColor;
@property (retain, nonatomic) UXView *backgroundView;
@property (retain, nonatomic) UXView *selectedBackgroundView;

@end

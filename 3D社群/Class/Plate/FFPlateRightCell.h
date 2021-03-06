//
//  FFPlateRightCell.h
//  FZFBase
//
//  Created by fengzifeng on 2017/8/17.
//  Copyright © 2017年 fengzifeng. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FFPlateSectionModel;

@interface FFPlateRightCell : UITableViewCell

+ (CGFloat)getCellHeight:(FFPlateSectionModel *)model;

- (void)updateCell:(FFPlateSectionModel *)model;
@end

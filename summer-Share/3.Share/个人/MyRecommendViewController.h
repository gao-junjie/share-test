//
//  MyRecommendViewController.h
//  3.Share
//
//  Created by mac on 2021/7/29.
//  Copyright © 2021 mac. All rights reserved.
//

#import "ViewController.h"
#import "PhotoTableViewCell.h"
NS_ASSUME_NONNULL_BEGIN

@interface MyRecommendViewController : ViewController <UITableViewDataSource,UITableViewDelegate>

@property (strong, nonatomic) UITableView* recommendTableView;
@property (strong, nonatomic) PhotoTableViewCell* firstCell;
@property (assign, nonatomic) int loveNumberInt;
@property (nonatomic, copy) NSString* loveNumberString;
@property (copy, nonatomic) NSMutableArray* shareNumberIntArray;
@property (nonatomic, copy) NSString* shareNumberString;
@property (copy, nonatomic) NSMutableArray* visitorNumberIntArray;
@property (nonatomic, copy) NSString* visitorNumberString;
@property (copy, nonatomic) NSArray* themeArray;
@property (copy, nonatomic) NSArray* authorArray;
@property (copy, nonatomic) NSArray* styleArray;
@property (copy, nonatomic) NSArray* timeArray;
@end

NS_ASSUME_NONNULL_END

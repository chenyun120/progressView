//
//  MPSProgress.h
//  jinduDemo
//
//  Created by Chenyun on 14/12/8.
//  Copyright (c) 2014年 geek-zoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPSProgress : UIView

@property (nonatomic, strong) UIView *	bgTop;
@property (nonatomic, strong) UIView *	bgBottom;
@property (nonatomic, strong) UILabel * progressNum;

@property (nonatomic, strong) UIImage * image;

- (void)setProgress:(float)progress;

@end

//
//  UIButton+HSUWebCache.h
//  Tweet4China
//
//  Created by Ronald Wang on 2013/12/2.
//  Copyright (c) 2013年 Ronald Wang <twieface@gmail.com>. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (HSUWebCache)

@property (nonatomic, copy) NSString *imageUrl;

- (void)setImageWithUrlStr:(NSString *)urlStr forState:(UIControlState)state placeHolder:(UIImage *)placeHolder success:(void (^)())success failure:(void (^)())failure;
- (void)setImageWithUrlStr:(NSString *)urlStr forState:(UIControlState)state placeHolder:(UIImage *)placeHolder;

@end

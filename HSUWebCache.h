//
//  HSUWebCache.h
//  Tweet4China
//
//  Created by Ronald Wang on 2013/12/2.
//  Copyright (c) 2013年 Ronald Wang <twieface@gmail.com>. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HSUWebCache : NSObject

+ (void)setImageWithUrlStr:(NSString *)urlStr toButton:(UIButton *)button forState:(UIControlState)state placeHolder:(UIImage *)placeHolder success:(void (^)())success failure:(void (^)())failure;
+ (void)setImageWithUrlStr:(NSString *)urlStr toImageView:(UIImageView *)imageView placeHolder:(UIImage *)placeHolder success:(void (^)())success failure:(void (^)())failure;

+ (void)setImageCacheDiretory:(NSString *)directory;
+ (void)setImageCacheSize:(size_t)cacheSize;

@end

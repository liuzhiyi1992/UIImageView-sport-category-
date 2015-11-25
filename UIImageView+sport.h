//
//  UIImageView+sport.h
//  ImageLoadingIndicator
//
//  Created by lzy on 15/11/20.
//  Copyright © 2015年 lzy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView+WebCache.h"


typedef void(^SportWebImageDownloaderProgressBlock)(NSInteger receivedSize, NSInteger expectedSize);
typedef void(^SportWebImageCompletionBlock)(UIImage *image, NSError *error, SDImageCacheType cacheType, NSURL *imageUrl);

@interface UIImageView (sport)

- (void)sp_setImageWithUrl:(NSURL *)url;

- (void)sp_setImageWithUrl:(NSURL *)url placeholderImage:(UIImage *)placeholderImage;

- (void)sp_setImagewithurl:(NSURL *)url placeholderImage:(UIImage *)placeholderImage options:(SDWebImageOptions)options;

- (void)sp_setImageWithUrl:(NSURL *)url completed:(SportWebImageCompletionBlock)completedBlock;

- (void)sp_setImageWithUrl:(NSURL *)url placeholderImage:(UIImage *)placeholderImage completed:(SportWebImageCompletionBlock)completedBlock;

- (void)sp_setImagewithurl:(NSURL *)url placeholderImage:(UIImage *)placeholderImage options:(SDWebImageOptions)options completed:(SportWebImageCompletionBlock)completedBlock;

- (void)sp_setImageWithUrl:(NSURL *)url placeholderImage:(UIImage *)placeholderImage options:(SDWebImageOptions)options progress:(SportWebImageDownloaderProgressBlock)progressBlock completed:(SportWebImageCompletionBlock)completedBlock;

@end




@interface CircleLoaderIndicator : UIView

@property (assign, nonatomic) CGFloat progress;

- (void)showImage;

@end

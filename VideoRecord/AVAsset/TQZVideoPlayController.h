//
//  FMVideoPlayController.h
//  fmvideo
//
//  Created by qianjn on 2016/12/30.
//  Copyright © 2016年 SF. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^cancleBlock)();
@interface FMVideoPlayController : UIViewController

@property (nonatomic, strong) NSURL *videoUrl;
@property (nonatomic, strong) cancleBlock cancleB;
@end

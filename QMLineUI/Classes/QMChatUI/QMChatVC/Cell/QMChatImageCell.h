//
//  QMChatImageCell.h
//  IMSDK
//
//  Created by çŚćç on 2021/12/30.
//

#import "QMChatBaseCell.h"
//#import "SDAnimatedImageView+WebCache.h"
#import <SDWebImage/SDAnimatedImageView+WebCache.h>
NS_ASSUME_NONNULL_BEGIN

@interface QMChatImageCell : QMChatBaseCell

@property (nonatomic, strong) SDAnimatedImageView *showImageView;

@end

NS_ASSUME_NONNULL_END

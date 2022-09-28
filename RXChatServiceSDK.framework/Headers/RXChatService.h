//
//  RXChatService.h
//  RXChatServiceSDK
//
//  Created by 陈汉 on 2022/9/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RXChatService : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 加载客服页面
 * @param chatUrl 客服地址
 * @param title 客服标题
 * @param fullScreen 页面是否全屏
 */
- (void)initWithChatUrl:(NSString *)chatUrl
                  title:(NSString *)title
             fullScreen:(BOOL)fullScreen;

@end

NS_ASSUME_NONNULL_END

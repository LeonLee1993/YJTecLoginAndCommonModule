//
//  LYCCommonMessages.h
//  YJTecCommonModule
//
//  Created by paradise_ on 2017/10/18.
//  Copyright © 2017年 YJGX. All rights reserved.
//

#import <Foundation/Foundation.h>
#pragma mark - 用来获取一些公用的用户信息
@interface LYCCommonMessages : NSObject

+ (instancetype)LYCCommonMessagesHandle;

@property (nonatomic,strong) NSString * userToken;

@property (nonatomic,strong) NSString * userHeadImgUrl;

@property (nonatomic,strong) NSString * userMemberId;

@property (nonatomic,strong) NSString * userName;

@property (nonatomic,strong) NSString * userTelNum;

@end

//
//  LoginViewModel.h
//  YJCard
//
//  Created by paradise_ on 2017/9/1.
//  Copyright © 2017年 yijieguangxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveObjC.h>
@class LYCBaseViewController;
@interface LoginViewModel : NSObject
typedef void(^successLoginBlock)(void);
typedef void(^failLoginBlock)(NSError *error);
/** 登录按钮命令 */
@property (nonatomic, strong, readonly) RACCommand *loginCommand;

// 保存登录界面的账号和密码
/** 账号 **/
@property (nonatomic, strong) NSString *account;
@property (nonatomic, strong) NSString *pwd;
@property (nonatomic, strong) NSString * dataString;
@property (nonatomic,strong) LYCBaseViewController * SelfVC;
@property (nonatomic,assign) BOOL needDissmiss;
@property (nonatomic,copy) successLoginBlock successLoginBlock;
@property (nonatomic,copy) failLoginBlock failLoginBlock;
@end

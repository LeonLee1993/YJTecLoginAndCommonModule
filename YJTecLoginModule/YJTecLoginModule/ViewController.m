//
//  ViewController.m
//  YJTecLoginModule
//
//  Created by paradise_ on 2017/10/13.
//  Copyright © 2017年 YJGX. All rights reserved.
//

#import "ViewController.h"
#import <YJTecCommonModuleFramework/YJTecCommonModuleFramework.h>

@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *path = [[NSBundle mainBundle] pathForResource:@"YJTecCommonModuleFramework" ofType:@"framework"];
    NSBundle *myBundle = [NSBundle bundleWithPath:path];
    LoginViewController *frameworkVC = [[LoginViewController alloc] initWithNibName:@"LoginViewController" bundle:myBundle];
    [self.navigationController pushViewController:frameworkVC animated:YES];
    
}


@end

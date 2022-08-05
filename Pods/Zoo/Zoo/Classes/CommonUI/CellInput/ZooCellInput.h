//
//  ZooCellInput.h
//  Zoo
//
//  Created by lZackx on 2022/4/14.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZooCellInput : UIView

@property (nonatomic, strong) UITextField *textField;

- (void)renderUIWithTitle:(NSString *)title;

- (void)renderUIWithPlaceholder:(NSString *)placeholder;

- (void)needTopLine;

- (void)needDownLine;

@end

NS_ASSUME_NONNULL_END

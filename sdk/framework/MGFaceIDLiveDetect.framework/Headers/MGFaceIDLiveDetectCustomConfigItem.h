//
//  MGFaceIDLiveDetectCustomConfigItem.h
//  MGFaceIDLiveDetect
//
//  Created by MegviiDev on 2018/10/23.
//  Copyright © 2018年 Megvii. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MGFaceIDLiveDetectCustomConfigItem : NSObject

@property (nonatomic, strong) UIColor* livenessGuideRemindTextColor;    //  引导页提示文本颜色
@property (nonatomic, strong) UIColor* livenessGuideReadColor;          //  引导页已阅读文本颜色
@property (nonatomic, strong) UIColor* livenessDetectButtonTextColor;   //  引导页开始按钮文本颜色
@property (nonatomic, strong) UIColor* livenessDetectButtonSelectedBGColor;     //  引导页开始按钮已同意背景颜色
@property (nonatomic, strong) UIColor* livenessDetectButtonHighlightBGColor;    //  引导页开始按钮选中时背景颜色
@property (nonatomic, strong) UIColor* livenessDetectButtonNormalBGColor;       //  引导页开始按钮未同意背景颜色

@property (nonatomic, strong) UIColor* livenessHomeBackgroundColor;   //  背景色
@property (nonatomic, strong) UIColor* livenessHomeRingColor;         //  检测中圆环背景色
@property (nonatomic, strong) UIColor* livenessHomeProcessBarColor;   //  圆环进度颜色
@property (nonatomic, strong) UIColor* livenessHomeValidationFailProcessBarColor;  //  检测失败时圆环背景色
@property (nonatomic, strong) UIColor* livenessHomePromptColor;       //  提示文本字体颜色
@property (nonatomic, strong) UIColor* livenessHomePromptFlashColor;       //  炫彩阶段提示文本字体颜色
@property (nonatomic, assign) CGFloat livenessHomePromptSize;         //  提示文本字体大小

@property (nonatomic, strong) UIColor* livenessExitTitlePromptColor;  //  退出弹框内容字体颜色
@property (nonatomic, assign) CGFloat livenessExitTitlePromptSize;    //  退出弹框内容字体大小
@property (nonatomic, strong) UIColor* livenessExitLeftPromptColor;   //  退出弹框左按钮字体颜色
@property (nonatomic, assign) CGFloat livenessExitLeftPromptSize;     //  退出弹框左按钮字体大小
@property (nonatomic, strong) UIColor* livenessExitRightPromptColor;  //  退出弹框右按钮字体颜色
@property (nonatomic, assign) CGFloat livenessExitRightPromptSize;    //  退出弹框右按钮字体大小

@property (nonatomic, strong) UIColor *livenessHomeUpperInfoTextFontColor;    // 检测页面提示文字颜色
@property (nonatomic, assign) CGFloat livenessHomeUpperInfoTextFontSize;    // 检测页面提示文字字体大小

@end

NS_ASSUME_NONNULL_END

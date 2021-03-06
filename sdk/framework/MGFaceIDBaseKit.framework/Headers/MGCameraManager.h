//
//  MGCameraManager.h
//  MGFaceIDGeneralModule
//
//  Created by MegviiDev on 2018/5/18.
//  Copyright © 2018年 Megvii. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "MGCameraDelegate.h"

@interface MGCameraManager : NSObject

@property (nonatomic, weak) id <MGCameraDelegate> delegate;

@property (nonatomic, strong, readonly) AVCaptureSession *videoSession;
@property (nonatomic, strong, readonly) AVCaptureDeviceInput *videoInput;
@property (nonatomic, assign, readonly) AVCaptureDevicePosition devicePosition;

- (dispatch_queue_t)getVideoQueue;

/**
 *  初始化方法
 *
 *  @param sessionPreset 相机分辨率 如果设置为空，则默认为 AVCaptureSessionPreset640x480
 *  @param devicePosition 前置或者后置相机，则默认为 前置相机
 *  @param record 是否录像
 *  @param sound  是否录音，必须在录像模式下设置 yes 才有用
 *  @return 实例化对象
 */
+ (instancetype)videoPreset:(NSString *)sessionPreset
             devicePosition:(AVCaptureDevicePosition)devicePosition
                videoRecord:(BOOL)record
                 videoSound:(BOOL)sound;

/**
 *  视频流的方向
 */
@property(nonatomic, assign) AVCaptureVideoOrientation videoOrientation;

/**
 *  视频流的预览layer 默认全屏大小
 *  @return 实例化对象
 */
- (AVCaptureVideoPreviewLayer *)videoPreview;

/**
 *  开启视频流
 */
- (void)startRunning;

/**
 *  关闭视频流
 */
- (void)stopRunning;

/**
 *  开始录像
 */
- (void)startRecording;

/**
 *  关闭录像
 *
 *  @return 录像存放地址
 */
- (NSString *)stopRceording;

//  静默活体
- (void)silentLiveWithMoveName:(NSString *)nameStr;

- (void)startSilentLiveRecording:(NSUInteger)recordFPS;

- (void)resetSilentLiveRecording;

- (void)stopSilentLiveRecording;

- (CMFormatDescriptionRef)formatDescription;

/** only valid after startRunning has been called */
- (CGAffineTransform)transformFromVideoBufferOrientationToOrientation:(AVCaptureVideoOrientation)orientation
                                                    withAutoMirroring:(BOOL)mirroring;

@end

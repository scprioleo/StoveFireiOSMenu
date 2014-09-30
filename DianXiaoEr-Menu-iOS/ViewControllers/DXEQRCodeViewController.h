//
//  DXEQRCodeViewController.h
//  DianXiaoEr-Menu-iOS
//
//  Created by Joe Shang on 9/30/14.
//  Copyright (c) 2014 Shang Chuanren. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@protocol DXEQRCodeViewControllerDelegate <NSObject>

- (void)qrCodeDidScan:(NSString *)codeString;

@end

@interface DXEQRCodeViewController : UIViewController
< AVCaptureMetadataOutputObjectsDelegate >

@property (strong, nonatomic) AVCaptureDevice *device;
@property (strong, nonatomic) AVCaptureDeviceInput *input;
@property (strong, nonatomic) AVCaptureMetadataOutput *output;
@property (strong, nonatomic) AVCaptureSession *session;
@property (strong, nonatomic) AVCaptureVideoPreviewLayer *preview;

@property (weak, nonatomic) IBOutlet UIImageView *scanningLine;
@property (weak, nonatomic) IBOutlet UIImageView *scanningBox;

@property (weak, nonatomic) id<DXEQRCodeViewControllerDelegate> delegate;

@end

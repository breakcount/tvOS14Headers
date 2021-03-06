/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSProgress, PLEditSource, NSString, NSError, NSNumber;


@protocol PXEditSourceLoader <NSObject>
@property (nonatomic,readonly) NSProgress * progress; 
@property (nonatomic,readonly) PLEditSource * editSource; 
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource; 
@property (nonatomic,readonly) PLEditSource * activeEditSource; 
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier; 
@property (nonatomic,readonly) long long baseVersion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSNumber * loadDuration; 
@required
-(NSError *)error;
-(NSProgress *)progress;
-(long long)baseVersion;
-(NSString *)contentIdentifier;
-(NSString *)livePhotoPairingIdentifier;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
-(void)beginLoading;
-(PLEditSource *)activeEditSource;
-(NSNumber *)loadDuration;

@end


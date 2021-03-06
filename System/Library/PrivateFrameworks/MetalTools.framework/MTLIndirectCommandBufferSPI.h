/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:35:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLIndirectCommandBufferSPI <MTLIndirectCommandBuffer>
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long storageMode; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@optional
-(unsigned long long)gpuAddress;
-(unsigned long long)resourceIndex;

@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)storageMode;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2;

@end


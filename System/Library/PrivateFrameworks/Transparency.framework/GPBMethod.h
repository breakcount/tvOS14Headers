/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, NSMutableArray;

@interface GPBMethod : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * requestTypeURL; 
@property (assign,nonatomic) BOOL requestStreaming; 
@property (nonatomic,copy) NSString * responseTypeURL; 
@property (assign,nonatomic) BOOL responseStreaming; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end


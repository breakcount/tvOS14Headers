/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppUserDefaultsStoring.h>

@class NSString;

@interface IKAppUserDefaults : NSObject <IKAppUserDefaultsStoring>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserDefaults;
-(id)dataForKey:(id)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)removeDataForKey:(id)arg1 ;
@end


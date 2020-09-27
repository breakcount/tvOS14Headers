/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INSetLabeledSettingIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * oldValue; 
@property (nonatomic,copy) NSString * updatedValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@required
-(long long)code;
-(void)setOldValue:(id)arg1;
-(NSString *)oldValue;
-(NSString *)updatedValue;
-(void)setUpdatedValue:(id)arg1;
-(NSString *)errorDetail;
-(void)setErrorDetail:(id)arg1;

@end


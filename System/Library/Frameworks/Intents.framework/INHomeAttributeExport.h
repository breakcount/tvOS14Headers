/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INHomeAttributeExport <NSObject,JSExport>
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long valueType; 
@property (assign,nonatomic) BOOL boolValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,copy) NSString * stringValue; 
@required
-(id)init;
-(double)doubleValue;
-(void)setType:(long long)arg1;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(long long)type;
-(void)setBoolValue:(BOOL)arg1;
-(void)setStringValue:(id)arg1;
-(void)setDoubleValue:(double)arg1;
-(long long)valueType;
-(void)setValueType:(long long)arg1;

@end


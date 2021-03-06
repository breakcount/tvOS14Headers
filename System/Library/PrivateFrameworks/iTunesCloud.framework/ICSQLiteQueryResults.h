/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSQLiteBinding.h>

@class ICSQLiteStatement, NSNumber, NSString;

@interface ICSQLiteQueryResults : NSObject <ICSQLiteBinding> {

	ICSQLiteStatement* _statement;

}

@property (nonatomic,readonly) long long firstInt64Value; 
@property (nonatomic,copy,readonly) NSNumber * firstNumberValue; 
@property (nonatomic,copy,readonly) NSString * firstStringValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStatement:(id)arg1 ;
-(int)clearBindings;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2 ;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2 ;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2 ;
-(void)bindNullAtPosition:(int)arg1 ;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(void)bindData:(id)arg1 atPosition:(int)arg2 ;
-(void)bindString:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)firstStringValue;
-(long long)firstInt64Value;
-(NSNumber *)firstNumberValue;
@end


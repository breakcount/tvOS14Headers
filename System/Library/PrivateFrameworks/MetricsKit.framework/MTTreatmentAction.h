/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MTTreatmentAction : NSObject {

	BOOL _blacklisted;
	NSString* _field;
	id _value;
	NSArray* _blacklistedFields;
	NSArray* _whitelistedFields;

}

@property (nonatomic,retain) NSString * field;                         //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) id value;                                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL blacklisted;                         //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedFields;              //@synthesize blacklistedFields=_blacklistedFields - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedFields;              //@synthesize whitelistedFields=_whitelistedFields - In the implementation block
+(id)treatmentActionWithField:(id)arg1 configData:(id)arg2 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)field;
-(void)setField:(NSString *)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(BOOL)blacklisted;
-(id)initWithField:(id)arg1 configDictionary:(id)arg2 ;
-(void)setWhitelistedFields:(NSArray *)arg1 ;
-(void)setBlacklistedFields:(NSArray *)arg1 ;
-(NSArray *)whitelistedFields;
-(NSArray *)blacklistedFields;
-(id)performAction:(id)arg1 context:(id)arg2 ;
@end


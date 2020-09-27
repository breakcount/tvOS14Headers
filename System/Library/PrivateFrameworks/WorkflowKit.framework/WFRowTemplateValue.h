/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSCoding;
@class NSString, NSNumber, NSDate;

@interface WFRowTemplateValue : NSObject <NSSecureCoding> {

	BOOL _removable;
	Class _contentItemClass;
	NSString* _contentPropertyName;
	long long _comparisonOperator;
	id<NSCopying><NSCoding> _enumeration;
	NSString* _string;
	NSNumber* _boolean;
	NSNumber* _number;
	NSString* _phone;
	NSString* _email;
	NSNumber* _calendarUnit;
	NSNumber* _byteCountUnit;
	NSDate* _date;
	NSDate* _anotherDate;

}

@property (nonatomic,readonly) Class contentItemClass;                         //@synthesize contentItemClass=_contentItemClass - In the implementation block
@property (nonatomic,readonly) NSString * contentPropertyName;                 //@synthesize contentPropertyName=_contentPropertyName - In the implementation block
@property (nonatomic,readonly) long long comparisonOperator;                   //@synthesize comparisonOperator=_comparisonOperator - In the implementation block
@property (nonatomic,readonly) BOOL removable;                                 //@synthesize removable=_removable - In the implementation block
@property (nonatomic,retain) id<NSCopying><NSCoding> enumeration;              //@synthesize enumeration=_enumeration - In the implementation block
@property (nonatomic,retain) NSString * string;                                //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) NSNumber * boolean;                               //@synthesize boolean=_boolean - In the implementation block
@property (nonatomic,retain) NSNumber * number;                                //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSString * phone;                                 //@synthesize phone=_phone - In the implementation block
@property (nonatomic,retain) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * calendarUnit;                          //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,retain) NSNumber * byteCountUnit;                         //@synthesize byteCountUnit=_byteCountUnit - In the implementation block
@property (nonatomic,retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * anotherDate;                             //@synthesize anotherDate=_anotherDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSDate *)date;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)phone;
-(void)setPhone:(NSString *)arg1 ;
-(NSNumber *)calendarUnit;
-(BOOL)removable;
-(long long)comparisonOperator;
-(id<NSCopying><NSCoding>)enumeration;
-(void)setEnumeration:(id<NSCopying><NSCoding>)arg1 ;
-(id)initWithContentItemClass:(Class)arg1 contentPropertyName:(id)arg2 comparisonOperator:(long long)arg3 removable:(BOOL)arg4 ;
-(Class)contentItemClass;
-(NSString *)contentPropertyName;
-(NSNumber *)boolean;
-(void)setBoolean:(NSNumber *)arg1 ;
-(void)setCalendarUnit:(NSNumber *)arg1 ;
-(NSNumber *)byteCountUnit;
-(void)setByteCountUnit:(NSNumber *)arg1 ;
-(NSDate *)anotherDate;
-(void)setAnotherDate:(NSDate *)arg1 ;
@end


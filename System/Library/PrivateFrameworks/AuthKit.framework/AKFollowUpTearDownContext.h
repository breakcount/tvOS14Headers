/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	NSString* _akAction;
	NSString* _altDSID;

}

@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * akAction;                    //@synthesize akAction=_akAction - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)akAction;
-(void)setAkAction:(NSString *)arg1 ;
@end


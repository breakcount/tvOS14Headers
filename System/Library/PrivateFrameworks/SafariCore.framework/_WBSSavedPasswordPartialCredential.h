/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtectionSpace, NSDate, NSData;

@interface _WBSSavedPasswordPartialCredential : NSObject {

	NSURLProtectionSpace* _protectionSpace;
	NSDate* _date;
	NSData* _persistentIdentifier;

}

@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSData * persistentIdentifier;                       //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(NSDate *)date;
-(NSURLProtectionSpace *)protectionSpace;
-(NSData *)persistentIdentifier;
-(id)initWithProtectionSpace:(id)arg1 date:(id)arg2 persistentIdentifier:(id)arg3 ;
@end

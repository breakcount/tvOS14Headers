/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSData;

@interface ICSuzeLeaseResponse : NSObject {

	NSDate* _requestDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * clientData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
-(NSData *)clientData;
-(NSDate *)leaseExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 ;
@end

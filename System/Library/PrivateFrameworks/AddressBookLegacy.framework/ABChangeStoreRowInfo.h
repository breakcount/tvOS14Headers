/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABChangeStoreRowInfo : NSObject {

	int _consumedSequenceNumber;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) int consumedSequenceNumber;               //@synthesize consumedSequenceNumber=_consumedSequenceNumber - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(int)consumedSequenceNumber;
-(void)setConsumedSequenceNumber:(int)arg1 ;
@end


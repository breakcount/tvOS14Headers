/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface IMAttachment : NSObject {

	NSString* _guid;
	NSString* _path;
	BOOL _isSticker;
	BOOL _isTransferComplete;
	NSDate* _createdDate;

}
-(id)description;
-(id)path;
-(id)guid;
-(id)createdDate;
-(BOOL)isSticker;
-(id)initWithPath:(id)arg1 guid:(id)arg2 ;
-(id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(BOOL)arg4 isTransferComplete:(BOOL)arg5 ;
-(id)fileTransfer;
-(BOOL)isTransferComplete;
@end


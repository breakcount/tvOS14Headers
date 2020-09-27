/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject {

	NSMutableDictionary* _blockMap;

}
+(id)sharedInstance;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)_mapCopier:(id)arg1 toBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)_blockForCopier:(id)arg1 ;
-(void)_unmapCopier:(id)arg1 ;
-(void)compressFileTransfer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end


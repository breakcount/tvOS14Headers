/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UARPXPCConsumer.h>

@protocol UARPXPCConsumer;
@class NSString;

@interface UARPControllerExportedObject : NSObject <UARPXPCConsumer> {

	id<UARPXPCConsumer> _delegate;

}

@property (__weak,readonly) id<UARPXPCConsumer> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UARPXPCConsumer>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2 ;
@end


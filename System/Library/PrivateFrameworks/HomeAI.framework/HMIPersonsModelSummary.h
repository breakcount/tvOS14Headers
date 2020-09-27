/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSDictionary;

@interface HMIPersonsModelSummary : HMFObject {

	BOOL _externalLibrary;
	NSUUID* _sourceUUID;
	NSDictionary* _faceCountsByPerson;

}

@property (readonly) NSUUID * sourceUUID;                                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (getter=isExternalLibrary,readonly) BOOL externalLibrary;              //@synthesize externalLibrary=_externalLibrary - In the implementation block
@property (readonly) NSDictionary * faceCountsByPerson;                          //@synthesize faceCountsByPerson=_faceCountsByPerson - In the implementation block
-(NSUUID *)sourceUUID;
-(id)initWithSourceUUID:(id)arg1 externalLibrary:(BOOL)arg2 faceCountsByPerson:(id)arg3 ;
-(BOOL)isExternalLibrary;
-(NSDictionary *)faceCountsByPerson;
@end

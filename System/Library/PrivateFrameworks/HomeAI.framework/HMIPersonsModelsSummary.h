/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet;

@interface HMIPersonsModelsSummary : HMFObject {

	NSSet* _modelSummaries;
	unsigned long long _homeToExternalEquivalencies;
	unsigned long long _externalToExternalEquivalencies;

}

@property (readonly) NSSet * modelSummaries;                                          //@synthesize modelSummaries=_modelSummaries - In the implementation block
@property (readonly) unsigned long long homeToExternalEquivalencies;                  //@synthesize homeToExternalEquivalencies=_homeToExternalEquivalencies - In the implementation block
@property (readonly) unsigned long long externalToExternalEquivalencies;              //@synthesize externalToExternalEquivalencies=_externalToExternalEquivalencies - In the implementation block
-(NSSet *)modelSummaries;
-(unsigned long long)homeToExternalEquivalencies;
-(unsigned long long)externalToExternalEquivalencies;
-(id)initWithModelSummaries:(id)arg1 homeToExternalEquivalencies:(unsigned long long)arg2 externalToExternalEquivalencies:(unsigned long long)arg3 ;
@end


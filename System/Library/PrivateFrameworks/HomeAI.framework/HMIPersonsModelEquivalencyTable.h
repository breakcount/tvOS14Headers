/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDictionary, NSString;

@interface HMIPersonsModelEquivalencyTable : HMFObject <HMFLogging> {

	NSDictionary* _personToEquivalencyCell;

}

@property (readonly) NSDictionary * personToEquivalencyCell;              //@synthesize personToEquivalencyCell=_personToEquivalencyCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWith;
-(id)initWithPersonsModels:(id)arg1 userDefinedPersonLinks:(id)arg2 error:(id*)arg3 ;
-(id)equivalencyCellForPerson:(id)arg1 ;
-(NSDictionary *)personToEquivalencyCell;
-(BOOL)facesAreSamePersonFromSet:(id)arg1 andSet:(id)arg2 ;
-(BOOL)facesAreSamePersonFromSet:(id)arg1 andSet:(id)arg2 distanceThreshold:(double)arg3 percentMatchingThreshold:(double)arg4 ;
@end


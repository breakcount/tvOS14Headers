/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriOntology/SiriOntology-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface USOGraph : NSObject <NSSecureCoding> {

	unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph> >* _usoGraph;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)getRoot;
-(id)initWithCppUsoGraph:(unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph> >*)arg1 ;
-(id)createOperatorNode:(const OntologyNodeName*)arg1 ;
-(id)createEntityNode:(const OntologyNodeName*)arg1 ;
-(id)createTaskNode:(const OntologyNodeName*)arg1 verb:(const OntologyVerbName*)arg2 ;
-(id)createStringNode:(id)arg1 ;
-(id)createIntNode:(id)arg1 ;
-(UsoRootNode*)getCppRootNode;
-(UsoGraph*)getCppGraph;
@end

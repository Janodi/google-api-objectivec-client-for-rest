// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Broker API (servicebroker/v1)
// Description:
//   The Google Cloud Platform Service Broker API provides Google hosted
//   implementation of the Open Service Broker API
//   (https://www.openservicebrokerapi.org/).
// Documentation:
//   https://cloud.google.com/kubernetes-engine/docs/concepts/add-on/service-broker

#import "GTLRServiceBrokerObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRServiceBroker_GoogleIamV1Binding
//

@implementation GTLRServiceBroker_GoogleIamV1Binding
@dynamic members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceBroker_GoogleIamV1Policy
//

@implementation GTLRServiceBroker_GoogleIamV1Policy
@dynamic bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRServiceBroker_GoogleIamV1Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceBroker_GoogleIamV1SetIamPolicyRequest
//

@implementation GTLRServiceBroker_GoogleIamV1SetIamPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceBroker_GoogleIamV1TestIamPermissionsRequest
//

@implementation GTLRServiceBroker_GoogleIamV1TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRServiceBroker_GoogleIamV1TestIamPermissionsResponse
//

@implementation GTLRServiceBroker_GoogleIamV1TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end

// in memory cache for caching GraphQL data 
let cache = ApolloInMemoryCache.createInMemoryCache();

let link = ApolloLinks.createHttpLink(
  ~uri="http://localhost:8080/graphql",
  ()
);

// apollo client instance
let instance = ReasonApollo.createApolloClient(~link, ~cache, ());


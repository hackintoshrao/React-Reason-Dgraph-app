## ReasonReact and GraphQL blog application powered by Dgraph

Simple blog application using Reason React using the GraphQL API powered by Dgraph.

#### Running Dgraph GraphQL API

```sh
$ git clone https://github.com/hackintoshrao/React-Reason-Dgraph-app.git
$ cd React-Reason-Dgraph-app
$ docker run -it -p 8080:8080 dgraph/standalone:v1.2.0-rc1
$ jq -n --arg schema "$(cat schema.graphql)" '{ query: "mutation updateGQLSchema($sch: String!) { updateGQLSchema(input: { set: { schema: $sch }}) { gqlSchema { schema } } }", variables: { sch: $schema }}' | curl -X POST -H "Content-Type: application/json" http://localhost:8080/admin -d @- | jq -r

```


#### Mutations using the GraphQL playground
- Connect to http://localhost:8080/graphql
- Add data using the following mutation.

```graphql
# Write your query or mutation here
mutation {
  addAuthor(input:[{name: "Karthic", posts: [{title: "Reason React"}]}]){
    author {id}
  }
}
```


#### Running the ReasonReact App
- npm i

- npx send-introspection-query http://localhost:8080/graphql

- npm start 

- npm run webpack

- npm install -g serve && serve -s -p 3000 build

- Visit http://localhost:3000



  [@react.component]
  let make = () => {
    <GraphQLQueries.GetAllBlogPostsQuery>
      ...{
        ({result}) => switch(result) {
          | Loading => <div>{ReasonReact.string("Loading")}</div>
          | Error(error) => {
            Js.Console.error(error);
            <div>{ReasonReact.string("Loading")}</div>
          }
          | Data(data) => 
            switch (data##queryPost) {
            | Some(posts) =>
              posts
              |> Array.map(fun 
              | Some(post) =>
                   <div className="container">
                     /* {ReasonReact.string(post##text)} */
                     /* <Post post /> */
                     /* {post##text} */
                    
                     <div className="card col-12 mb-3">
                     <div className="card-body">
                       <h5 className="card-title">{ReasonReact.string("Title: ")}{ReasonReact.string(post##title)}</h5>
                       <h6 className="card-subtitle mb-2 text-muted">
                         {ReasonReact.string("by ")}{ReasonReact.string(post##author##name)}
                       </h6>
                     </div>
                   </div>
                     
                   </div>
                 )
              |> ReasonReact.array
            }
        }
      }
    </GraphQLQueries.GetAllBlogPostsQuery>;
  }
/*  {. "isPublished": option(bool), "numLikes": option(int),
      "text": option(string), "title": string} */

      /* let make = () => {
    <GraphQLQueries.GetBlogPostQuery>
      ...{
        ({result}) => switch(result) {
          | Loading => <div>{ReasonReact.string("Loading")}</div>
          | Error(error) => {
            Js.Console.error(error);
            <div>{ReasonReact.string("Loading")}</div>
          }
          | Data(data) => ReasonReact.string({
              data##getPost
              -> Belt.Option.flatMap(getPost => getPost##text)
              -> Belt.Option.mapWithDefault("", text => text)
          })
        }
      }
    </GraphQLQueries.GetBlogPostQuery>;
  } */
  /* (option({. "author": {. "dob": option(Js.Json.t), "id": string,
                           "name": string},
              "isPublished": option(bool), "numLikes": option(int),
              "postID": string, "text": option(string), "title": string}) =>
     option('a)) =>
    array('a) */


/* type author */

module GetAllBlogPosts = [%graphql
  {|
     query GetAllBlogPosts {
       queryPost {
      postID
      title
      text
      numLikes
      isPublished
      author {
        id
        name
        dob
      }
    }
  }
  |}
];
module GetAllBlogPostsQuery = ReasonApollo.CreateQuery(GetAllBlogPosts);

module GetBlogPost = [%graphql
{|
   query GetBlogPost {
     getPost(postID: "0x4") {
    title
    text
    numLikes
    isPublished
  }
}
|}
];

module GetBlogPostQuery = ReasonApollo.CreateQuery(GetBlogPost);
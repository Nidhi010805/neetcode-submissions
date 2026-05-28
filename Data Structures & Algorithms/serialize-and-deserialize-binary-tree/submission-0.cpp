class Codec {
public:

    void fs(TreeNode* root, string &s) {
        if (!root) {
            s += "null,";
            return;
        }

        s += to_string(root->val) + ",";
        fs(root->left, s);
        fs(root->right, s);
    }

    TreeNode* df(queue<string> &q) {
        string val = q.front();
        q.pop();

        if (val == "null") return nullptr;

        TreeNode* root = new TreeNode(stoi(val));
        root->left = df(q);
        root->right = df(q);

        return root;
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        fs(root, s);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string temp = "";

        for (char ch : data) {
            if (ch == ',') {
                if (!temp.empty())
                    q.push(temp);
                temp = "";
            } else {
                temp += ch;
            }
        }

        return df(q);
    }
};
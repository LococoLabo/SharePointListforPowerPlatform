= SharePointリストの追加機能

SharePointリストの上部には共有、エクスポートなどのメニューがあります。このページでは、SharePointリストの「共有、エクスポート、Forms」の設定ならびにリストの権限設定について詳しく説明します。

== 共有

SharePointリストの共有機能は、データをチームメンバーや外部パートナーと簡単に共有することを可能にします。共有設定を通じて、特定のユーザーやグループに対してリストへのアクセス権を付与できます。

* **共有の設定方法**:
  1. **リストの上部メニューから「共有」を選択**: リストの共有オプションをクリックします。
  2. **共有相手の指定**: ユーザーやグループのメールアドレスを入力します。
  3. **権限レベルの選択**: 編集権限や閲覧権限など、適切な権限レベルを選択します。
  4. **共有リンクの送信**: 設定が完了したら、共有リンクを送信します。

@image(share_list.jpg)

== エクスポート

SharePointリストは、エクスポート機能を利用してExcelやCSV形式でデータを出力できます。
これにより、外部ツールでのデータ分析や報告書の作成が容易になります。

* **エクスポートの方法**:
  1. **リストの上部メニューから「エクスポート」を選択**: 「Excelにエクスポート」または「CSVにエクスポート」を選択します。
  2. **エクスポートの確認**: エクスポート形式を確認し、エクスポートを開始します。
  3. **データのダウンロード**: エクスポートされたファイルをダウンロードし、必要なツールで開きます。

@image(export_list.jpg)

== Forms

Microsoft Formsを使用して、SharePointリストに入力フォームを簡単に作成できます。これにより、ユーザーは直感的にデータを入力しやすくなります。

* **Formsの設定方法**:
  1. **リストの上部メニューから「Forms」を選択**: 「Microsoft Forms」を選択します。
  2. **新しいフォームまたは既存のフォームを選択**: 編集したいフォームを選択します。
  3. **フォーム ビルダーで編集**: 表示の画面からフォームの編集を行います。
  4. **フォームの共有**: フォームを作成したら、「フォームの送信」タブから共有リンクを生成し、ユーザーに送信します。

//image[Form0][フォームの選択画面]
//image[Form1][フォーム ビルダー]
//image[Form2][フォーム ビルダーで編集後のフォーム]


//image[Form3][新しいフィールドを追加するのオプション]

//image[Form4][フォームの送信]
//image[Form5][送信されたフォームの画面]


== 権限設定

SharePointリストの権限設定は、データのセキュリティと適切なアクセス管理を行う上で非常に重要です。
この章では、権限を設定することの重要性、サイトとリストの権限の違いを知り、権限の設定方法について体系的に説明します。

=== 権限を設定することの重要性

SharePointリストの権限設定は、データを適切に保護し、必要なユーザーだけがアクセスできるようにするために不可欠です。適切な権限管理を行うことで、データのセキュリティを強化し、情報漏洩を防止します。また、ユーザーが必要な情報に迅速にアクセスできるようにすることで、業務効率を向上させます。

==== 権限設定のメリット

* **データセキュリティの強化**: 不正アクセスを防止し、データの機密性を保護します。
* **業務効率の向上**: 必要な情報に迅速にアクセスできるため、業務の効率が向上します。
* **コンプライアンスの遵守**: 法律や規制に準拠したデータ管理が可能になります。

=== サイトとリストの権限の違い

SharePointでは、サイト全体の権限と、個別のリストやライブラリに対する権限を設定することができます。それぞれの権限設定には特徴があります。

==== サイトの権限

サイトの権限は、サイト全体に対するアクセス権を管理します。通常、サイトの権限はリストやライブラリにも継承されますが、必要に応じてリストやライブラリごとに個別の権限を設定することも可能です。

* **サイトの権限設定方法**:
  1. **サイト設定を開く**: サイトの歯車アイコンをクリックし、「サイト設定」を選択します。
  2. **サイトの権限を管理**: 「ユーザーと権限」セクションで「サイトの権限」をクリックします。
  3. **グループまたはユーザーの追加**: 権限を付与するグループまたはユーザーを追加し、適切な権限レベルを割り当てます。

@image(site_permissions_management.jpg)

==== リストの権限

リストの権限は、特定のリストやライブラリに対するアクセス権を管理します。リストの権限は、サイトの権限を継承するか、独立した権限を設定するかを選択できます。

* **リストの権限設定方法**:
  1. **リスト設定を開く**: リストの歯車アイコンをクリックし、「リスト設定」を選択します。
  2. **リストの権限を管理**: 「権限と管理」セクションで「このリストの権限」をクリックします。
  3. **継承の停止**: 「親からの権限の継承を停止」をクリックして、独自の権限を設定します。
  4. **グループまたはユーザーの追加**: 権限を付与するグループまたはユーザーを追加し、適切な権限レベルを割り当てます。

@image(list_permissions_management.jpg)

=== 権限レベルの詳細

SharePointには、いくつかの標準的な権限レベルが用意されています。必要に応じてカスタム権限レベルを作成することも可能です。

==== 標準的な権限レベル

* **閲覧**: アイテムを表示することができますが、編集や削除はできません。
* **編集**: アイテムを追加、編集、および削除できます。
* **フルコントロール**: 全ての権限を持ち、リストやライブラリの設定を変更できます。

==== カスタム権限レベルの作成

* **カスタム権限レベルの設定方法**:
  1. **サイトの権限ページを開く**: サイト設定から「サイトの権限」を選択します。
  2. **権限レベルの定義**: 「権限レベル」をクリックし、「権限レベルの追加」を選択します。
  3. **カスタム権限の設定**: 名前と説明を入力し、必要な権限を選択して保存します。

@image(custom_permission_level.jpg)

=== 特定のユーザーへの権限設定

特定のユーザーに対して、リストやアイテムごとに異なる権限を設定することも可能です。

==== ユーザーごとの権限設定手順

* **ユーザーの追加と権限設定**:
  1. **リストの権限設定ページを開く**: 「リスト設定」から「このリストの権限」を選択します。
  2. **ユーザーの追加**: 「ユーザーまたはグループを招待」をクリックします。
  3. **権限の割り当て**: 追加したユーザーに適切な権限レベルを選択して設定します。

@image(user_specific_permissions.jpg)

=== アイテムごとの権限設定

特定のアイテムに対して個別に権限を設定することも可能です。これにより、リスト全体の権限とは異なる設定を行うことができます。

==== アイテムごとの権限設定手順

* **アイテムごとの権限設定**:
  1. **アイテムのオプションを開く**: 設定したいアイテムの「・・・」をクリックし、「権限」を選択します
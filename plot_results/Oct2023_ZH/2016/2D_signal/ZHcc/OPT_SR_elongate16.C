#ifdef __CLING__
#pragma cling optimize(0)
#endif
void OPT_SR_elongate16()
{
//=========Macro generated from canvas: OPT_SR_elongate16/OPT_SR_elongate16
//=========  (Wed Oct  4 11:52:58 2023) by ROOT version 6.28/04
   TCanvas *OPT_SR_elongate16 = new TCanvas("OPT_SR_elongate16", "OPT_SR_elongate16",0,0,600,600);
   OPT_SR_elongate16->SetHighLightColor(2);
   OPT_SR_elongate16->Range(-3.5625,-0.1537296,22.5625,1.050914);
   OPT_SR_elongate16->SetFillColor(0);
   OPT_SR_elongate16->SetFillStyle(4000);
   OPT_SR_elongate16->SetBorderMode(0);
   OPT_SR_elongate16->SetBorderSize(2);
   OPT_SR_elongate16->SetFrameFillStyle(1000);
   OPT_SR_elongate16->SetFrameBorderMode(0);
   OPT_SR_elongate16->SetFrameFillStyle(1000);
   OPT_SR_elongate16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Percentages of Events inside Regions");
   
   Double_t Graph_fx5[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy5[20] = { 0.7999309, 0.805033, 0.8113351, 0.8187397, 0.8254661, 0.8333207, 0.8418315, 0.848525, 0.8541917, 0.8577221, 0.8610755, 0.866643, 0.8683219, 0.8734903, 0.8756985, 0.8790315, 0.8804772,
   0.8823044, 0.8852175, 0.8866448 };
   TGraph *graph = new TGraph(20,Graph_fx5,Graph_fy5);
   graph->SetName("Graph");
   graph->SetTitle("SR");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","SR",100,0,20.9);
   Graph_Graph5->SetMinimum(0.7912596);
   Graph_Graph5->SetMaximum(0.8953161);
   Graph_Graph5->SetDirectory(nullptr);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetTitleOffset(1);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetTitleOffset(1);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx6[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy6[20] = { 0.1161065, 0.1149373, 0.1099365, 0.1056726, 0.101596, 0.09665871, 0.08895071, 0.0845448, 0.08043206, 0.08212709, 0.08142674, 0.07680167, 0.07655106, 0.07193994, 0.07018298, 0.06776049, 0.06709813,
   0.06630904, 0.06452955, 0.06355582 };
   graph = new TGraph(20,Graph_fx6,Graph_fy6);
   graph->SetName("Graph");
   graph->SetTitle("VR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","VR",100,0,20.9);
   Graph_Graph6->SetMinimum(0.05830075);
   Graph_Graph6->SetMaximum(0.1213616);
   Graph_Graph6->SetDirectory(nullptr);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetTitleOffset(1);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetTitleOffset(1);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx7[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy7[20] = { 0.01908148, 0.01862427, 0.01779637, 0.01779637, 0.01649187, 0.01589133, 0.01545125, 0.01472592, 0.01472592, 0.01416378, 0.01310578, 0.01310578, 0.01283307, 0.01239275, 0.01185163, 0.01097857, 0.01097857,
   0.01097857, 0.01054001, 0.01054001 };
   graph = new TGraph(20,Graph_fx7,Graph_fy7);
   graph->SetName("Graph");
   graph->SetTitle("other");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","other",100,0,20.9);
   Graph_Graph7->SetMinimum(0.009685859);
   Graph_Graph7->SetMaximum(0.01993562);
   Graph_Graph7->SetDirectory(nullptr);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetTitleOffset(1);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetTitleOffset(1);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx8[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
   17, 18, 19 };
   Double_t Graph_fy8[20] = { 0.06488107, 0.06140545, 0.06093203, 0.05779134, 0.05644611, 0.05412922, 0.05376652, 0.0522043, 0.05065034, 0.04598705, 0.04439198, 0.04344958, 0.04229399, 0.04217704, 0.04226693, 0.0422294, 0.04144607,
   0.04040803, 0.03971293, 0.03925942 };
   graph = new TGraph(20,Graph_fx8,Graph_fy8);
   graph->SetName("Graph");
   graph->SetTitle("CR");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","CR",100,0,20.9);
   Graph_Graph8->SetMinimum(0.03669726);
   Graph_Graph8->SetMaximum(0.06744323);
   Graph_Graph8->SetDirectory(nullptr);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetTitleOffset(1);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetTitleOffset(1);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"");
   multigraph->Draw("AC");
   multigraph->GetXaxis()->SetLimits(-0.95, 19.95);
   multigraph->GetXaxis()->SetTitle("|major axis - minor axis| [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("percentage of events");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.1,0.5,0.3,0.7,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","SR","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","VR","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","other","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","CR","lp");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9341608,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Percentages of Events inside Regions");
   pt->Draw();
   OPT_SR_elongate16->Modified();
   OPT_SR_elongate16->cd();
   OPT_SR_elongate16->SetSelected(OPT_SR_elongate16);
}

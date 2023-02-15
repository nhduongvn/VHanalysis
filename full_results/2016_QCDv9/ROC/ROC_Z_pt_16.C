#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_16()
{
//=========Macro generated from canvas: ROC_Z_pt_16/ROC_Z_pt_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_16 = new TCanvas("ROC_Z_pt_16", "ROC_Z_pt_16",0,0,600,600);
   ROC_Z_pt_16->SetHighLightColor(2);
   ROC_Z_pt_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_16->SetFillColor(0);
   ROC_Z_pt_16->SetBorderMode(0);
   ROC_Z_pt_16->SetBorderSize(2);
   ROC_Z_pt_16->SetGridx();
   ROC_Z_pt_16->SetGridy();
   ROC_Z_pt_16->SetLeftMargin(0.15709);
   ROC_Z_pt_16->SetRightMargin(0.1234783);
   ROC_Z_pt_16->SetBottomMargin(0.12);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx210[41] = {
   0,
   9.303062e-08,
   2.015799e-07,
   3.708724e-07,
   5.58532e-07,
   7.438566e-07,
   1.103048e-06,
   1.509262e-06,
   2.020325e-06,
   2.723449e-06,
   3.659115e-06,
   4.841031e-06,
   6.564594e-06,
   8.901847e-06,
   1.168462e-05,
   1.519639e-05,
   2.032995e-05,
   2.69661e-05,
   3.595509e-05,
   4.777517e-05,
   6.467897e-05,
   8.729981e-05,
   0.0001194291,
   0.0001632825,
   0.0002252734,
   0.0003116262,
   0.0004372592,
   0.0006223123,
   0.0008843239,
   0.001284526,
   0.001936241,
   0.002995577,
   0.004804203,
   0.008101245,
   0.01448094,
   0.02749892,
   0.05944198,
   0.1371605,
   0.3677826,
   0.7930868,
   1};
   Double_t Graph_fy210[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.738688e-05,
   2.738688e-05,
   5.489909e-05,
   5.489909e-05,
   0.000101185,
   0.000101185,
   0.0001275917,
   0.0001496341,
   0.0002034554,
   0.0003173146,
   0.001163987,
   0.002103702,
   0.00485159,
   0.006623428,
   0.01043374,
   0.02213409,
   0.04464343,
   0.08350811,
   0.1554356,
   0.2876297,
   0.5290262,
   0.8451194,
   1};
   TGraph *graph = new TGraph(41,Graph_fx210,Graph_fy210);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Only");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph210 = new TH1F("Graph_Graph210","Tagging Only",100,0,1.1);
   Graph_Graph210->SetMinimum(0);
   Graph_Graph210->SetMaximum(1.1);
   Graph_Graph210->SetDirectory(0);
   Graph_Graph210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph210->SetLineColor(ci);
   Graph_Graph210->GetXaxis()->SetLabelFont(42);
   Graph_Graph210->GetXaxis()->SetTitleOffset(1);
   Graph_Graph210->GetXaxis()->SetTitleFont(42);
   Graph_Graph210->GetYaxis()->SetLabelFont(42);
   Graph_Graph210->GetYaxis()->SetTitleFont(42);
   Graph_Graph210->GetZaxis()->SetLabelFont(42);
   Graph_Graph210->GetZaxis()->SetTitleOffset(1);
   Graph_Graph210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph210);
   
   TLatex *   tex = new TLatex(0.4067137,0.7472905,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(211);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx212[41] = {
   0,
   1.614015e-07,
   2.683237e-07,
   5.737122e-07,
   6.877346e-07,
   9.990416e-07,
   1.38554e-06,
   2.116749e-06,
   2.614303e-06,
   3.270354e-06,
   4.119793e-06,
   5.391542e-06,
   7.303741e-06,
   1.033718e-05,
   1.3489e-05,
   1.744677e-05,
   2.243939e-05,
   2.931113e-05,
   3.834026e-05,
   4.906384e-05,
   6.691328e-05,
   8.974505e-05,
   0.0001239962,
   0.0001679734,
   0.0002279815,
   0.0003209671,
   0.000432245,
   0.0006042196,
   0.0008532374,
   0.001227395,
   0.001863764,
   0.002962081,
   0.004886919,
   0.008227173,
   0.01489254,
   0.02872567,
   0.06100446,
   0.1461415,
   0.4067137,
   0.891661,
   1};
   Double_t Graph_fy212[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001055894,
   0.001186618,
   0.00317859,
   0.00460384,
   0.01008002,
   0.02553632,
   0.0485738,
   0.09086745,
   0.1762436,
   0.3358404,
   0.6472905,
   0.9422098,
   1};
   graph = new TGraph(41,Graph_fx212,Graph_fy212);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph212 = new TH1F("Graph_Graph212","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph212->SetMinimum(0);
   Graph_Graph212->SetMaximum(1.1);
   Graph_Graph212->SetDirectory(0);
   Graph_Graph212->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph212->SetLineColor(ci);
   Graph_Graph212->GetXaxis()->SetLabelFont(42);
   Graph_Graph212->GetXaxis()->SetTitleOffset(1);
   Graph_Graph212->GetXaxis()->SetTitleFont(42);
   Graph_Graph212->GetYaxis()->SetLabelFont(42);
   Graph_Graph212->GetYaxis()->SetTitleFont(42);
   Graph_Graph212->GetZaxis()->SetLabelFont(42);
   Graph_Graph212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph212->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph212);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx213[41] = {
   0,
   9.75674e-08,
   2.038301e-07,
   3.760524e-07,
   5.814562e-07,
   7.780344e-07,
   1.163139e-06,
   1.571709e-06,
   2.082563e-06,
   2.800051e-06,
   3.77624e-06,
   4.975041e-06,
   6.751633e-06,
   9.131876e-06,
   1.199657e-05,
   1.565087e-05,
   2.092892e-05,
   2.780086e-05,
   3.712863e-05,
   4.927482e-05,
   6.665793e-05,
   8.995715e-05,
   0.0001231428,
   0.0001678246,
   0.0002312386,
   0.0003197263,
   0.000448659,
   0.0006382413,
   0.0009066798,
   0.001313654,
   0.001974254,
   0.003053615,
   0.004881095,
   0.008227044,
   0.01467404,
   0.02783041,
   0.05984423,
   0.1378125,
   0.3689527,
   0.7924869,
   1};
   Double_t Graph_fy213[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.670038e-05,
   2.670038e-05,
   5.352295e-05,
   5.352295e-05,
   9.864859e-05,
   9.864859e-05,
   0.0001243934,
   0.0001458832,
   0.0001983554,
   0.0003093606,
   0.00113481,
   0.002050969,
   0.004946324,
   0.006501115,
   0.01027261,
   0.02227644,
   0.04473319,
   0.08311618,
   0.1549111,
   0.2885493,
   0.5312582,
   0.8462697,
   1};
   graph = new TGraph(41,Graph_fx213,Graph_fy213);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph213 = new TH1F("Graph_Graph213","Tagging Prioritized",100,0,1.1);
   Graph_Graph213->SetMinimum(0);
   Graph_Graph213->SetMaximum(1.1);
   Graph_Graph213->SetDirectory(0);
   Graph_Graph213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph213->SetLineColor(ci);
   Graph_Graph213->GetXaxis()->SetLabelFont(42);
   Graph_Graph213->GetXaxis()->SetTitleOffset(1);
   Graph_Graph213->GetXaxis()->SetTitleFont(42);
   Graph_Graph213->GetYaxis()->SetLabelFont(42);
   Graph_Graph213->GetYaxis()->SetTitleFont(42);
   Graph_Graph213->GetZaxis()->SetLabelFont(42);
   Graph_Graph213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph213->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph213);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Tagging Only","lpf");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_pt_16->Modified();
   ROC_Z_pt_16->cd();
   ROC_Z_pt_16->SetSelected(ROC_Z_pt_16);
}

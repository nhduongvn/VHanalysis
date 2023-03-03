#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_16()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_16/ROC_H_dR_Bj0_16
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_16 = new TCanvas("ROC_H_dR_Bj0_16", "ROC_H_dR_Bj0_16",0,0,600,600);
   ROC_H_dR_Bj0_16->SetHighLightColor(2);
   ROC_H_dR_Bj0_16->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj0_16->SetFillColor(0);
   ROC_H_dR_Bj0_16->SetBorderMode(0);
   ROC_H_dR_Bj0_16->SetBorderSize(2);
   ROC_H_dR_Bj0_16->SetGridx();
   ROC_H_dR_Bj0_16->SetGridy();
   ROC_H_dR_Bj0_16->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_16->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_16->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_16->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx43[30] = {
   0,
   0.03099149,
   0.1520439,
   0.2720123,
   0.374396,
   0.4639068,
   0.5349062,
   0.6039854,
   0.6565077,
   0.6992327,
   0.7406267,
   0.7765249,
   0.8111876,
   0.8407154,
   0.8735974,
   0.8994011,
   0.922856,
   0.9404974,
   0.9533885,
   0.9660788,
   0.9762443,
   0.9817904,
   0.9868817,
   0.9895152,
   0.9954128,
   0.9973574,
   0.9983233,
   0.9992795,
   0.9996824,
   0.999882};
   Double_t Graph_fy43[30] = {
   0,
   0.02344303,
   0.1583139,
   0.3221639,
   0.4755403,
   0.5932721,
   0.6693157,
   0.7280583,
   0.7751252,
   0.8137328,
   0.8411649,
   0.8644271,
   0.8926292,
   0.9135554,
   0.934073,
   0.9517568,
   0.9711382,
   0.9768528,
   0.9831332,
   0.9889136,
   0.9939004,
   0.9948982,
   0.9967577,
   0.9976193,
   0.9978236,
   0.9991384,
   0.9997957,
   0.9999319,
   0.9999319,
   0.9999319};
   TGraph *graph = new TGraph(30,Graph_fx43,Graph_fy43);
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
   
   TH1F *Graph_Graph43 = new TH1F("Graph_Graph43","Tagging Only",100,0,1.09987);
   Graph_Graph43->SetMinimum(0);
   Graph_Graph43->SetMaximum(1.099925);
   Graph_Graph43->SetDirectory(0);
   Graph_Graph43->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph43->SetLineColor(ci);
   Graph_Graph43->GetXaxis()->SetLabelFont(42);
   Graph_Graph43->GetXaxis()->SetTitleOffset(1);
   Graph_Graph43->GetXaxis()->SetTitleFont(42);
   Graph_Graph43->GetYaxis()->SetLabelFont(42);
   Graph_Graph43->GetYaxis()->SetTitleFont(42);
   Graph_Graph43->GetZaxis()->SetLabelFont(42);
   Graph_Graph43->GetZaxis()->SetTitleOffset(1);
   Graph_Graph43->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph43);
   
   TLatex *   tex = new TLatex(0.3673923,0.5328603,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(44);
      tex = new TLatex(0.5975193,0.8207464,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(45);
      tex = new TLatex(0.7092199,0.9341562,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(46);
      tex = new TLatex(0.7934941,1.000662,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(47);
      tex = new TLatex(0.8455093,1.0221,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(48);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx49[30] = {
   0,
   0.1075446,
   0.3673923,
   0.5975193,
   0.7092199,
   0.7934941,
   0.8455093,
   0.909837,
   0.9422385,
   0.9587296,
   0.9688332,
   0.9751318,
   0.9813311,
   0.9874573,
   0.9901175,
   0.9937754,
   0.9963346,
   0.9972263,
   0.9976964,
   0.9980838,
   0.9982146,
   0.9999014,
   0.9999193,
   0.9999252,
   0.9999646,
   0.9999688,
   0.9999968,
   0.9999982,
   0.9999989,
   0.9999997};
   Double_t Graph_fy49[30] = {
   0,
   0.09655692,
   0.4328603,
   0.7207464,
   0.8941562,
   0.9606618,
   0.9821001,
   0.9877495,
   0.9905247,
   0.9916744,
   0.994737,
   0.9972248,
   0.9972248,
   0.9975122,
   0.9977997,
   0.9977997,
   0.9977997,
   0.9977997,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx49,Graph_fy49);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph49->SetMinimum(0);
   Graph_Graph49->SetMaximum(1.1);
   Graph_Graph49->SetDirectory(0);
   Graph_Graph49->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph49->SetLineColor(ci);
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetTitleOffset(1);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetTitleOffset(1);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph49);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx50[30] = {
   0,
   0.0311354,
   0.1520131,
   0.2717435,
   0.3738323,
   0.4635677,
   0.5344995,
   0.6032967,
   0.6558814,
   0.6991884,
   0.7404945,
   0.7765757,
   0.8112356,
   0.8407274,
   0.8734025,
   0.8997027,
   0.9231773,
   0.9407659,
   0.9536765,
   0.9662385,
   0.9763585,
   0.9818509,
   0.9869821,
   0.9896269,
   0.9954877,
   0.9974039,
   0.9983568,
   0.9992908,
   0.9996866,
   0.9998827};
   Double_t Graph_fy50[30] = {
   0,
   0.0236063,
   0.1579796,
   0.3223104,
   0.4751056,
   0.5940458,
   0.6694102,
   0.7270007,
   0.7737451,
   0.8123141,
   0.8406851,
   0.8636018,
   0.8912371,
   0.9123042,
   0.9331039,
   0.9505411,
   0.9701577,
   0.9764168,
   0.9825858,
   0.9888426,
   0.9939416,
   0.9949218,
   0.9968151,
   0.9976615,
   0.9978621,
   0.9991536,
   0.9997994,
   0.9999331,
   0.9999331,
   0.9999331};
   graph = new TGraph(30,Graph_fx50,Graph_fy50);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph50 = new TH1F("Graph_Graph50","Tagging Prioritized",100,0,1.099871);
   Graph_Graph50->SetMinimum(0);
   Graph_Graph50->SetMaximum(1.099926);
   Graph_Graph50->SetDirectory(0);
   Graph_Graph50->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph50->SetLineColor(ci);
   Graph_Graph50->GetXaxis()->SetLabelFont(42);
   Graph_Graph50->GetXaxis()->SetTitleOffset(1);
   Graph_Graph50->GetXaxis()->SetTitleFont(42);
   Graph_Graph50->GetYaxis()->SetLabelFont(42);
   Graph_Graph50->GetYaxis()->SetTitleFont(42);
   Graph_Graph50->GetZaxis()->SetLabelFont(42);
   Graph_Graph50->GetZaxis()->SetTitleOffset(1);
   Graph_Graph50->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph50);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
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
   ROC_H_dR_Bj0_16->Modified();
   ROC_H_dR_Bj0_16->cd();
   ROC_H_dR_Bj0_16->SetSelected(ROC_H_dR_Bj0_16);
}

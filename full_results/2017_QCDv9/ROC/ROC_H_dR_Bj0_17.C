#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_17()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_17/ROC_H_dR_Bj0_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_17 = new TCanvas("ROC_H_dR_Bj0_17", "ROC_H_dR_Bj0_17",0,0,600,600);
   ROC_H_dR_Bj0_17->SetHighLightColor(2);
   ROC_H_dR_Bj0_17->Range(-0.2901322,-0.1615385,1.238557,1.184615);
   ROC_H_dR_Bj0_17->SetFillColor(0);
   ROC_H_dR_Bj0_17->SetBorderMode(0);
   ROC_H_dR_Bj0_17->SetBorderSize(2);
   ROC_H_dR_Bj0_17->SetGridx();
   ROC_H_dR_Bj0_17->SetGridy();
   ROC_H_dR_Bj0_17->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_17->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_17->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_17->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx50[30] = {
   0,
   0.03083187,
   0.1496834,
   0.2786947,
   0.3890774,
   0.4818782,
   0.5562824,
   0.6185307,
   0.6723495,
   0.7157109,
   0.7542739,
   0.7941387,
   0.8251678,
   0.8543307,
   0.8841393,
   0.9095046,
   0.9330736,
   0.9504244,
   0.9625498,
   0.9716687,
   0.9802625,
   0.984923,
   0.9891799,
   0.9928715,
   0.9945233,
   0.9967439,
   0.9984458,
   0.9992038,
   0.9994019,
   0.9995484};
   Double_t Graph_fy50[30] = {
   0,
   0.03090754,
   0.1562348,
   0.3105811,
   0.4415673,
   0.5519165,
   0.6377604,
   0.7070218,
   0.7624525,
   0.8073997,
   0.8416671,
   0.8708662,
   0.8952625,
   0.9169326,
   0.9363617,
   0.95633,
   0.9703399,
   0.9803042,
   0.9875479,
   0.9912946,
   0.9946932,
   0.9962612,
   0.9972896,
   0.998045,
   0.9988067,
   0.9992485,
   0.9997842,
   0.9998045,
   0.9999124,
   0.9999124};
   TGraph *graph = new TGraph(30,Graph_fx50,Graph_fy50);
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
   
   TH1F *Graph_Graph50 = new TH1F("Graph_Graph50","Tagging Only",100,0,1.099503);
   Graph_Graph50->SetMinimum(0);
   Graph_Graph50->SetMaximum(1.099904);
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
   
   TLatex *   tex = new TLatex(0.360481,0.4896609,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(51);
      tex = new TLatex(0.5787265,0.764133,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(52);
      tex = new TLatex(0.7330714,0.8632844,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(53);
      tex = new TLatex(0.8130077,0.9481878,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(54);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx55[30] = {
   0,
   0.09226152,
   0.360481,
   0.5787265,
   0.7330714,
   0.8130077,
   0.8777993,
   0.9230394,
   0.9433581,
   0.9642197,
   0.9717147,
   0.976197,
   0.9814855,
   0.9864595,
   0.9880474,
   0.9899992,
   0.9935837,
   0.9939105,
   0.9991977,
   0.9992521,
   0.9995013,
   0.999746,
   0.9997531,
   0.999758,
   0.999764,
   0.9997646,
   0.999765,
   0.9998067,
   0.9998069,
   0.999807};
   Double_t Graph_fy55[30] = {
   0,
   0.08454165,
   0.3896609,
   0.664133,
   0.8232844,
   0.9081878,
   0.9495008,
   0.9736539,
   0.9824895,
   0.9875057,
   0.9933496,
   0.9963993,
   0.9975776,
   0.9981759,
   0.9985845,
   0.9986794,
   0.9994017,
   0.9994491,
   0.9994965,
   0.999544,
   0.9999051,
   0.9999526,
   0.9999526,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx55,Graph_fy55);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph55 = new TH1F("Graph_Graph55","Mass-Matching Prioritized",100,0,1.099788);
   Graph_Graph55->SetMinimum(0);
   Graph_Graph55->SetMaximum(1.1);
   Graph_Graph55->SetDirectory(0);
   Graph_Graph55->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph55->SetLineColor(ci);
   Graph_Graph55->GetXaxis()->SetLabelFont(42);
   Graph_Graph55->GetXaxis()->SetTitleOffset(1);
   Graph_Graph55->GetXaxis()->SetTitleFont(42);
   Graph_Graph55->GetYaxis()->SetLabelFont(42);
   Graph_Graph55->GetYaxis()->SetTitleFont(42);
   Graph_Graph55->GetZaxis()->SetLabelFont(42);
   Graph_Graph55->GetZaxis()->SetTitleOffset(1);
   Graph_Graph55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph55);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx56[30] = {
   0,
   0.03090497,
   0.14944,
   0.2788412,
   0.3897019,
   0.4820179,
   0.555955,
   0.6184956,
   0.6722313,
   0.715707,
   0.754646,
   0.7946152,
   0.8255529,
   0.854329,
   0.8840423,
   0.9096326,
   0.933174,
   0.9504063,
   0.9627421,
   0.9719403,
   0.9804898,
   0.9851125,
   0.9893526,
   0.9929745,
   0.9946167,
   0.9968019,
   0.998474,
   0.9992177,
   0.9994134,
   0.9995575};
   Double_t Graph_fy56[30] = {
   0,
   0.03120887,
   0.1575957,
   0.3124663,
   0.4429563,
   0.5528346,
   0.6378428,
   0.7070051,
   0.7623583,
   0.806791,
   0.8411993,
   0.8697832,
   0.8940893,
   0.9156319,
   0.9351188,
   0.9555156,
   0.9698789,
   0.9803422,
   0.9874806,
   0.9915046,
   0.9948114,
   0.9963415,
   0.9972695,
   0.9980067,
   0.9988454,
   0.9992766,
   0.9997894,
   0.9998092,
   0.9999145,
   0.9999145};
   graph = new TGraph(30,Graph_fx56,Graph_fy56);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph56 = new TH1F("Graph_Graph56","Tagging Prioritized",100,0,1.099513);
   Graph_Graph56->SetMinimum(0);
   Graph_Graph56->SetMaximum(1.099906);
   Graph_Graph56->SetDirectory(0);
   Graph_Graph56->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph56->SetLineColor(ci);
   Graph_Graph56->GetXaxis()->SetLabelFont(42);
   Graph_Graph56->GetXaxis()->SetTitleOffset(1);
   Graph_Graph56->GetXaxis()->SetTitleFont(42);
   Graph_Graph56->GetYaxis()->SetLabelFont(42);
   Graph_Graph56->GetYaxis()->SetTitleFont(42);
   Graph_Graph56->GetZaxis()->SetLabelFont(42);
   Graph_Graph56->GetZaxis()->SetTitleOffset(1);
   Graph_Graph56->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph56);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999035, 1.049797);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dR_Bj0_17->Modified();
   ROC_H_dR_Bj0_17->cd();
   ROC_H_dR_Bj0_17->SetSelected(ROC_H_dR_Bj0_17);
}

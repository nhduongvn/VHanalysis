#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_16()
{
//=========Macro generated from canvas: ROC_jets_CSV_16/ROC_jets_CSV_16
//=========  (Fri Mar 10 12:27:37 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_16 = new TCanvas("ROC_jets_CSV_16", "ROC_jets_CSV_16",0,0,600,600);
   ROC_jets_CSV_16->SetHighLightColor(2);
   ROC_jets_CSV_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_CSV_16->SetFillColor(0);
   ROC_jets_CSV_16->SetBorderMode(0);
   ROC_jets_CSV_16->SetBorderSize(2);
   ROC_jets_CSV_16->SetGridx();
   ROC_jets_CSV_16->SetGridy();
   ROC_jets_CSV_16->SetLeftMargin(0.15709);
   ROC_jets_CSV_16->SetRightMargin(0.1234783);
   ROC_jets_CSV_16->SetBottomMargin(0.12);
   ROC_jets_CSV_16->SetFrameBorderMode(0);
   ROC_jets_CSV_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx302[21] = {
   0,
   0.01193921,
   0.01406154,
   0.01555606,
   0.01688027,
   0.01817543,
   0.019416,
   0.02069867,
   0.02205465,
   0.02356293,
   0.02527291,
   0.02719478,
   0.02944906,
   0.03222571,
   0.03571726,
   0.04032765,
   0.04682966,
   0.05702476,
   0.07623151,
   0.1297096,
   1};
   Double_t Graph_fy302[21] = {
   0,
   0.03509899,
   0.04199569,
   0.04731408,
   0.05232439,
   0.05735641,
   0.06245692,
   0.06774612,
   0.07376085,
   0.08073955,
   0.08854565,
   0.09726069,
   0.1070855,
   0.1186809,
   0.1326659,
   0.1504628,
   0.1726348,
   0.2030929,
   0.2496226,
   0.3468442,
   1};
   TGraph *graph = new TGraph(21,Graph_fx302,Graph_fy302);
   graph->SetName("Graph");
   graph->SetTitle("CSV");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph302 = new TH1F("Graph_Graph302","CSV",100,0,1.1);
   Graph_Graph302->SetMinimum(0);
   Graph_Graph302->SetMaximum(1.1);
   Graph_Graph302->SetDirectory(0);
   Graph_Graph302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph302->SetLineColor(ci);
   Graph_Graph302->GetXaxis()->SetLabelFont(42);
   Graph_Graph302->GetXaxis()->SetTitleOffset(1);
   Graph_Graph302->GetXaxis()->SetTitleFont(42);
   Graph_Graph302->GetYaxis()->SetLabelFont(42);
   Graph_Graph302->GetYaxis()->SetTitleFont(42);
   Graph_Graph302->GetZaxis()->SetLabelFont(42);
   Graph_Graph302->GetZaxis()->SetTitleOffset(1);
   Graph_Graph302->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph302);
   
   TLatex *   tex = new TLatex(0,0.1,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(303);
      tex = new TLatex(0.01193921,0.135099,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(304);
      tex = new TLatex(0.01406154,0.1419957,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(305);
      tex = new TLatex(0.01555606,0.1473141,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(306);
      tex = new TLatex(0.01688027,0.1523244,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(307);
      tex = new TLatex(0.01817543,0.1573564,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(308);
      tex = new TLatex(0.019416,0.1624569,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(309);
      tex = new TLatex(0.02069867,0.1677461,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(310);
      tex = new TLatex(0.02205465,0.1737608,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(311);
      tex = new TLatex(0.02356293,0.1807396,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(312);
      tex = new TLatex(0.02527291,0.1885456,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(313);
      tex = new TLatex(0.02719478,0.1972607,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(314);
      tex = new TLatex(0.02944906,0.2070855,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(315);
      tex = new TLatex(0.03222571,0.2186809,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(316);
      tex = new TLatex(0.03571726,0.2326659,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(317);
      tex = new TLatex(0.04032765,0.2504628,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(318);
      tex = new TLatex(0.04682966,0.2726348,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(319);
      tex = new TLatex(0.05702476,0.3030929,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(320);
      tex = new TLatex(0.07623151,0.3496226,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(321);
      tex = new TLatex(0.1297096,0.4468442,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(322);
      tex = new TLatex(1,1.04,"-0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(323);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CSV_16->Modified();
   ROC_jets_CSV_16->cd();
   ROC_jets_CSV_16->SetSelected(ROC_jets_CSV_16);
}

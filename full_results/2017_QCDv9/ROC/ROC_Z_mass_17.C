#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_17()
{
//=========Macro generated from canvas: ROC_Z_mass_17/ROC_Z_mass_17
//=========  (Sun Feb 19 15:10:33 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_17 = new TCanvas("ROC_Z_mass_17", "ROC_Z_mass_17",0,0,600,600);
   ROC_Z_mass_17->SetHighLightColor(2);
   ROC_Z_mass_17->Range(-0.1792351,0.01631615,0.9874914,1.09784);
   ROC_Z_mass_17->SetFillColor(0);
   ROC_Z_mass_17->SetBorderMode(0);
   ROC_Z_mass_17->SetBorderSize(2);
   ROC_Z_mass_17->SetGridx();
   ROC_Z_mass_17->SetGridy();
   ROC_Z_mass_17->SetLeftMargin(0.15709);
   ROC_Z_mass_17->SetRightMargin(0.1234783);
   ROC_Z_mass_17->SetBottomMargin(0.12);
   ROC_Z_mass_17->SetFrameBorderMode(0);
   ROC_Z_mass_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx754[8] = {
   0.04219959,
   0.1393411,
   0.243545,
   0.3465729,
   0.4440227,
   0.5244006,
   0.5701963,
   0.6122857};
   Double_t Graph_fy754[8] = {
   0.1845506,
   0.4764551,
   0.6091536,
   0.667071,
   0.7089579,
   0.7447396,
   0.7717308,
   0.7959511};
   TGraph *graph = new TGraph(8,Graph_fx754,Graph_fy754);
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
   
   TH1F *Graph_Graph754 = new TH1F("Graph_Graph754","Tagging Only",100,0,0.6692943);
   Graph_Graph754->SetMinimum(0.1234106);
   Graph_Graph754->SetMaximum(0.8570911);
   Graph_Graph754->SetDirectory(0);
   Graph_Graph754->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph754->SetLineColor(ci);
   Graph_Graph754->GetXaxis()->SetLabelFont(42);
   Graph_Graph754->GetXaxis()->SetTitleOffset(1);
   Graph_Graph754->GetXaxis()->SetTitleFont(42);
   Graph_Graph754->GetYaxis()->SetLabelFont(42);
   Graph_Graph754->GetYaxis()->SetTitleFont(42);
   Graph_Graph754->GetZaxis()->SetLabelFont(42);
   Graph_Graph754->GetZaxis()->SetTitleOffset(1);
   Graph_Graph754->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph754);
   
   TLatex *   tex = new TLatex(0.2092685,0.7692785,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(755);
      tex = new TLatex(0.3676909,0.8793236,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(756);
      tex = new TLatex(0.5012246,0.9217673,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(757);
      tex = new TLatex(0.6026028,0.953794,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(758);
      tex = new TLatex(0.7126803,0.9701697,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(759);
      tex = new TLatex(0.7739851,0.9820444,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(760);
      tex = new TLatex(0.8052723,0.9913429,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(761);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx762[8] = {
   0.06172126,
   0.2092685,
   0.3676909,
   0.5012246,
   0.6026028,
   0.7126803,
   0.7739851,
   0.8052723};
   Double_t Graph_fy762[8] = {
   0.2635622,
   0.6692785,
   0.8393236,
   0.8817673,
   0.913794,
   0.9301697,
   0.9420444,
   0.9513429};
   graph = new TGraph(8,Graph_fx762,Graph_fy762);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph762 = new TH1F("Graph_Graph762","Mass-Matching Prioritized",100,0,0.8796274);
   Graph_Graph762->SetMinimum(0.1947841);
   Graph_Graph762->SetMaximum(1.020121);
   Graph_Graph762->SetDirectory(0);
   Graph_Graph762->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph762->SetLineColor(ci);
   Graph_Graph762->GetXaxis()->SetLabelFont(42);
   Graph_Graph762->GetXaxis()->SetTitleOffset(1);
   Graph_Graph762->GetXaxis()->SetTitleFont(42);
   Graph_Graph762->GetYaxis()->SetLabelFont(42);
   Graph_Graph762->GetYaxis()->SetTitleFont(42);
   Graph_Graph762->GetZaxis()->SetLabelFont(42);
   Graph_Graph762->GetZaxis()->SetTitleOffset(1);
   Graph_Graph762->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph762);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx763[8] = {
   0.04225321,
   0.1394009,
   0.2432244,
   0.3458517,
   0.4438055,
   0.5241816,
   0.569594,
   0.6114006};
   Double_t Graph_fy763[8] = {
   0.184444,
   0.4766012,
   0.6087044,
   0.6669286,
   0.7103466,
   0.7465205,
   0.7734558,
   0.7969467};
   graph = new TGraph(8,Graph_fx763,Graph_fy763);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph763 = new TH1F("Graph_Graph763","Tagging Prioritized",100,0,0.6683154);
   Graph_Graph763->SetMinimum(0.1231937);
   Graph_Graph763->SetMaximum(0.858197);
   Graph_Graph763->SetDirectory(0);
   Graph_Graph763->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph763->SetLineColor(ci);
   Graph_Graph763->GetXaxis()->SetLabelFont(42);
   Graph_Graph763->GetXaxis()->SetTitleOffset(1);
   Graph_Graph763->GetXaxis()->SetTitleFont(42);
   Graph_Graph763->GetYaxis()->SetLabelFont(42);
   Graph_Graph763->GetYaxis()->SetTitleFont(42);
   Graph_Graph763->GetZaxis()->SetLabelFont(42);
   Graph_Graph763->GetZaxis()->SetTitleOffset(1);
   Graph_Graph763->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph763);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.004045956, 0.843426);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.5,0.15,0.85,0.3,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Intervals centered around 85.0 GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_17->Modified();
   ROC_Z_mass_17->cd();
   ROC_Z_mass_17->SetSelected(ROC_Z_mass_17);
}

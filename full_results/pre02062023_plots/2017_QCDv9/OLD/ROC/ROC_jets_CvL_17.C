#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_17()
{
//=========Macro generated from canvas: ROC_jets_CvL_17/ROC_jets_CvL_17
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_17 = new TCanvas("ROC_jets_CvL_17", "ROC_jets_CvL_17",0,0,600,600);
   ROC_jets_CvL_17->SetHighLightColor(2);
   ROC_jets_CvL_17->Range(-0.2888384,-0.1589539,1.233034,1.165662);
   ROC_jets_CvL_17->SetFillColor(0);
   ROC_jets_CvL_17->SetBorderMode(0);
   ROC_jets_CvL_17->SetBorderSize(2);
   ROC_jets_CvL_17->SetGridx();
   ROC_jets_CvL_17->SetGridy();
   ROC_jets_CvL_17->SetLeftMargin(0.15709);
   ROC_jets_CvL_17->SetRightMargin(0.1234783);
   ROC_jets_CvL_17->SetBottomMargin(0.12);
   ROC_jets_CvL_17->SetFrameBorderMode(0);
   ROC_jets_CvL_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx583[20] = {
   0,
   0.2357771,
   0.5176822,
   0.6330603,
   0.6946152,
   0.7374263,
   0.7698463,
   0.7966024,
   0.8193019,
   0.8405107,
   0.8597805,
   0.8775503,
   0.8933094,
   0.9092137,
   0.9240728,
   0.9382834,
   0.9519445,
   0.9659107,
   0.9802584,
   0.9953486};
   Double_t Graph_fy583[20] = {
   0,
   0.3805346,
   0.7548124,
   0.8571731,
   0.894998,
   0.9147745,
   0.9274021,
   0.9361632,
   0.9425232,
   0.9475772,
   0.9518218,
   0.9554805,
   0.9586966,
   0.9616629,
   0.9645229,
   0.9674417,
   0.9705707,
   0.974029,
   0.9782712,
   0.9840001};
   TGraph *graph = new TGraph(20,Graph_fx583,Graph_fy583);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph583 = new TH1F("Graph_Graph583","",100,0,1.094883);
   Graph_Graph583->SetMinimum(0);
   Graph_Graph583->SetMaximum(1.0824);
   Graph_Graph583->SetDirectory(0);
   Graph_Graph583->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph583->SetLineColor(ci);
   Graph_Graph583->GetXaxis()->SetLabelFont(42);
   Graph_Graph583->GetXaxis()->SetTitleOffset(1);
   Graph_Graph583->GetXaxis()->SetTitleFont(42);
   Graph_Graph583->GetYaxis()->SetLabelFont(42);
   Graph_Graph583->GetYaxis()->SetTitleFont(42);
   Graph_Graph583->GetZaxis()->SetLabelFont(42);
   Graph_Graph583->GetZaxis()->SetTitleOffset(1);
   Graph_Graph583->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph583);
   
   TLatex *   tex = new TLatex(0,0.06,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(584);
      tex = new TLatex(0.2357771,0.4405346,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(585);
      tex = new TLatex(0.5176822,0.8148124,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(586);
      tex = new TLatex(0.6330603,0.9171731,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(587);
      tex = new TLatex(0.6946152,0.954998,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(588);
      tex = new TLatex(0.7374263,0.9747745,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(589);
      tex = new TLatex(0.7698463,0.9874021,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(590);
      tex = new TLatex(0.7966024,0.9961632,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(591);
      tex = new TLatex(0.8193019,1.002523,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(592);
      tex = new TLatex(0.8405107,1.007577,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(593);
      tex = new TLatex(0.8597805,1.011822,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(594);
      tex = new TLatex(0.8775503,1.015481,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(595);
      tex = new TLatex(0.8933094,1.018697,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(596);
      tex = new TLatex(0.9092137,1.021663,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(597);
      tex = new TLatex(0.9240728,1.024523,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(598);
      tex = new TLatex(0.9382834,1.027442,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(599);
      tex = new TLatex(0.9519445,1.030571,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(600);
      tex = new TLatex(0.9659107,1.034029,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(601);
      tex = new TLatex(0.9802584,1.038271,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(602);
      tex = new TLatex(0.9953486,1.044,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(603);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04976743, 1.045116);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CvL_17->Modified();
   ROC_jets_CvL_17->cd();
   ROC_jets_CvL_17->SetSelected(ROC_jets_CvL_17);
}

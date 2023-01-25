#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_18()
{
//=========Macro generated from canvas: ROC_jets_CvL_18/ROC_jets_CvL_18
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_18 = new TCanvas("ROC_jets_CvL_18", "ROC_jets_CvL_18",0,0,600,600);
   ROC_jets_CvL_18->SetHighLightColor(2);
   ROC_jets_CvL_18->Range(-0.289217,-0.1590224,1.23465,1.166165);
   ROC_jets_CvL_18->SetFillColor(0);
   ROC_jets_CvL_18->SetBorderMode(0);
   ROC_jets_CvL_18->SetBorderSize(2);
   ROC_jets_CvL_18->SetGridx();
   ROC_jets_CvL_18->SetGridy();
   ROC_jets_CvL_18->SetLeftMargin(0.15709);
   ROC_jets_CvL_18->SetRightMargin(0.1234783);
   ROC_jets_CvL_18->SetBottomMargin(0.12);
   ROC_jets_CvL_18->SetFrameBorderMode(0);
   ROC_jets_CvL_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx604[20] = {
   0,
   0.2386192,
   0.5395696,
   0.6600479,
   0.722451,
   0.764563,
   0.7959797,
   0.8213517,
   0.8426587,
   0.8623639,
   0.8800522,
   0.8963042,
   0.9107382,
   0.9249737,
   0.9379262,
   0.9503446,
   0.9618894,
   0.9734199,
   0.9849327,
   0.9966532};
   Double_t Graph_fy604[20] = {
   0,
   0.3883001,
   0.7641733,
   0.8630536,
   0.8993982,
   0.9181849,
   0.9300867,
   0.9383051,
   0.9442908,
   0.9490548,
   0.953055,
   0.9565247,
   0.9595963,
   0.9624524,
   0.9652295,
   0.9680723,
   0.9711351,
   0.9745528,
   0.9787605,
   0.9844246};
   TGraph *graph = new TGraph(20,Graph_fx604,Graph_fy604);
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
   
   TH1F *Graph_Graph604 = new TH1F("Graph_Graph604","",100,0,1.096319);
   Graph_Graph604->SetMinimum(0);
   Graph_Graph604->SetMaximum(1.082867);
   Graph_Graph604->SetDirectory(0);
   Graph_Graph604->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph604->SetLineColor(ci);
   Graph_Graph604->GetXaxis()->SetLabelFont(42);
   Graph_Graph604->GetXaxis()->SetTitleOffset(1);
   Graph_Graph604->GetXaxis()->SetTitleFont(42);
   Graph_Graph604->GetYaxis()->SetLabelFont(42);
   Graph_Graph604->GetYaxis()->SetTitleFont(42);
   Graph_Graph604->GetZaxis()->SetLabelFont(42);
   Graph_Graph604->GetZaxis()->SetTitleOffset(1);
   Graph_Graph604->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph604);
   
   TLatex *   tex = new TLatex(0,0.06,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(605);
      tex = new TLatex(0.2386192,0.4483001,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(606);
      tex = new TLatex(0.5395696,0.8241733,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(607);
      tex = new TLatex(0.6600479,0.9230536,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(608);
      tex = new TLatex(0.722451,0.9593982,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(609);
      tex = new TLatex(0.764563,0.9781849,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(610);
      tex = new TLatex(0.7959797,0.9900867,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(611);
      tex = new TLatex(0.8213517,0.9983051,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(612);
      tex = new TLatex(0.8426587,1.004291,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(613);
      tex = new TLatex(0.8623639,1.009055,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(614);
      tex = new TLatex(0.8800522,1.013055,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(615);
      tex = new TLatex(0.8963042,1.016525,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(616);
      tex = new TLatex(0.9107382,1.019596,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(617);
      tex = new TLatex(0.9249737,1.022452,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(618);
      tex = new TLatex(0.9379262,1.025229,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(619);
      tex = new TLatex(0.9503446,1.028072,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(620);
      tex = new TLatex(0.9618894,1.031135,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(621);
      tex = new TLatex(0.9734199,1.034553,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(622);
      tex = new TLatex(0.9849327,1.038761,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(623);
      tex = new TLatex(0.9966532,1.044425,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(624);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04983266, 1.046486);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CvL_18->Modified();
   ROC_jets_CvL_18->cd();
   ROC_jets_CvL_18->SetSelected(ROC_jets_CvL_18);
}

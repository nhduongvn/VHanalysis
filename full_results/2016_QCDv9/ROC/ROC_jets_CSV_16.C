#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_16()
{
//=========Macro generated from canvas: ROC_jets_CSV_16/ROC_jets_CSV_16
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_16 = new TCanvas("ROC_jets_CSV_16", "ROC_jets_CSV_16",0,0,600,600);
   ROC_jets_CSV_16->SetHighLightColor(2);
   ROC_jets_CSV_16->Range(-0.2801129,-0.1597835,1.195786,1.171745);
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
   
   Double_t Graph_fx499[20] = {
   0,
   0.6268841,
   0.7317533,
   0.7817078,
   0.8136863,
   0.8374289,
   0.8562286,
   0.8717916,
   0.8848005,
   0.8956709,
   0.905203,
   0.9138778,
   0.921638,
   0.9284528,
   0.9347115,
   0.9406257,
   0.9463509,
   0.9519424,
   0.9576892,
   0.9652803};
   Double_t Graph_fy499[20] = {
   0,
   0.8444093,
   0.9135062,
   0.9371882,
   0.9494266,
   0.9571688,
   0.9625805,
   0.9666823,
   0.9699009,
   0.9724852,
   0.974659,
   0.9765742,
   0.9782595,
   0.9797698,
   0.9811795,
   0.9825332,
   0.9839337,
   0.9853461,
   0.9869368,
   0.9891357};
   TGraph *graph = new TGraph(20,Graph_fx499,Graph_fy499);
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
   
   TH1F *Graph_Graph499 = new TH1F("Graph_Graph499","",100,0,1.061808);
   Graph_Graph499->SetMinimum(0);
   Graph_Graph499->SetMaximum(1.088049);
   Graph_Graph499->SetDirectory(0);
   Graph_Graph499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph499->SetLineColor(ci);
   Graph_Graph499->GetXaxis()->SetLabelFont(42);
   Graph_Graph499->GetXaxis()->SetTitleOffset(1);
   Graph_Graph499->GetXaxis()->SetTitleFont(42);
   Graph_Graph499->GetYaxis()->SetLabelFont(42);
   Graph_Graph499->GetYaxis()->SetTitleFont(42);
   Graph_Graph499->GetZaxis()->SetLabelFont(42);
   Graph_Graph499->GetZaxis()->SetTitleOffset(1);
   Graph_Graph499->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph499);
   
   TLatex *   tex = new TLatex(0,0.06,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(500);
      tex = new TLatex(0.6268841,0.9044093,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(501);
      tex = new TLatex(0.7317533,0.9735062,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(502);
      tex = new TLatex(0.7817078,0.9971882,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(503);
      tex = new TLatex(0.8136863,1.009427,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(504);
      tex = new TLatex(0.8374289,1.017169,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(505);
      tex = new TLatex(0.8562286,1.022581,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(506);
      tex = new TLatex(0.8717916,1.026682,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(507);
      tex = new TLatex(0.8848005,1.029901,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(508);
      tex = new TLatex(0.8956709,1.032485,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(509);
      tex = new TLatex(0.905203,1.034659,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(510);
      tex = new TLatex(0.9138778,1.036574,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(511);
      tex = new TLatex(0.921638,1.038259,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(512);
      tex = new TLatex(0.9284528,1.03977,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(513);
      tex = new TLatex(0.9347115,1.04118,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(514);
      tex = new TLatex(0.9406257,1.042533,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(515);
      tex = new TLatex(0.9463509,1.043934,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(516);
      tex = new TLatex(0.9519424,1.045346,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(517);
      tex = new TLatex(0.9576892,1.046937,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(518);
      tex = new TLatex(0.9652803,1.049136,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(519);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04826402, 1.013544);
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

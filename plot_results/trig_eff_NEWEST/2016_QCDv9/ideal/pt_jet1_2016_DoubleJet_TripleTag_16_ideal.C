#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_ideal/pt_jet1_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_ideal", "pt_jet1_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet1__10 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet1__10","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(10,0.5980392);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(11,0.73);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(12,0.8526316);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(13,0.8658537);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(14,0.8653846);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(15,0.893617);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(16,0.9583333);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(17,0.9259259);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(18,0.862069);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(19,0.88);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(20,0.8857143);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(21,0.8888889);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(22,0.8461538);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(23,0.8095238);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(24,0.8888889);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(25,0.8461538);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(26,0.9166667);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(27,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(28,0.75);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(29,0.75);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(30,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(31,0.75);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(32,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(34,0.6666667);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(35,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(36,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(37,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(38,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(41,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(42,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(43,0.8);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(45,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetBinContent(51,0.4);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetEntries(28.73051);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 29     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  261.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   99.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet1__10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_pt_jet1__10->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__10->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_DoubleJet90_Double30_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_ideal);
}

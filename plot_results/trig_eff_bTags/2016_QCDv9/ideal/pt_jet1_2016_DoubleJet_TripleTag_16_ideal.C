#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_ideal/pt_jet1_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
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
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet1__235 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet1__235","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(10,0.5842697);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(11,0.746988);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(12,0.8481013);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(13,0.8513514);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(14,0.8823529);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(15,0.9302326);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(16,0.9545455);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(17,0.9583333);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(18,0.8571429);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(19,0.8695652);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(20,0.9090909);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(21,0.8888889);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(22,0.84);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(23,0.8333333);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(24,0.8888889);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(25,0.9);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(26,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(27,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(28,0.7142857);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(29,0.75);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(30,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(31,0.75);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(32,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(34,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(35,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(36,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(37,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(38,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(41,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(42,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(43,0.8);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(45,1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetBinContent(51,0.5);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetEntries(29.25737);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 29     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  261.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  98.84");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet1__235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_pt_jet1__235->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet1__235->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_ideal);
}

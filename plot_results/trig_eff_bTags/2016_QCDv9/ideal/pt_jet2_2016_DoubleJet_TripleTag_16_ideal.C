#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_ideal/pt_jet2_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_ideal", "pt_jet2_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet2__247 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet2__247","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(5,0.6666667);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(6,0.65);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(7,0.7192982);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(8,0.7764706);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(9,0.76);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(10,0.8602151);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(11,0.8977273);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(12,0.8870968);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(13,0.8333333);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(14,0.8235294);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(15,0.9411765);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(16,0.9090909);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(17,0.8235294);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(18,0.9375);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(19,0.8571429);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(20,0.9);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(21,0.875);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(22,0.8333333);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(23,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(24,0.8);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(25,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(26,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(27,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(28,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(29,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetBinContent(35,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetEntries(23.75111);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 24     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  185.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.88");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet2__247);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_pt_jet2__247->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__247->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_ideal);
}

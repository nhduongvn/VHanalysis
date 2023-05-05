#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_3B_ref/BvL_2016_QuadJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_3B_ref = new TCanvas("BvL_2016_QuadJet_TripleTag_16_3B_ref", "BvL_2016_QuadJet_TripleTag_16_3B_ref",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->Range(-0.2,2.633944,1.133333,4.906861);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_BvL_ref__93 = new TH1D("_QuadJet_TripleTag_3B_BvL_ref__93","",10,0,1);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(1,23013);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(2,1453);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(3,2329);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(4,6514);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(5,4748);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(6,4170);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(7,3698);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(8,3830);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(9,4677);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetBinContent(10,25236);
   _QuadJet_TripleTag_3B_BvL_ref__93->SetEntries(79668);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 79668  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5268");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3963");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_BvL_ref__93->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_BvL_ref__93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_BvL_ref__93->SetLineColor(ci);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_3B_BvL_ref__93->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_BvL_ref__93->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL_ref__93->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL_ref__93->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_3B_ref->Modified();
   BvL_2016_QuadJet_TripleTag_16_3B_ref->cd();
   BvL_2016_QuadJet_TripleTag_16_3B_ref->SetSelected(BvL_2016_QuadJet_TripleTag_16_3B_ref);
}

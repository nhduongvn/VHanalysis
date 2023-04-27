#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_ideal_ref/BvL_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Thu Apr 27 10:18:11 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("BvL_2018_QuadJet_TripleTag_18_ideal_ref", "BvL_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->Range(-0.2,3.124749,1.133333,5.361283);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL_ref__147 = new TH1D("_QuadJet_TripleTag_ideal_BvL_ref__147","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(1,72457);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(2,11396);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(3,6148);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(4,6984);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(5,5446);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(6,4845);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(7,4461);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(8,4768);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(9,6301);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetBinContent(10,42402);
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetEntries(165208);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 165208 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4023");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4084");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL_ref__147);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL_ref__147->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__147->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__147->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   BvL_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(BvL_2018_QuadJet_TripleTag_18_ideal_ref);
}

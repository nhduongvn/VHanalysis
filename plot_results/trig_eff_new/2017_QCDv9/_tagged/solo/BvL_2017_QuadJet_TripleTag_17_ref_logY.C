#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_ref/BvL_2017_QuadJet_TripleTag_17_ref
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_ref = new TCanvas("BvL_2017_QuadJet_TripleTag_17_ref", "BvL_2017_QuadJet_TripleTag_17_ref",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_ref->Range(-0.2,2.94117,1.133333,5.146143);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_ref->SetLogy();
   BvL_2017_QuadJet_TripleTag_17_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL_ref__375 = new TH1D("_QuadJet_TripleTag_tagged_BvL_ref__375","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(1,44473);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(2,7543);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(3,3927);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(4,4439);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(5,3580);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(6,3193);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(7,2902);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(8,3125);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(9,4282);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetBinContent(10,27896);
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetEntries(105360);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 105360 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4149");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4093");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL_ref__375);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_BvL_ref__375->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL_ref__375->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL_ref__375->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_ref->Modified();
   BvL_2017_QuadJet_TripleTag_17_ref->cd();
   BvL_2017_QuadJet_TripleTag_17_ref->SetSelected(BvL_2017_QuadJet_TripleTag_17_ref);
}

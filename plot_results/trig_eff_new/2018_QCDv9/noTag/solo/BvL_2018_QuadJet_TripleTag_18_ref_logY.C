#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_ref/BvL_2018_QuadJet_TripleTag_18_ref
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_ref = new TCanvas("BvL_2018_QuadJet_TripleTag_18_ref", "BvL_2018_QuadJet_TripleTag_18_ref",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_ref->Range(-0.2,4.145431,1.133333,6.964602);
   BvL_2018_QuadJet_TripleTag_18_ref->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_ref->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ref->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_ref->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL_ref__39 = new TH1D("_QuadJet_TripleTag_BvL_ref__39","",10,0,1);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(1,2541766);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(2,179601);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(3,93342);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(4,67836);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(5,56382);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(6,53993);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(7,53503);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(8,62191);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(9,81794);
   _QuadJet_TripleTag_BvL_ref__39->SetBinContent(10,546492);
   _QuadJet_TripleTag_BvL_ref__39->SetEntries(3736900);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3736900");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2313");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3632");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL_ref__39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL_ref__39);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL_ref__39->SetLineColor(ci);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__39->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL_ref__39->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL_ref__39->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL_ref__39->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL_ref__39->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_ref->Modified();
   BvL_2018_QuadJet_TripleTag_18_ref->cd();
   BvL_2018_QuadJet_TripleTag_18_ref->SetSelected(BvL_2018_QuadJet_TripleTag_18_ref);
}

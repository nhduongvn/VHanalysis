#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_ideal_ref/BvL_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("BvL_2016_QuadJet_TripleTag_16_ideal_ref", "BvL_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->Range(-0.2,1.153505,1.133333,3.768187);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL_ref__39 = new TH1D("_QuadJet_TripleTag_ideal_BvL_ref__39","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(1,702);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(2,52);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(3,121);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(4,405);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(5,308);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(6,284);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(7,243);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(8,262);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(9,296);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetBinContent(10,1695);
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetEntries(4368);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4368   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6314");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3579");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL_ref__39);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL_ref__39->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL_ref__39->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL_ref__39->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   BvL_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(BvL_2016_QuadJet_TripleTag_16_ideal_ref);
}

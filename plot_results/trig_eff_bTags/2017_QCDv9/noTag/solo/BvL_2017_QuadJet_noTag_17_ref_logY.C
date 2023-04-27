#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17_ref/BvL_2017_QuadJet_noTag_17_ref
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17_ref = new TCanvas("BvL_2017_QuadJet_noTag_17_ref", "BvL_2017_QuadJet_noTag_17_ref",0,0,600,600);
   BvL_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17_ref->Range(-0.2,3.900427,1.133333,6.722726);
   BvL_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17_ref->SetLogy();
   BvL_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL_ref__42 = new TH1D("_QuadJet_noTag_BvL_ref__42","",10,0,1);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(1,1455283);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(2,101646);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(3,52566);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(4,38280);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(5,32067);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(6,30983);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(7,30457);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(8,35343);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(9,46938);
   _QuadJet_noTag_BvL_ref__42->SetBinContent(10,315245);
   _QuadJet_noTag_BvL_ref__42->SetEntries(2138808);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2138808");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2319");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3642");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL_ref__42->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL_ref__42);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_BvL_ref__42->SetLineColor(ci);
   _QuadJet_noTag_BvL_ref__42->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL_ref__42->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_BvL_ref__42->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__42->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL_ref__42->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__42->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_BvL_ref__42->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__42->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__42->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL_ref__42->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL_ref__42->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL_ref__42->Draw("HIST");
   BvL_2017_QuadJet_noTag_17_ref->Modified();
   BvL_2017_QuadJet_noTag_17_ref->cd();
   BvL_2017_QuadJet_noTag_17_ref->SetSelected(BvL_2017_QuadJet_noTag_17_ref);
}

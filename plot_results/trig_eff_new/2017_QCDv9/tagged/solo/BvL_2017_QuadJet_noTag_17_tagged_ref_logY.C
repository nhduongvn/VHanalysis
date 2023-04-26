#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_tagged_ref_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17_tagged_ref/BvL_2017_QuadJet_noTag_17_tagged_ref
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17_tagged_ref = new TCanvas("BvL_2017_QuadJet_noTag_17_tagged_ref", "BvL_2017_QuadJet_noTag_17_tagged_ref",0,0,600,600);
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17_tagged_ref->Range(-0.2,2.986349,1.133333,5.195162);
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetLogy();
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL_ref__96 = new TH1D("_QuadJet_noTag_tagged_BvL_ref__96","",10,0,1);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(1,49743);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(2,8446);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(3,4412);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(4,4965);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(5,4016);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(6,3558);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(7,3223);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(8,3490);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(9,4781);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(10,31266);
   _QuadJet_noTag_tagged_BvL_ref__96->SetEntries(117900);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 117900 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4151");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4094");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_BvL_ref__96->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_BvL_ref__96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_BvL_ref__96->SetLineColor(ci);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_BvL_ref__96->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL_ref__96->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->Draw("HIST");
   BvL_2017_QuadJet_noTag_17_tagged_ref->Modified();
   BvL_2017_QuadJet_noTag_17_tagged_ref->cd();
   BvL_2017_QuadJet_noTag_17_tagged_ref->SetSelected(BvL_2017_QuadJet_noTag_17_tagged_ref);
}

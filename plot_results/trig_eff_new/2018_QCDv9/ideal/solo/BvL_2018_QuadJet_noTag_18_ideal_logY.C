#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18_ideal/BvL_2018_QuadJet_noTag_18_ideal
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18_ideal = new TCanvas("BvL_2018_QuadJet_noTag_18_ideal", "BvL_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   BvL_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18_ideal->Range(-0.2,0.7828559,1.133333,3.16619);
   BvL_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18_ideal->SetLogy();
   BvL_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_BvL__149 = new TH1D("_QuadJet_noTag_ideal_BvL__149","",10,0,1);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(1,447);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(2,69);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(3,38);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(4,38);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(5,49);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(6,31);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(7,21);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(8,27);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(9,39);
   _QuadJet_noTag_ideal_BvL__149->SetBinContent(10,245);
   _QuadJet_noTag_ideal_BvL__149->SetEntries(1004);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1004   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3912");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4027");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_BvL__149->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_BvL__149);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_BvL__149->SetLineColor(ci);
   _QuadJet_noTag_ideal_BvL__149->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_ideal_BvL__149->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_BvL__149->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL__149->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_BvL__149->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL__149->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_BvL__149->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL__149->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL__149->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL__149->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_BvL__149->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL__149->Draw("HIST");
   BvL_2018_QuadJet_noTag_18_ideal->Modified();
   BvL_2018_QuadJet_noTag_18_ideal->cd();
   BvL_2018_QuadJet_noTag_18_ideal->SetSelected(BvL_2018_QuadJet_noTag_18_ideal);
}

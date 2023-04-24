#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18/BvL_2018_QuadJet_noTag_18
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18 = new TCanvas("BvL_2018_QuadJet_noTag_18", "BvL_2018_QuadJet_noTag_18",0,0,600,600);
   BvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18->Range(-0.2,-2.748352,1.133333,1.724871);
   BvL_2018_QuadJet_noTag_18->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18->SetLogy();
   BvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL__167 = new TH1D("_QuadJet_noTag_BvL__167","",10,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL__167->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL__167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_BvL__167->SetLineColor(ci);
   _QuadJet_noTag_BvL__167->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL__167->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_BvL__167->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__167->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__167->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__167->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_BvL__167->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__167->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__167->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__167->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__167->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__167->Draw("HIST");
   BvL_2018_QuadJet_noTag_18->Modified();
   BvL_2018_QuadJet_noTag_18->cd();
   BvL_2018_QuadJet_noTag_18->SetSelected(BvL_2018_QuadJet_noTag_18);
}

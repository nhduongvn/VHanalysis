#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18/BvL_2018_QuadJet_noTag_18
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18 = new TCanvas("BvL_2018_QuadJet_noTag_18", "BvL_2018_QuadJet_noTag_18",0,0,600,600);
   BvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18->Range(-0.2183529,0.003580123,1.171633,0.004115751);
   BvL_2018_QuadJet_noTag_18->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18->SetFillStyle(4000);
   BvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   BvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL__40 = new TH1D("_QuadJet_noTag_BvL__40","",10,0,1);
   _QuadJet_noTag_BvL__40->SetBinContent(1,0.003875258);
   _QuadJet_noTag_BvL__40->SetBinContent(2,0.004042294);
   _QuadJet_noTag_BvL__40->SetBinContent(3,0.003856785);
   _QuadJet_noTag_BvL__40->SetBinContent(4,0.003685359);
   _QuadJet_noTag_BvL__40->SetBinContent(5,0.003777801);
   _QuadJet_noTag_BvL__40->SetBinContent(6,0.003704184);
   _QuadJet_noTag_BvL__40->SetBinContent(7,0.003663346);
   _QuadJet_noTag_BvL__40->SetBinContent(8,0.003955556);
   _QuadJet_noTag_BvL__40->SetBinContent(9,0.003692202);
   _QuadJet_noTag_BvL__40->SetBinContent(10,0.003778646);
   _QuadJet_noTag_BvL__40->SetEntries(0.03803143);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4961");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2887");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL__40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL__40);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_BvL__40->SetLineColor(ci);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL__40->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__40->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__40->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_BvL__40->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__40->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__40->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__40->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__40->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__40->Draw("HIST");
   BvL_2018_QuadJet_noTag_18->Modified();
   BvL_2018_QuadJet_noTag_18->cd();
   BvL_2018_QuadJet_noTag_18->SetSelected(BvL_2018_QuadJet_noTag_18);
}

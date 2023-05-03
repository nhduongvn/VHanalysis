#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTagV4_18_ideal()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTagV4_18_ideal/BvL_2018_QuadJet_noTagV4_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTagV4_18_ideal = new TCanvas("BvL_2018_QuadJet_noTagV4_18_ideal", "BvL_2018_QuadJet_noTagV4_18_ideal",0,0,600,600);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetHighLightColor(2);
   BvL_2018_QuadJet_noTagV4_18_ideal->Range(-0.2183529,-0.001125704,1.171633,0.00825516);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetFillColor(0);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetFillStyle(4000);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetBorderMode(0);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetBorderSize(2);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetBottomMargin(0.12);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTagV4_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV4_ideal_BvL__121 = new TH1D("_QuadJet_noTagV4_ideal_BvL__121","",10,0,1);
   _QuadJet_noTagV4_ideal_BvL__121->SetBinContent(5,0.006968641);
   _QuadJet_noTagV4_ideal_BvL__121->SetBinContent(10,0.001125492);
   _QuadJet_noTagV4_ideal_BvL__121->SetEntries(0.008094134);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV4_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5195");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.173");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV4_ideal_BvL__121->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV4_ideal_BvL__121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTagV4_ideal_BvL__121->SetLineColor(ci);
   _QuadJet_noTagV4_ideal_BvL__121->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTagV4_ideal_BvL__121->GetXaxis()->SetRange(1,100);
   _QuadJet_noTagV4_ideal_BvL__121->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_BvL__121->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_BvL__121->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_BvL__121->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTagV4_ideal_BvL__121->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_BvL__121->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_BvL__121->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_BvL__121->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_BvL__121->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_BvL__121->Draw("HIST");
   BvL_2018_QuadJet_noTagV4_18_ideal->Modified();
   BvL_2018_QuadJet_noTagV4_18_ideal->cd();
   BvL_2018_QuadJet_noTagV4_18_ideal->SetSelected(BvL_2018_QuadJet_noTagV4_18_ideal);
}

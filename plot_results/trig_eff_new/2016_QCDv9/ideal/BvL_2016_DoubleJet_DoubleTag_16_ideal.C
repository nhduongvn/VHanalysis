#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16_ideal/BvL_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16_ideal", "BvL_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->Range(-0.2183529,0.0209375,1.171633,0.02662785);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_BvL__298 = new TH1D("_DoubleJet_DoubleTag_ideal_BvL__298","",10,0,1);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(1,0.02405374);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(2,0.02185282);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(3,0.02342918);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(4,0.02232143);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(5,0.02437167);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(6,0.02584746);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(7,0.02182163);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(8,0.0252029);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(9,0.025);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetBinContent(10,0.02359882);
   _DoubleJet_DoubleTag_ideal_BvL__298->SetEntries(0.2374996);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5056");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2868");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_BvL__298->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_BvL__298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_BvL__298->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_ideal_BvL__298->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_BvL__298->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_BvL__298->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__298->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   BvL_2016_DoubleJet_DoubleTag_16_ideal->cd();
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(BvL_2016_DoubleJet_DoubleTag_16_ideal);
}

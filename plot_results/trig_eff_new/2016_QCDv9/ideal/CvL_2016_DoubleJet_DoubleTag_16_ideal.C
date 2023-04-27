#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_ideal/CvL_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:18:40 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_ideal", "CvL_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->Range(-0.2183529,0.01617941,1.171633,0.02720173);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_CvL__310 = new TH1D("_DoubleJet_DoubleTag_ideal_CvL__310","",10,0,1);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(1,0.02546772);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(2,0.02353997);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(3,0.02289452);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(4,0.01975796);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(5,0.02308943);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(6,0.017892);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(7,0.02303484);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(8,0.02239297);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(9,0.02544344);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetBinContent(10,0.0256901);
   _DoubleJet_DoubleTag_ideal_CvL__310->SetEntries(0.229203);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5038");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2973");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_CvL__310->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_CvL__310);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_CvL__310->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_ideal_CvL__310->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_CvL__310->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvL__310->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__310->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_ideal->cd();
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_ideal);
}

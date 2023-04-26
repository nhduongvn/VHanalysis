#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16/CvL_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16", "CvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16->Range(-0.2183529,0.004690197,1.171633,0.01265475);
   CvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   CvL_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   CvL_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvL__94 = new TH1D("_DoubleJet_DoubleTag_CvL__94","",10,0,1);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(1,0.005927683);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(2,0.006829186);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(3,0.00780875);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(4,0.008414602);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(5,0.00893866);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(6,0.009305431);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(7,0.009823183);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(8,0.01101614);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(9,0.01148325);
   _DoubleJet_DoubleTag_CvL__94->SetBinContent(10,0.01156247);
   _DoubleJet_DoubleTag_CvL__94->SetEntries(0.09110935);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.557");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2796");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvL__94->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvL__94);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_CvL__94->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvL__94->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_CvL__94->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_CvL__94->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__94->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL__94->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__94->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_CvL__94->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__94->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__94->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__94->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL__94->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__94->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16->Modified();
   CvL_2016_DoubleJet_DoubleTag_16->cd();
   CvL_2016_DoubleJet_DoubleTag_16->SetSelected(CvL_2016_DoubleJet_DoubleTag_16);
}

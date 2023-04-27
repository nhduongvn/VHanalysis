#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16/CvB_2016_DoubleJet_DoubleTag_16
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16", "CvB_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16->Range(-0.2183529,0.005171932,1.171633,0.01200153);
   CvB_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvB__106 = new TH1D("_DoubleJet_DoubleTag_CvB__106","",10,0,1);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(1,0.0110649);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(2,0.01102227);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(3,0.01001108);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(4,0.009602439);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(5,0.008519973);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(6,0.007977112);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(7,0.007238318);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(8,0.006337309);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(9,0.006233075);
   _DoubleJet_DoubleTag_CvB__106->SetBinContent(10,0.006373058);
   _DoubleJet_DoubleTag_CvB__106->SetEntries(0.08437953);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4397");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2835");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvB__106->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvB__106);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_CvB__106->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvB__106->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_CvB__106->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_CvB__106->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__106->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvB__106->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__106->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_CvB__106->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__106->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__106->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvB__106->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvB__106->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvB__106->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16->Modified();
   CvB_2016_DoubleJet_DoubleTag_16->cd();
   CvB_2016_DoubleJet_DoubleTag_16->SetSelected(CvB_2016_DoubleJet_DoubleTag_16);
}

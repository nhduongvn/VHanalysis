#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16_tagged/CvB_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Tue Apr 25 23:03:08 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16_tagged", "CvB_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->Range(-0.2183529,0.01474168,1.171633,0.01827715);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvB__214 = new TH1D("_DoubleJet_DoubleTag_tagged_CvB__214","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(1,0.01621604);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(2,0.01607774);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(3,0.01532489);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(4,0.01697013);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(5,0.015291);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(6,0.01604987);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(7,0.01642531);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(8,0.01674059);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(9,0.01779228);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetBinContent(10,0.01732926);
   _DoubleJet_DoubleTag_tagged_CvB__214->SetEntries(0.1642171);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5086");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2895");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvB__214->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvB__214);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_CvB__214->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_CvB__214->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB__214->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB__214->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   CvB_2016_DoubleJet_DoubleTag_16_tagged->cd();
   CvB_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(CvB_2016_DoubleJet_DoubleTag_16_tagged);
}

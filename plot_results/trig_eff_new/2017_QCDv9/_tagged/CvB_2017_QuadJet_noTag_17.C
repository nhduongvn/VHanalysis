#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17/CvB_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17 = new TCanvas("CvB_2017_QuadJet_noTag_17", "CvB_2017_QuadJet_noTag_17",0,0,600,600);
   CvB_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17->Range(-0.2183529,0.003242158,1.171633,0.006965586);
   CvB_2017_QuadJet_noTag_17->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17->SetFillStyle(4000);
   CvB_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   CvB_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB__424 = new TH1D("_QuadJet_noTag_tagged_CvB__424","",10,0,1);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(1,0.004518072);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(2,0.004094166);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(3,0.003820683);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(4,0.005723977);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(5,0.005160339);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(6,0.00432566);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(7,0.005067195);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(8,0.00512451);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(9,0.004620387);
   _QuadJet_noTag_tagged_CvB__424->SetBinContent(10,0.006454944);
   _QuadJet_noTag_tagged_CvB__424->SetEntries(0.04890993);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5254");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.289");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB__424->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB__424);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_CvB__424->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB__424->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB__424->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_CvB__424->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__424->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__424->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__424->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_CvB__424->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__424->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__424->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__424->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__424->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__424->Draw("HIST");
   CvB_2017_QuadJet_noTag_17->Modified();
   CvB_2017_QuadJet_noTag_17->cd();
   CvB_2017_QuadJet_noTag_17->SetSelected(CvB_2017_QuadJet_noTag_17);
}

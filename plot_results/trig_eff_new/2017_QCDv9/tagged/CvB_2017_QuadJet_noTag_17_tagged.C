#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_tagged/CvB_2017_QuadJet_noTag_17_tagged
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_tagged = new TCanvas("CvB_2017_QuadJet_noTag_17_tagged", "CvB_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_tagged->Range(-0.2183529,0.003541997,1.171633,0.006997274);
   CvB_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   CvB_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   CvB_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB__106 = new TH1D("_QuadJet_noTag_tagged_CvB__106","",10,0,1);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(1,0.004492665);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(2,0.004587156);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(3,0.004078858);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(4,0.005742726);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(5,0.005121427);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(6,0.00414823);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(7,0.00499902);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(8,0.005302759);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(9,0.00473982);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(10,0.006523408);
   _QuadJet_noTag_tagged_CvB__106->SetEntries(0.04973607);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5224");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2906");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB__106->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB__106);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_CvB__106->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->Draw("HIST");
   CvB_2017_QuadJet_noTag_17_tagged->Modified();
   CvB_2017_QuadJet_noTag_17_tagged->cd();
   CvB_2017_QuadJet_noTag_17_tagged->SetSelected(CvB_2017_QuadJet_noTag_17_tagged);
}

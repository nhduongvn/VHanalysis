#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_tagged/CvB_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_tagged = new TCanvas("CvB_2017_QuadJet_noTag_17_tagged", "CvB_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_tagged->Range(-0.2,-0.550224,1.133333,1.941716);
   CvB_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_tagged->SetLogy();
   CvB_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB__107 = new TH1D("_QuadJet_noTag_tagged_CvB__107","",10,0,1);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(1,26);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(2,3);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(3,3);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(4,5);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(6,4);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(9,6);
   _QuadJet_noTag_tagged_CvB__107->SetBinContent(10,1);
   _QuadJet_noTag_tagged_CvB__107->SetEntries(48);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 48     ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2451");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3054");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB__107->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB__107);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvB__107->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__107->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvB__107->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__107->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__107->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__107->Draw("HIST");
   CvB_2017_QuadJet_noTag_17_tagged->Modified();
   CvB_2017_QuadJet_noTag_17_tagged->cd();
   CvB_2017_QuadJet_noTag_17_tagged->SetSelected(CvB_2017_QuadJet_noTag_17_tagged);
}

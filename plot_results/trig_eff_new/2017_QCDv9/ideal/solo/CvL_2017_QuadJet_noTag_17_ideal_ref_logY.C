#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_ideal_ref/CvL_2017_QuadJet_noTag_17_ideal_ref
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_ideal_ref = new TCanvas("CvL_2017_QuadJet_noTag_17_ideal_ref", "CvL_2017_QuadJet_noTag_17_ideal_ref",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_ideal_ref->Range(-0.2,3.155687,1.133333,4.902956);
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetLogy();
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL_ref__156 = new TH1D("_QuadJet_noTag_ideal_CvL_ref__156","",10,0,1);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(1,13410);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(2,28228);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(3,8489);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(4,5294);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(5,4280);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(6,4441);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(7,5019);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(8,6582);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(9,10127);
   _QuadJet_noTag_ideal_CvL_ref__156->SetBinContent(10,23790);
   _QuadJet_noTag_ideal_CvL_ref__156->SetEntries(109660);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 109660 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4808");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3567");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL_ref__156->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL_ref__156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvL_ref__156->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__156->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__156->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__156->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_ideal_ref->Modified();
   CvL_2017_QuadJet_noTag_17_ideal_ref->cd();
   CvL_2017_QuadJet_noTag_17_ideal_ref->SetSelected(CvL_2017_QuadJet_noTag_17_ideal_ref);
}

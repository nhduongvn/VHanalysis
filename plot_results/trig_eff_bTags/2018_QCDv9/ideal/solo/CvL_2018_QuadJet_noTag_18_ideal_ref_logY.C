#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_ideal_ref/CvL_2018_QuadJet_noTag_18_ideal_ref
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("CvL_2018_QuadJet_noTag_18_ideal_ref", "CvL_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_ideal_ref->Range(-0.2,2.027298,1.133333,3.809065);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL_ref__132 = new TH1D("_QuadJet_noTag_ideal_CvL_ref__132","",10,0,1);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(1,945);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(2,420);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(3,321);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(4,345);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(5,382);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(6,408);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(7,500);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(8,620);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(9,1015);
   _QuadJet_noTag_ideal_CvL_ref__132->SetBinContent(10,2256);
   _QuadJet_noTag_ideal_CvL_ref__132->SetEntries(7212);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7212   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6294");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3347");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL_ref__132->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL_ref__132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvL_ref__132->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL_ref__132->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL_ref__132->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvL_ref__132->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__132->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__132->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__132->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvL_ref__132->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__132->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__132->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL_ref__132->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL_ref__132->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL_ref__132->Draw("HIST");
   CvL_2018_QuadJet_noTag_18_ideal_ref->Modified();
   CvL_2018_QuadJet_noTag_18_ideal_ref->cd();
   CvL_2018_QuadJet_noTag_18_ideal_ref->SetSelected(CvL_2018_QuadJet_noTag_18_ideal_ref);
}

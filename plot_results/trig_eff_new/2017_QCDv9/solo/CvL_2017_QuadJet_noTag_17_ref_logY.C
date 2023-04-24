#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_ref/CvL_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_ref = new TCanvas("CvL_2017_QuadJet_noTag_17_ref", "CvL_2017_QuadJet_noTag_17_ref",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_ref->Range(-0.2,4.101864,1.133333,6.548607);
   CvL_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_ref->SetLogy();
   CvL_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL_ref__186 = new TH1D("_QuadJet_noTag_CvL_ref__186","",10,0,1);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(1,1062635);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(2,313207);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(3,96705);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(4,57037);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(5,45347);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(6,44419);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(7,50440);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(8,67299);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(9,105439);
   _QuadJet_noTag_CvL_ref__186->SetBinContent(10,247072);
   _QuadJet_noTag_CvL_ref__186->SetEntries(2089600);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2089600");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2888");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3367");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL_ref__186->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL_ref__186);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvL_ref__186->SetLineColor(ci);
   _QuadJet_noTag_CvL_ref__186->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL_ref__186->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvL_ref__186->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL_ref__186->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL_ref__186->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL_ref__186->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvL_ref__186->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL_ref__186->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL_ref__186->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL_ref__186->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL_ref__186->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL_ref__186->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_ref->Modified();
   CvL_2017_QuadJet_noTag_17_ref->cd();
   CvL_2017_QuadJet_noTag_17_ref->SetSelected(CvL_2017_QuadJet_noTag_17_ref);
}

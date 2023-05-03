#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTagV5_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTagV5_18_ideal_ref/CvL_2018_QuadJet_noTagV5_18_ideal_ref
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTagV5_18_ideal_ref = new TCanvas("CvL_2018_QuadJet_noTagV5_18_ideal_ref", "CvL_2018_QuadJet_noTagV5_18_ideal_ref",0,0,600,600);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetHighLightColor(2);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->Range(-0.2,1.913833,1.133333,3.692172);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetFillColor(0);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetBorderMode(0);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetBorderSize(2);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetLogy();
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV5_ideal_CvL_ref__144 = new TH1D("_QuadJet_noTagV5_ideal_CvL_ref__144","",10,0,1);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(1,748);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(2,354);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(3,247);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(4,272);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(5,281);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(6,318);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(7,371);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(8,473);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(9,771);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetBinContent(10,1725);
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetEntries(5560);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV5_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5560   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6233");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3376");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV5_ideal_CvL_ref__144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV5_ideal_CvL_ref__144->SetLineColor(ci);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_CvL_ref__144->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_CvL_ref__144->Draw("HIST");
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->Modified();
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->cd();
   CvL_2018_QuadJet_noTagV5_18_ideal_ref->SetSelected(CvL_2018_QuadJet_noTagV5_18_ideal_ref);
}

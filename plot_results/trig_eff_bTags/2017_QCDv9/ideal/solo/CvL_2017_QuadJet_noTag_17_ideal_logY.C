#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_ideal/CvL_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_ideal = new TCanvas("CvL_2017_QuadJet_noTag_17_ideal", "CvL_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_ideal->Range(-0.2,-0.4109811,1.133333,0.68853);
   CvL_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_ideal->SetLogy();
   CvL_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL__47 = new TH1D("_QuadJet_noTag_ideal_CvL__47","",10,0,1);
   _QuadJet_noTag_ideal_CvL__47->SetBinContent(1,2);
   _QuadJet_noTag_ideal_CvL__47->SetBinContent(6,2);
   _QuadJet_noTag_ideal_CvL__47->SetBinContent(7,1);
   _QuadJet_noTag_ideal_CvL__47->SetBinContent(8,1);
   _QuadJet_noTag_ideal_CvL__47->SetBinContent(10,2);
   _QuadJet_noTag_ideal_CvL__47->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5665");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3347");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL__47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL__47);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvL__47->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL__47->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL__47->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvL__47->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__47->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__47->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__47->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvL__47->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__47->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__47->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__47->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__47->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__47->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_ideal->Modified();
   CvL_2017_QuadJet_noTag_17_ideal->cd();
   CvL_2017_QuadJet_noTag_17_ideal->SetSelected(CvL_2017_QuadJet_noTag_17_ideal);
}

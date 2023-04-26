#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18/CvL_2018_QuadJet_noTag_18
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18 = new TCanvas("CvL_2018_QuadJet_noTag_18", "CvL_2018_QuadJet_noTag_18",0,0,600,600);
   CvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18->Range(-0.2,1.892384,1.133333,4.383041);
   CvL_2018_QuadJet_noTag_18->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18->SetLogy();
   CvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL__47 = new TH1D("_QuadJet_noTag_CvL__47","",10,0,1);
   _QuadJet_noTag_CvL__47->SetBinContent(1,7185);
   _QuadJet_noTag_CvL__47->SetBinContent(2,2369);
   _QuadJet_noTag_CvL__47->SetBinContent(3,673);
   _QuadJet_noTag_CvL__47->SetBinContent(4,411);
   _QuadJet_noTag_CvL__47->SetBinContent(5,326);
   _QuadJet_noTag_CvL__47->SetBinContent(6,277);
   _QuadJet_noTag_CvL__47->SetBinContent(7,353);
   _QuadJet_noTag_CvL__47->SetBinContent(8,483);
   _QuadJet_noTag_CvL__47->SetBinContent(9,704);
   _QuadJet_noTag_CvL__47->SetBinContent(10,1627);
   _QuadJet_noTag_CvL__47->SetEntries(14408);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 14408  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2854");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3322");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL__47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL__47);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvL__47->SetLineColor(ci);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL__47->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__47->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__47->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvL__47->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__47->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__47->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__47->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__47->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__47->Draw("HIST");
   CvL_2018_QuadJet_noTag_18->Modified();
   CvL_2018_QuadJet_noTag_18->cd();
   CvL_2018_QuadJet_noTag_18->SetSelected(CvL_2018_QuadJet_noTag_18);
}

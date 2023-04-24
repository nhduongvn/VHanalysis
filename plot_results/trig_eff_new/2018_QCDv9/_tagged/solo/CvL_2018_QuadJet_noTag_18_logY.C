#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18/CvL_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18 = new TCanvas("CvL_2018_QuadJet_noTag_18", "CvL_2018_QuadJet_noTag_18",0,0,600,600);
   CvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18->Range(-0.2,1.086954,1.133333,2.88913);
   CvL_2018_QuadJet_noTag_18->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18->SetLogy();
   CvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   CvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL__101 = new TH1D("_QuadJet_noTag_tagged_CvL__101","",10,0,1);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(1,145);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(2,270);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(3,68);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(4,55);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(5,52);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(6,37);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(7,39);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(8,62);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(9,88);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(10,196);
   _QuadJet_noTag_tagged_CvL__101->SetEntries(1012);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1012   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4552");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3539");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL__101->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL__101);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvL__101->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvL__101->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__101->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__101->Draw("HIST");
   CvL_2018_QuadJet_noTag_18->Modified();
   CvL_2018_QuadJet_noTag_18->cd();
   CvL_2018_QuadJet_noTag_18->SetSelected(CvL_2018_QuadJet_noTag_18);
}

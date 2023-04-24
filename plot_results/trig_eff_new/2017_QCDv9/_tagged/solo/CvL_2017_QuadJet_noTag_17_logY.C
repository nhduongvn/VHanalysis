#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17/CvL_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17 = new TCanvas("CvL_2017_QuadJet_noTag_17", "CvL_2017_QuadJet_noTag_17",0,0,600,600);
   CvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17->Range(-0.2,0.80227,1.133333,2.556806);
   CvL_2017_QuadJet_noTag_17->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17->SetLogy();
   CvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL__401 = new TH1D("_QuadJet_noTag_tagged_CvL__401","",10,0,1);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(1,78);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(2,127);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(3,49);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(4,19);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(5,20);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(6,22);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(7,22);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(8,33);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(9,46);
   _QuadJet_noTag_tagged_CvL__401->SetBinContent(10,100);
   _QuadJet_noTag_tagged_CvL__401->SetEntries(516);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 516    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4595");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3568");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL__401->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL__401);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvL__401->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL__401->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL__401->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvL__401->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__401->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__401->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__401->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvL__401->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__401->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__401->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__401->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__401->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__401->Draw("HIST");
   CvL_2017_QuadJet_noTag_17->Modified();
   CvL_2017_QuadJet_noTag_17->cd();
   CvL_2017_QuadJet_noTag_17->SetSelected(CvL_2017_QuadJet_noTag_17);
}

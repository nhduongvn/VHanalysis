#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17/CvL_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17 = new TCanvas("CvL_2017_QuadJet_noTag_17", "CvL_2017_QuadJet_noTag_17",0,0,600,600);
   CvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17->Range(-0.2,1.770132,1.133333,4.259971);
   CvL_2017_QuadJet_noTag_17->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17->SetLogy();
   CvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL__185 = new TH1D("_QuadJet_noTag_CvL__185","",10,0,1);
   _QuadJet_noTag_CvL__185->SetBinContent(1,5413);
   _QuadJet_noTag_CvL__185->SetBinContent(2,1563);
   _QuadJet_noTag_CvL__185->SetBinContent(3,458);
   _QuadJet_noTag_CvL__185->SetBinContent(4,304);
   _QuadJet_noTag_CvL__185->SetBinContent(5,215);
   _QuadJet_noTag_CvL__185->SetBinContent(6,209);
   _QuadJet_noTag_CvL__185->SetBinContent(7,270);
   _QuadJet_noTag_CvL__185->SetBinContent(8,337);
   _QuadJet_noTag_CvL__185->SetBinContent(9,514);
   _QuadJet_noTag_CvL__185->SetBinContent(10,1225);
   _QuadJet_noTag_CvL__185->SetEntries(10508);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10508  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2862");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3361");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL__185->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL__185);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvL__185->SetLineColor(ci);
   _QuadJet_noTag_CvL__185->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL__185->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvL__185->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__185->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__185->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__185->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvL__185->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__185->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__185->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__185->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__185->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__185->Draw("HIST");
   CvL_2017_QuadJet_noTag_17->Modified();
   CvL_2017_QuadJet_noTag_17->cd();
   CvL_2017_QuadJet_noTag_17->SetSelected(CvL_2017_QuadJet_noTag_17);
}

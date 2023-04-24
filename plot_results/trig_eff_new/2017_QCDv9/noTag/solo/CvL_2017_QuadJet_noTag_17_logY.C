#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17/CvL_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17 = new TCanvas("CvL_2017_QuadJet_noTag_17", "CvL_2017_QuadJet_noTag_17",0,0,600,600);
   CvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17->Range(-0.2,1.740609,1.133333,4.224567);
   CvL_2017_QuadJet_noTag_17->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17->SetLogy();
   CvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL__185 = new TH1D("_QuadJet_noTag_CvL__185","",10,0,1);
   _QuadJet_noTag_CvL__185->SetBinContent(1,4996);
   _QuadJet_noTag_CvL__185->SetBinContent(2,1446);
   _QuadJet_noTag_CvL__185->SetBinContent(3,414);
   _QuadJet_noTag_CvL__185->SetBinContent(4,271);
   _QuadJet_noTag_CvL__185->SetBinContent(5,205);
   _QuadJet_noTag_CvL__185->SetBinContent(6,195);
   _QuadJet_noTag_CvL__185->SetBinContent(7,243);
   _QuadJet_noTag_CvL__185->SetBinContent(8,315);
   _QuadJet_noTag_CvL__185->SetBinContent(9,458);
   _QuadJet_noTag_CvL__185->SetBinContent(10,1101);
   _QuadJet_noTag_CvL__185->SetEntries(9644);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9644   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.283");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3342");
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

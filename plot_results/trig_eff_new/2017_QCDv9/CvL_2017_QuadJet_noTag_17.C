#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17/CvL_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17 = new TCanvas("CvL_2017_QuadJet_noTag_17", "CvL_2017_QuadJet_noTag_17",0,0,600,600);
   CvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17->Range(-0.2183529,0.004562949,1.171633,0.005478449);
   CvL_2017_QuadJet_noTag_17->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17->SetFillStyle(4000);
   CvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   CvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL__184 = new TH1D("_QuadJet_noTag_CvL__184","",10,0,1);
   _QuadJet_noTag_CvL__184->SetBinContent(1,0.005093941);
   _QuadJet_noTag_CvL__184->SetBinContent(2,0.00499031);
   _QuadJet_noTag_CvL__184->SetBinContent(3,0.004736053);
   _QuadJet_noTag_CvL__184->SetBinContent(4,0.005329874);
   _QuadJet_noTag_CvL__184->SetBinContent(5,0.004741218);
   _QuadJet_noTag_CvL__184->SetBinContent(6,0.004705194);
   _QuadJet_noTag_CvL__184->SetBinContent(7,0.005352895);
   _QuadJet_noTag_CvL__184->SetBinContent(8,0.005007504);
   _QuadJet_noTag_CvL__184->SetBinContent(9,0.004874857);
   _QuadJet_noTag_CvL__184->SetBinContent(10,0.004958069);
   _QuadJet_noTag_CvL__184->SetEntries(0.04978991);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4994");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2876");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL__184->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL__184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_CvL__184->SetLineColor(ci);
   _QuadJet_noTag_CvL__184->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL__184->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_CvL__184->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__184->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__184->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__184->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_CvL__184->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__184->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__184->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__184->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__184->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__184->Draw("HIST");
   CvL_2017_QuadJet_noTag_17->Modified();
   CvL_2017_QuadJet_noTag_17->cd();
   CvL_2017_QuadJet_noTag_17->SetSelected(CvL_2017_QuadJet_noTag_17);
}

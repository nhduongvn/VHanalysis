#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_tagged/CvL_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:18:10 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_tagged = new TCanvas("CvL_2018_QuadJet_noTag_18_tagged", "CvL_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_tagged->Range(-0.2183529,0.003541658,1.171633,0.006531249);
   CvL_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   CvL_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   CvL_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL__100 = new TH1D("_QuadJet_noTag_tagged_CvL__100","",10,0,1);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(1,0.005800464);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(2,0.0048417);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(3,0.004090101);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(4,0.005348104);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(5,0.006121248);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(6,0.00429543);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(7,0.004006163);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(8,0.004756425);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(9,0.004411028);
   _QuadJet_noTag_tagged_CvL__100->SetBinContent(10,0.00421306);
   _QuadJet_noTag_tagged_CvL__100->SetEntries(0.04788372);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4793");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2865");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL__100->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL__100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_CvL__100->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL__100->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL__100->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_CvL__100->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__100->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__100->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__100->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_CvL__100->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__100->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__100->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__100->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__100->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__100->Draw("HIST");
   CvL_2018_QuadJet_noTag_18_tagged->Modified();
   CvL_2018_QuadJet_noTag_18_tagged->cd();
   CvL_2018_QuadJet_noTag_18_tagged->SetSelected(CvL_2018_QuadJet_noTag_18_tagged);
}

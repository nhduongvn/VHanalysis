#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16/CvL_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16 = new TCanvas("CvL_2016_QuadJet_DoubleTag_16", "CvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16->Range(-0.2,2.360031,1.133333,4.563265);
   CvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvL__173 = new TH1D("_QuadJet_DoubleTag_CvL__173","",10,0,1);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(1,11625);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(2,4236);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(3,1432);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(4,924);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(5,761);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(6,792);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(7,966);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(8,1314);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(9,2158);
   _QuadJet_DoubleTag_CvL__173->SetBinContent(10,4464);
   _QuadJet_DoubleTag_CvL__173->SetEntries(28672);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28672  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3652");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3617");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvL__173->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvL__173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_CvL__173->SetLineColor(ci);
   _QuadJet_DoubleTag_CvL__173->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_CvL__173->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_CvL__173->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__173->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL__173->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__173->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_CvL__173->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__173->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__173->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvL__173->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvL__173->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvL__173->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16->Modified();
   CvL_2016_QuadJet_DoubleTag_16->cd();
   CvL_2016_QuadJet_DoubleTag_16->SetSelected(CvL_2016_QuadJet_DoubleTag_16);
}

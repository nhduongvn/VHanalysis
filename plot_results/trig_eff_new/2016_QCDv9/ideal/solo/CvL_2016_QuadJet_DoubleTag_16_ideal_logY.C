#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_ideal/CvL_2016_QuadJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_ideal", "CvL_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2,1.536572,1.133333,3.330881);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvL__305 = new TH1D("_QuadJet_DoubleTag_ideal_CvL__305","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(1,383);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(2,748);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(3,205);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(4,115);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(5,117);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(6,104);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(7,126);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(8,170);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(9,257);
   _QuadJet_DoubleTag_ideal_CvL__305->SetBinContent(10,555);
   _QuadJet_DoubleTag_ideal_CvL__305->SetEntries(2780);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2780   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4622");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3556");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_CvL__305->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_CvL__305);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_CvL__305->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_CvL__305->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_ideal_CvL__305->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_ideal_CvL__305->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL__305->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvL__305->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL__305->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_CvL__305->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL__305->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL__305->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvL__305->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvL__305->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvL__305->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16_ideal->Modified();
   CvL_2016_QuadJet_DoubleTag_16_ideal->cd();
   CvL_2016_QuadJet_DoubleTag_16_ideal->SetSelected(CvL_2016_QuadJet_DoubleTag_16_ideal);
}

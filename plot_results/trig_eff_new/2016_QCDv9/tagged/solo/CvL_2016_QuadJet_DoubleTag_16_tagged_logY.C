#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_tagged/CvL_2016_QuadJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_tagged", "CvL_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_tagged->Range(-0.2,1.536572,1.133333,3.330881);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_CvL__197 = new TH1D("_QuadJet_DoubleTag_tagged_CvL__197","",10,0,1);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(1,383);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(2,748);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(3,205);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(4,115);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(5,117);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(6,104);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(7,126);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(8,170);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(9,257);
   _QuadJet_DoubleTag_tagged_CvL__197->SetBinContent(10,555);
   _QuadJet_DoubleTag_tagged_CvL__197->SetEntries(2780);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2780   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4622");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3556");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_CvL__197->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_CvL__197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_CvL__197->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_CvL__197->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_tagged_CvL__197->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_tagged_CvL__197->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__197->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvL__197->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__197->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_CvL__197->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__197->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__197->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__197->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvL__197->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__197->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16_tagged->Modified();
   CvL_2016_QuadJet_DoubleTag_16_tagged->cd();
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetSelected(CvL_2016_QuadJet_DoubleTag_16_tagged);
}

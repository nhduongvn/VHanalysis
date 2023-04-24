#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16/CvL_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16 = new TCanvas("CvL_2016_QuadJet_DoubleTag_16", "CvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16->Range(-0.2,1.545373,1.133333,3.334398);
   CvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16->SetLogy();
   CvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_CvL__389 = new TH1D("_QuadJet_DoubleTag_tagged_CvL__389","",10,0,1);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(1,389);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(2,755);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(3,205);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(4,115);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(5,117);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(6,106);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(7,127);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(8,172);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(9,258);
   _QuadJet_DoubleTag_tagged_CvL__389->SetBinContent(10,560);
   _QuadJet_DoubleTag_tagged_CvL__389->SetEntries(2804);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2804   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4619");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3558");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_CvL__389->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_CvL__389);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_CvL__389->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_CvL__389->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_tagged_CvL__389->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_tagged_CvL__389->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__389->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvL__389->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__389->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_CvL__389->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__389->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__389->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__389->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvL__389->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__389->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16->Modified();
   CvL_2016_QuadJet_DoubleTag_16->cd();
   CvL_2016_QuadJet_DoubleTag_16->SetSelected(CvL_2016_QuadJet_DoubleTag_16);
}

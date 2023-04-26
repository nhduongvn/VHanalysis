#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_tagged/CvL_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_tagged", "CvL_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->Range(-0.2,1.28214,1.133333,3.158958);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvL__203 = new TH1D("_DoubleJet_DoubleTag_tagged_CvL__203","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(1,273);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(2,494);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(3,147);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(4,87);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(5,76);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(6,59);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(7,86);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(8,108);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(9,187);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetBinContent(10,371);
   _DoubleJet_DoubleTag_tagged_CvL__203->SetEntries(1888);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1888   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4602");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3563");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvL__203->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvL__203);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_CvL__203->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_tagged_CvL__203->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_CvL__203->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL__203->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__203->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_tagged->cd();
   CvL_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_tagged);
}

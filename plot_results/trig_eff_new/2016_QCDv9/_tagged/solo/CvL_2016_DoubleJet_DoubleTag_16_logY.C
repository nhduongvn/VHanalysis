#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16/CvL_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16", "CvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16->Range(-0.2,1.289156,1.133333,3.168805);
   CvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvL__395 = new TH1D("_DoubleJet_DoubleTag_tagged_CvL__395","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(1,276);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(2,505);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(3,149);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(4,87);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(5,77);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(6,60);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(7,87);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(8,110);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(9,192);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetBinContent(10,373);
   _DoubleJet_DoubleTag_tagged_CvL__395->SetEntries(1916);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1916   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4595");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3561");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvL__395->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvL__395);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_CvL__395->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_tagged_CvL__395->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_CvL__395->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL__395->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL__395->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16->Modified();
   CvL_2016_DoubleJet_DoubleTag_16->cd();
   CvL_2016_DoubleJet_DoubleTag_16->SetSelected(CvL_2016_DoubleJet_DoubleTag_16);
}

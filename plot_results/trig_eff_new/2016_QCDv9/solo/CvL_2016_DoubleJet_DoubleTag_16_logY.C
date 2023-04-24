#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16/CvL_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16", "CvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16->Range(-0.2,2.124943,1.133333,4.309595);
   CvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvL__179 = new TH1D("_DoubleJet_DoubleTag_CvL__179","",10,0,1);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(1,6510);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(2,2408);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(3,843);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(4,540);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(5,441);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(6,441);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(7,523);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(8,773);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(9,1234);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(10,2515);
   _DoubleJet_DoubleTag_CvL__179->SetEntries(16228);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16228  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3662");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3617");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvL__179->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvL__179);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_CvL__179->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvL__179->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_CvL__179->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_CvL__179->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__179->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL__179->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__179->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_CvL__179->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__179->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__179->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__179->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL__179->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__179->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16->Modified();
   CvL_2016_DoubleJet_DoubleTag_16->cd();
   CvL_2016_DoubleJet_DoubleTag_16->SetSelected(CvL_2016_DoubleJet_DoubleTag_16);
}

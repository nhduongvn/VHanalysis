#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16/CvL_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16", "CvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16->Range(-0.2,2.126797,1.133333,4.312566);
   CvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvL__179 = new TH1D("_DoubleJet_DoubleTag_CvL__179","",10,0,1);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(1,6553);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(2,2419);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(3,846);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(4,541);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(5,443);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(6,446);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(7,530);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(8,781);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(9,1236);
   _DoubleJet_DoubleTag_CvL__179->SetBinContent(10,2525);
   _DoubleJet_DoubleTag_CvL__179->SetEntries(16320);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16320  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.366");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3616");
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

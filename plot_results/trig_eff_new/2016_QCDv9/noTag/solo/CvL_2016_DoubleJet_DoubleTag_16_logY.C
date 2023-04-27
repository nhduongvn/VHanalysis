#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16/CvL_2016_DoubleJet_DoubleTag_16
//=========  (Wed Apr 26 16:41:42 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16", "CvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16->Range(-0.2,2.125102,1.133333,4.308167);
   CvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_CvL__95 = new TH1D("_DoubleJet_DoubleTag_CvL__95","",10,0,1);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(1,6491);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(2,2391);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(3,836);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(4,540);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(5,441);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(6,443);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(7,525);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(8,771);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(9,1221);
   _DoubleJet_DoubleTag_CvL__95->SetBinContent(10,2497);
   _DoubleJet_DoubleTag_CvL__95->SetEntries(16156);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16156  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3658");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3614");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_CvL__95->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_CvL__95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_CvL__95->SetLineColor(ci);
   _DoubleJet_DoubleTag_CvL__95->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_CvL__95->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_CvL__95->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__95->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL__95->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__95->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_CvL__95->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__95->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__95->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_CvL__95->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_CvL__95->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_CvL__95->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16->Modified();
   CvL_2016_DoubleJet_DoubleTag_16->cd();
   CvL_2016_DoubleJet_DoubleTag_16->SetSelected(CvL_2016_DoubleJet_DoubleTag_16);
}

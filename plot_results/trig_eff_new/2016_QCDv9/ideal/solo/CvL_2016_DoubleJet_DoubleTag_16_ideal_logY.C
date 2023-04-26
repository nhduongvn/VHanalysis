#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_ideal/CvL_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_ideal", "CvL_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->Range(-0.2,1.257866,1.133333,3.150788);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_CvL__311 = new TH1D("_DoubleJet_DoubleTag_ideal_CvL__311","",10,0,1);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(1,263);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(2,483);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(3,142);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(4,80);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(5,72);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(6,56);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(7,81);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(8,104);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(9,180);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetBinContent(10,351);
   _DoubleJet_DoubleTag_ideal_CvL__311->SetEntries(1812);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1812   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.457");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3561");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_CvL__311->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_CvL__311);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_CvL__311->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_ideal_CvL__311->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_CvL__311->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvL__311->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvL__311->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_ideal->cd();
   CvL_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_ideal);
}

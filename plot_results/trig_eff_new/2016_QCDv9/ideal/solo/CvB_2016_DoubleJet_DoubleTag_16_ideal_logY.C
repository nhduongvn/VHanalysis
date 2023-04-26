#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16_ideal/CvB_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16_ideal", "CvB_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->Range(-0.2,1.390634,1.133333,3.107219);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_CvB__323 = new TH1D("_DoubleJet_DoubleTag_ideal_CvB__323","",10,0,1);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(1,455);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(2,88);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(3,73);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(4,90);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(5,93);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(6,115);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(7,160);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(8,224);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(9,321);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetBinContent(10,193);
   _DoubleJet_DoubleTag_ideal_CvB__323->SetEntries(1812);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1812   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4987");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3462");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_CvB__323->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_CvB__323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_CvB__323->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_ideal_CvB__323->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_CvB__323->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvB__323->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__323->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   CvB_2016_DoubleJet_DoubleTag_16_ideal->cd();
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(CvB_2016_DoubleJet_DoubleTag_16_ideal);
}

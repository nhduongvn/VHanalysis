#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16/CvB_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16 = new TCanvas("CvB_2016_QuadJet_DoubleTag_16", "CvB_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16->Range(-0.2,2.435434,1.133333,4.364986);
   CvB_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_CvB__197 = new TH1D("_QuadJet_DoubleTag_CvB__197","",10,0,1);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(1,6257);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(2,1048);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(3,864);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(4,850);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(5,942);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(6,1175);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(7,1954);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(8,3665);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(9,7843);
   _QuadJet_DoubleTag_CvB__197->SetBinContent(10,4074);
   _QuadJet_DoubleTag_CvB__197->SetEntries(28672);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28672  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5717");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3522");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_CvB__197->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_CvB__197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_CvB__197->SetLineColor(ci);
   _QuadJet_DoubleTag_CvB__197->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_CvB__197->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_CvB__197->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__197->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvB__197->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__197->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_CvB__197->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__197->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__197->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_CvB__197->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_CvB__197->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_CvB__197->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16->Modified();
   CvB_2016_QuadJet_DoubleTag_16->cd();
   CvB_2016_QuadJet_DoubleTag_16->SetSelected(CvB_2016_QuadJet_DoubleTag_16);
}

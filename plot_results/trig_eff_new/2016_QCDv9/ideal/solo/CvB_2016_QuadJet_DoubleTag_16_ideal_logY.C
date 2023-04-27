#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16_ideal/CvB_2016_QuadJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_DoubleTag_16_ideal", "CvB_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2,1.521622,1.133333,3.338314);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvB__317 = new TH1D("_QuadJet_DoubleTag_ideal_CvB__317","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(1,757);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(2,123);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(3,101);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(4,121);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(5,127);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(6,159);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(7,236);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(8,353);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(9,495);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(10,308);
   _QuadJet_DoubleTag_ideal_CvB__317->SetEntries(2780);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2780   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4943");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3538");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_CvB__317->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_CvB__317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_CvB__317->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_CvB__317->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_ideal_CvB__317->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_ideal_CvB__317->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB__317->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvB__317->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB__317->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_CvB__317->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB__317->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB__317->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB__317->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvB__317->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB__317->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16_ideal->Modified();
   CvB_2016_QuadJet_DoubleTag_16_ideal->cd();
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetSelected(CvB_2016_QuadJet_DoubleTag_16_ideal);
}

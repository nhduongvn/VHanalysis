#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16_ideal/CvB_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_DoubleTag_16_ideal", "CvB_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2,0.09731355,1.133333,2.134478);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvB__317 = new TH1D("_QuadJet_DoubleTag_ideal_CvB__317","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(1,45);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(2,5);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(3,9);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(4,8);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(5,9);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(6,4);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(7,4);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(8,5);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(9,7);
   _QuadJet_DoubleTag_ideal_CvB__317->SetBinContent(10,4);
   _QuadJet_DoubleTag_ideal_CvB__317->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 100    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2867");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3063");
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

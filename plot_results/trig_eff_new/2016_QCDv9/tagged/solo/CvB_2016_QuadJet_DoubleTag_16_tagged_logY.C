#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16_tagged/CvB_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("CvB_2016_QuadJet_DoubleTag_16_tagged", "CvB_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16_tagged->Range(-0.2,1.521622,1.133333,3.338314);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_CvB__209 = new TH1D("_QuadJet_DoubleTag_tagged_CvB__209","",10,0,1);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(1,757);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(2,123);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(3,101);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(4,121);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(5,127);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(6,159);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(7,236);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(8,353);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(9,495);
   _QuadJet_DoubleTag_tagged_CvB__209->SetBinContent(10,308);
   _QuadJet_DoubleTag_tagged_CvB__209->SetEntries(2780);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2780   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4943");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3538");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_CvB__209->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_CvB__209);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_CvB__209->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_CvB__209->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_tagged_CvB__209->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_tagged_CvB__209->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__209->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB__209->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__209->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_CvB__209->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__209->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__209->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__209->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB__209->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__209->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16_tagged->Modified();
   CvB_2016_QuadJet_DoubleTag_16_tagged->cd();
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetSelected(CvB_2016_QuadJet_DoubleTag_16_tagged);
}

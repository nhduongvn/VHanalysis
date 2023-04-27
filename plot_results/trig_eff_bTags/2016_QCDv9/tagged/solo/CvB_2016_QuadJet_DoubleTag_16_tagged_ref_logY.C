#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16_tagged_ref/CvB_2016_QuadJet_DoubleTag_16_tagged_ref
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16_tagged_ref = new TCanvas("CvB_2016_QuadJet_DoubleTag_16_tagged_ref", "CvB_2016_QuadJet_DoubleTag_16_tagged_ref",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->Range(-0.2,1.63519,1.133333,3.703142);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_CvB_ref__210 = new TH1D("_QuadJet_DoubleTag_tagged_CvB_ref__210","",10,0,1);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(1,1655);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(2,364);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(3,354);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(4,331);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(5,280);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(6,208);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(7,148);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(8,166);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(9,287);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetBinContent(10,139);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetEntries(3932);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3932   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2866");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3003");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_CvB_ref__210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_CvB_ref__210->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB_ref__210->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->Modified();
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->cd();
   CvB_2016_QuadJet_DoubleTag_16_tagged_ref->SetSelected(CvB_2016_QuadJet_DoubleTag_16_tagged_ref);
}

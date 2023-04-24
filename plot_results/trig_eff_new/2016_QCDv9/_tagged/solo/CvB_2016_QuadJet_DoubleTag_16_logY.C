#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16/CvB_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16 = new TCanvas("CvB_2016_QuadJet_DoubleTag_16", "CvB_2016_QuadJet_DoubleTag_16",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16->Range(-0.2,1.521123,1.133333,3.342811);
   CvB_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_CvB__413 = new TH1D("_QuadJet_DoubleTag_tagged_CvB__413","",10,0,1);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(1,764);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(2,125);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(3,101);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(4,121);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(5,127);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(6,163);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(7,237);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(8,354);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(9,502);
   _QuadJet_DoubleTag_tagged_CvB__413->SetBinContent(10,310);
   _QuadJet_DoubleTag_tagged_CvB__413->SetEntries(2804);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2804   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4943");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3539");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_CvB__413->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_CvB__413);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_CvB__413->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_CvB__413->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_tagged_CvB__413->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_tagged_CvB__413->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__413->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB__413->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__413->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_CvB__413->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__413->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__413->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__413->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB__413->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__413->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16->Modified();
   CvB_2016_QuadJet_DoubleTag_16->cd();
   CvB_2016_QuadJet_DoubleTag_16->SetSelected(CvB_2016_QuadJet_DoubleTag_16);
}

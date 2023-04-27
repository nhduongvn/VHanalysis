#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16_tagged/CvB_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("CvB_2016_QuadJet_DoubleTag_16_tagged", "CvB_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16_tagged->Range(-0.2183529,0.0185079,1.171633,0.02760637);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFillStyle(4000);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_CvB__208 = new TH1D("_QuadJet_DoubleTag_tagged_CvB__208","",10,0,1);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(1,0.02520561);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(2,0.02188223);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(3,0.02082474);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(4,0.02148056);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(5,0.01992157);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(6,0.02129654);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(7,0.02306489);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(8,0.0253902);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(9,0.02622656);
   _QuadJet_DoubleTag_tagged_CvB__208->SetBinContent(10,0.02635858);
   _QuadJet_DoubleTag_tagged_CvB__208->SetEntries(0.2316515);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5151");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2959");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_CvB__208->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_CvB__208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_CvB__208->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_CvB__208->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_tagged_CvB__208->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_tagged_CvB__208->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__208->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB__208->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__208->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_CvB__208->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__208->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__208->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvB__208->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvB__208->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvB__208->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16_tagged->Modified();
   CvB_2016_QuadJet_DoubleTag_16_tagged->cd();
   CvB_2016_QuadJet_DoubleTag_16_tagged->SetSelected(CvB_2016_QuadJet_DoubleTag_16_tagged);
}

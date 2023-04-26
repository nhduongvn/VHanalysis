#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_tagged/BvL_2016_QuadJet_TripleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_tagged = new TCanvas("BvL_2016_QuadJet_TripleTag_16_tagged", "BvL_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_tagged->Range(-0.2183529,0.3605917,1.171633,0.4614288);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFillStyle(4000);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__181 = new TH1D("_QuadJet_TripleTag_tagged_BvL__181","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(1,0.3913373);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(2,0.4292741);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(3,0.4475997);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(4,0.3865881);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(5,0.4029114);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(6,0.4030884);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(7,0.3910921);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(8,0.3762592);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(9,0.3928275);
   _QuadJet_TripleTag_tagged_BvL__181->SetBinContent(10,0.4017348);
   _QuadJet_TripleTag_tagged_BvL__181->SetEntries(4.022713);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4937");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2873");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL__181->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL__181);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_BvL__181->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL__181->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL__181->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_BvL__181->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__181->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__181->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__181->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_BvL__181->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__181->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__181->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__181->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__181->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__181->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_tagged->Modified();
   BvL_2016_QuadJet_TripleTag_16_tagged->cd();
   BvL_2016_QuadJet_TripleTag_16_tagged->SetSelected(BvL_2016_QuadJet_TripleTag_16_tagged);
}

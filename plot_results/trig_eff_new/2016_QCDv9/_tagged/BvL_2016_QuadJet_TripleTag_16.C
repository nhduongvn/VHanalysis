#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16/BvL_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16 = new TCanvas("BvL_2016_QuadJet_TripleTag_16", "BvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16->Range(-0.2183529,0.3607063,1.171633,0.4607532);
   BvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16->SetFillStyle(4000);
   BvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_TripleTag_16->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_TripleTag_16->SetBottomMargin(0.12);
   BvL_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__361 = new TH1D("_QuadJet_TripleTag_tagged_BvL__361","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(1,0.390975);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(2,0.4294376);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(3,0.4470325);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(4,0.386561);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(5,0.4011727);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(6,0.4029692);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(7,0.3913704);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(8,0.376251);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(9,0.3914745);
   _QuadJet_TripleTag_tagged_BvL__361->SetBinContent(10,0.4016044);
   _QuadJet_TripleTag_tagged_BvL__361->SetEntries(4.018848);
   
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
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2874");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL__361->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL__361);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_BvL__361->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL__361->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL__361->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_BvL__361->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__361->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__361->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__361->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_BvL__361->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__361->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__361->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__361->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__361->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__361->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16->Modified();
   BvL_2016_QuadJet_TripleTag_16->cd();
   BvL_2016_QuadJet_TripleTag_16->SetSelected(BvL_2016_QuadJet_TripleTag_16);
}

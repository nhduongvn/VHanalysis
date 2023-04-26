#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_tagged()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_tagged/BvL_2017_QuadJet_TripleTag_17_tagged
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_tagged = new TCanvas("BvL_2017_QuadJet_TripleTag_17_tagged", "BvL_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_tagged->Range(-0.2183529,0.1398579,1.171633,0.2005228);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFillStyle(4000);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15709);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetRightMargin(0.1234783);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetBottomMargin(0.12);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__91 = new TH1D("_QuadJet_TripleTag_tagged_BvL__91","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(1,0.1512374);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(2,0.1794933);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(3,0.1922031);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(4,0.1681772);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(5,0.1658367);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(6,0.1697583);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(7,0.151722);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(8,0.1492837);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(9,0.1512236);
   _QuadJet_TripleTag_tagged_BvL__91->SetBinContent(10,0.1689695);
   _QuadJet_TripleTag_tagged_BvL__91->SetEntries(1.647905);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4909");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2858");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL__91->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL__91);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_BvL__91->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL__91->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL__91->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_BvL__91->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__91->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__91->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__91->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_BvL__91->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__91->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__91->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__91->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__91->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__91->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_tagged->Modified();
   BvL_2017_QuadJet_TripleTag_17_tagged->cd();
   BvL_2017_QuadJet_TripleTag_17_tagged->SetSelected(BvL_2017_QuadJet_TripleTag_17_tagged);
}

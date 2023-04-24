#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16/BvL_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16 = new TCanvas("BvL_2016_QuadJet_DoubleTag_16", "BvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16->Range(-0.2183529,0.01549015,1.171633,0.02743897);
   BvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_BvL__364 = new TH1D("_QuadJet_DoubleTag_tagged_BvL__364","",10,0,1);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(1,0.02580028);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(2,0.02175722);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(3,0.02105263);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(4,0.02076255);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(5,0.01734669);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(6,0.02226935);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(7,0.0252203);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(8,0.02055721);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(9,0.02327018);
   _QuadJet_DoubleTag_tagged_BvL__364->SetBinContent(10,0.02543894);
   _QuadJet_DoubleTag_tagged_BvL__364->SetEntries(0.2234753);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5052");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2963");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_BvL__364->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_BvL__364);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_BvL__364->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_BvL__364->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_tagged_BvL__364->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_tagged_BvL__364->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__364->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__364->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__364->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_BvL__364->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__364->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__364->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__364->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__364->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__364->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16->Modified();
   BvL_2016_QuadJet_DoubleTag_16->cd();
   BvL_2016_QuadJet_DoubleTag_16->SetSelected(BvL_2016_QuadJet_DoubleTag_16);
}

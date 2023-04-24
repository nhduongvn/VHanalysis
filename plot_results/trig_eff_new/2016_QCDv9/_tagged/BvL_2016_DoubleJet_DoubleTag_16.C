#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16/BvL_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16", "BvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16->Range(-0.2183529,0.01388746,1.171633,0.01837835);
   BvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_BvL__370 = new TH1D("_DoubleJet_DoubleTag_tagged_BvL__370","",10,0,1);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(1,0.01726806);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(2,0.01498038);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(3,0.01612542);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(4,0.01510004);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(5,0.01759101);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(6,0.01776246);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(7,0.01458523);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(8,0.01649986);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(9,0.01709226);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetBinContent(10,0.01615003);
   _DoubleJet_DoubleTag_tagged_BvL__370->SetEntries(0.1631548);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5016");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2876");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_BvL__370->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_BvL__370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_BvL__370->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_tagged_BvL__370->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_BvL__370->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__370->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__370->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16->Modified();
   BvL_2016_DoubleJet_DoubleTag_16->cd();
   BvL_2016_DoubleJet_DoubleTag_16->SetSelected(BvL_2016_DoubleJet_DoubleTag_16);
}

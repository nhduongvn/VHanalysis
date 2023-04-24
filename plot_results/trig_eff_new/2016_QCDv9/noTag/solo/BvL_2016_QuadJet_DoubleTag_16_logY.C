#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16/BvL_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16 = new TCanvas("BvL_2016_QuadJet_DoubleTag_16", "BvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16->Range(-0.2,2.191338,1.133333,4.749534);
   BvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16->SetLogy();
   BvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_BvL__149 = new TH1D("_QuadJet_DoubleTag_BvL__149","",10,0,1);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(1,16450);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(2,1467);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(3,823);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(4,674);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(5,560);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(6,580);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(7,607);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(8,621);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(9,915);
   _QuadJet_DoubleTag_BvL__149->SetBinContent(10,5975);
   _QuadJet_DoubleTag_BvL__149->SetEntries(28672);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28672  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3166");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4022");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_BvL__149->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_BvL__149);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_BvL__149->SetLineColor(ci);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__149->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__149->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_BvL__149->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__149->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__149->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__149->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__149->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__149->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16->Modified();
   BvL_2016_QuadJet_DoubleTag_16->cd();
   BvL_2016_QuadJet_DoubleTag_16->SetSelected(BvL_2016_QuadJet_DoubleTag_16);
}

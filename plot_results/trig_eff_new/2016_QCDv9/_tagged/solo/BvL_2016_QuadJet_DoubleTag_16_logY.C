#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16/BvL_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16 = new TCanvas("BvL_2016_QuadJet_DoubleTag_16", "BvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16->Range(-0.2,1.321466,1.133333,3.609088);
   BvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16->SetLogy();
   BvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_BvL__365 = new TH1D("_QuadJet_DoubleTag_tagged_BvL__365","",10,0,1);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(1,1267);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(2,183);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(3,94);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(4,110);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(5,71);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(6,84);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(7,83);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(8,76);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(9,113);
   _QuadJet_DoubleTag_tagged_BvL__365->SetBinContent(10,723);
   _QuadJet_DoubleTag_tagged_BvL__365->SetEntries(2804);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2804   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4004");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4101");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_BvL__365->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_BvL__365);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_BvL__365->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_BvL__365->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_tagged_BvL__365->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_tagged_BvL__365->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__365->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__365->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__365->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_BvL__365->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__365->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__365->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__365->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__365->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__365->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16->Modified();
   BvL_2016_QuadJet_DoubleTag_16->cd();
   BvL_2016_QuadJet_DoubleTag_16->SetSelected(BvL_2016_QuadJet_DoubleTag_16);
}

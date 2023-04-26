#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16/BvL_2016_QuadJet_DoubleTag_16
//=========  (Wed Apr 26 16:41:41 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16 = new TCanvas("BvL_2016_QuadJet_DoubleTag_16", "BvL_2016_QuadJet_DoubleTag_16",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16->Range(-0.2,2.189238,1.133333,4.745111);
   BvL_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16->SetLogy();
   BvL_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_BvL__77 = new TH1D("_QuadJet_DoubleTag_BvL__77","",10,0,1);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(1,16292);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(2,1444);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(3,815);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(4,666);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(5,557);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(6,569);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(7,603);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(8,614);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(9,908);
   _QuadJet_DoubleTag_BvL__77->SetBinContent(10,5916);
   _QuadJet_DoubleTag_BvL__77->SetEntries(28384);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28384  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3167");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4022");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_BvL__77->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_BvL__77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_BvL__77->SetLineColor(ci);
   _QuadJet_DoubleTag_BvL__77->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_BvL__77->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_BvL__77->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__77->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__77->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__77->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_BvL__77->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__77->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__77->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_BvL__77->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_BvL__77->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_BvL__77->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16->Modified();
   BvL_2016_QuadJet_DoubleTag_16->cd();
   BvL_2016_QuadJet_DoubleTag_16->SetSelected(BvL_2016_QuadJet_DoubleTag_16);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16_ideal/BvL_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:18:40 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16_ideal", "BvL_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->Range(-0.2,1.134704,1.133333,3.40494);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_BvL__299 = new TH1D("_DoubleJet_DoubleTag_ideal_BvL__299","",10,0,1);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(1,795);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(2,117);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(3,66);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(4,75);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(5,64);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(6,61);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(7,46);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(8,59);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(9,77);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetBinContent(10,424);
   _DoubleJet_DoubleTag_ideal_BvL__299->SetEntries(1784);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1784   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3928");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4029");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_BvL__299->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_BvL__299);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_BvL__299->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_ideal_BvL__299->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_BvL__299->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_BvL__299->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_BvL__299->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   BvL_2016_DoubleJet_DoubleTag_16_ideal->cd();
   BvL_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(BvL_2016_DoubleJet_DoubleTag_16_ideal);
}

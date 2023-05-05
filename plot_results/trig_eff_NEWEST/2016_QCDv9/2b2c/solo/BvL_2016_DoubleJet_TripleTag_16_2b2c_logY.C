#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_2b2c/BvL_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_2b2c", "BvL_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->Range(-0.2,2.495793,1.133333,4.685349);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_BvL__149 = new TH1D("_DoubleJet_TripleTag_2b2c_BvL__149","",10,0,1);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(1,15447);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(2,2852);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(3,1597);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(4,1653);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(5,1297);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(6,1178);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(7,1037);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(8,1104);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(9,1528);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetBinContent(10,8911);
   _DoubleJet_TripleTag_2b2c_BvL__149->SetEntries(36604);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 36604  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4004");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4013");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_BvL__149->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_BvL__149);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_BvL__149->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_2b2c_BvL__149->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_BvL__149->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_BvL__149->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__149->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   BvL_2016_DoubleJet_TripleTag_16_2b2c->cd();
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(BvL_2016_DoubleJet_TripleTag_16_2b2c);
}

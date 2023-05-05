#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_2b2c()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_2b2c/BvL_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_2b2c", "BvL_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->Range(-0.2183529,0.4061924,1.171633,0.5294152);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFillStyle(4000);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_BvL__148 = new TH1D("_DoubleJet_TripleTag_2b2c_BvL__148","",10,0,1);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(1,0.425338);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(2,0.4794083);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(3,0.512516);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(4,0.4455526);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(5,0.4453984);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(6,0.4578313);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(7,0.4454467);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(8,0.4264195);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(9,0.4463921);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetBinContent(10,0.4489847);
   _DoubleJet_TripleTag_2b2c_BvL__148->SetEntries(4.533288);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4952");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2862");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_BvL__148->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_BvL__148);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_2b2c_BvL__148->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_2b2c_BvL__148->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_2b2c_BvL__148->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_BvL__148->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL__148->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_DoubleJet90_Double30_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   BvL_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   BvL_2016_DoubleJet_TripleTag_16_2b2c->cd();
   BvL_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(BvL_2016_DoubleJet_TripleTag_16_2b2c);
}

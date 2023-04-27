#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_ideal/BvL_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_ideal", "BvL_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2183529,0.6957237,1.171633,0.8866492);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_BvL__295 = new TH1D("_DoubleJet_TripleTag_ideal_BvL__295","",10,0,1);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(1,0.8604651);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(2,0.8571429);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(3,0.8076923);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(4,0.7538462);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(5,0.7253886);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(6,0.7954545);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(7,0.8206897);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(8,0.8342857);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(9,0.7846154);
   _DoubleJet_TripleTag_ideal_BvL__295->SetBinContent(10,0.85777);
   _DoubleJet_TripleTag_ideal_BvL__295->SetEntries(8.09735);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4992");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2921");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_BvL__295->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_BvL__295);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_BvL__295->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_BvL__295->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_ideal_BvL__295->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_ideal_BvL__295->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__295->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__295->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__295->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_BvL__295->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__295->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__295->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__295->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__295->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__295->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_ideal->Modified();
   BvL_2016_DoubleJet_TripleTag_16_ideal->cd();
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetSelected(BvL_2016_DoubleJet_TripleTag_16_ideal);
}

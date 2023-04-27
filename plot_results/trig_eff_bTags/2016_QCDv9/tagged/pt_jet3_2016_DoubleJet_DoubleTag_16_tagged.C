#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16_tagged/pt_jet3_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet3_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet3__154 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet3__154","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(5,0.02678571);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(6,0.01265823);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(7,0.03669725);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(8,0.008064516);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(9,0.06818182);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(10,0.01666667);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(11,0.03921569);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(12,0.02941176);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(13,0.05263158);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(14,0.1111111);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetBinContent(27,0.5);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetEntries(0.9014243);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  192.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.86");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet3__154);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__154->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16_tagged);
}

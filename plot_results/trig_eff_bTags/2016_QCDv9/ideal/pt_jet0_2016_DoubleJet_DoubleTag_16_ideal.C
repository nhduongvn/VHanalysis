#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_DoubleTag_16_ideal/pt_jet0_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet0_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet0_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->Range(-109.1764,-0.02937063,585.8166,0.2153846);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet0__226 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet0__226","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(13,0.1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(14,0.03125);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(15,0.06);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(16,0.05263158);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(17,0.02631579);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(19,0.02777778);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(20,0.1081081);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(21,0.04);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(22,0.1034483);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(24,0.06666667);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(26,0.05882353);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(27,0.05555556);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(28,0.04347826);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(38,0.125);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetBinContent(39,0.1818182);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetEntries(1.080874);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  248.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  92.64");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet0__226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__226->Draw("HIST");
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet0_2016_DoubleJet_DoubleTag_16_ideal);
}

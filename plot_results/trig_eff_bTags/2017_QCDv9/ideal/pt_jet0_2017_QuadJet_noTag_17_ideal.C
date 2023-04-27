#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ideal/pt_jet0_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ideal", "pt_jet0_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.04038462,585.8166,0.2961538);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0__112 = new TH1D("_QuadJet_noTag_ideal_pt_jet0__112","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(13,0.02816901);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(14,0.025);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(15,0.01428571);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(17,0.01333333);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(30,0.05882353);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(31,0.1111111);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(39,0.25);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(51,0.07142857);
   _QuadJet_noTag_ideal_pt_jet0__112->SetEntries(0.5007227);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  316.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.09");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet0__112->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet0__112);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet0__112->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet0__112->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__112->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ideal);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_tagged/pt_jet0_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_tagged", "pt_jet0_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->Range(-109.1764,-0.04038462,585.8166,0.2961538);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__58 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__58","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(10,0.01724138);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(13,0.02816901);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(14,0.025);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(15,0.01428571);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(17,0.01333333);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(30,0.05882353);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(31,0.1111111);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(39,0.25);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(51,0.07142857);
   _QuadJet_noTag_tagged_pt_jet0__58->SetEntries(0.5179641);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  309.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  94.42");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0__58->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0__58);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet0__58->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet0_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet0_2017_QuadJet_noTag_17_tagged);
}

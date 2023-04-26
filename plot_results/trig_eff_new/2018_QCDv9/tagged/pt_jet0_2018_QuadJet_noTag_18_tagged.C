#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_tagged/pt_jet0_2018_QuadJet_noTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_tagged = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_tagged", "pt_jet0_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_tagged->Range(-109.1764,-0.003609798,585.8166,0.02647185);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__58 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__58","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(9,0.001016949);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(10,0.001139601);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(11,0.002452984);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(12,0.001670379);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(13,0.005413105);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(14,0.005583127);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(15,0.005634736);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(16,0.006393381);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(17,0.008097166);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(18,0.005767524);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(19,0.003460208);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(20,0.005008347);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(21,0.001907184);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(22,0.005574913);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(23,0.008340284);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(24,0.009199632);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(25,0.005494505);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(26,0.008526188);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(27,0.005108557);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(28,0.008955224);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(29,0.01652893);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(30,0.008928571);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(31,0.001848429);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(32,0.002463054);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(33,0.01033592);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(34,0.01699717);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(35,0.003278689);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(36,0.006389776);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(37,0.008928571);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(38,0.004166667);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(40,0.00921659);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(41,0.01704545);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(42,0.02234637);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(44,0.007194245);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(46,0.01851852);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(48,0.009259259);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(49,0.01149425);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(51,0.01046512);
   _QuadJet_noTag_tagged_pt_jet0__58->SetEntries(0.2796844);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    315");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  107.6");
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
   pt_jet0_2018_QuadJet_noTag_18_tagged->Modified();
   pt_jet0_2018_QuadJet_noTag_18_tagged->cd();
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetSelected(pt_jet0_2018_QuadJet_noTag_18_tagged);
}

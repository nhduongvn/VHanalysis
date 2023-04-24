#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17/pt_jet0_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17 = new TCanvas("pt_jet0_2017_QuadJet_noTag_17", "pt_jet0_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17->Range(-109.1764,-0.003846154,585.8166,0.02820513);
   pt_jet0_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__232 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__232","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(9,0.001403509);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(10,0.002939447);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(11,0.003239741);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(12,0.005698006);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(13,0.003977273);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(14,0.005703422);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(15,0.00729927);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(16,0.002883922);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(17,0.008149959);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(18,0.005240175);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(19,0.004123711);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(20,0.005773672);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(21,0.01358696);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(22,0.005698006);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(23,0.005008347);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(24,0.006837607);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(25,0.006198347);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(26,0.004784689);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(27,0.005509642);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(28,0.01818182);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(29,0.002941176);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(30,0.004504505);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(31,0.008583691);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(32,0.004366812);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(33,0.01310044);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(34,0.006097561);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(36,0.007518797);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(38,0.009433962);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(39,0.009090909);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(41,0.01162791);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(42,0.02380952);
   _QuadJet_noTag_tagged_pt_jet0__232->SetBinContent(51,0.002150538);
   _QuadJet_noTag_tagged_pt_jet0__232->SetEntries(0.2233128);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  273.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  96.46");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0__232->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0__232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet0__232->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0__232->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0__232->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet0__232->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__232->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__232->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__232->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet0__232->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__232->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__232->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__232->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__232->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__232->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17->Modified();
   pt_jet0_2017_QuadJet_noTag_17->cd();
   pt_jet0_2017_QuadJet_noTag_17->SetSelected(pt_jet0_2017_QuadJet_noTag_17);
}

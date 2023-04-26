#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_tagged/pt_jet0_2018_QuadJet_noTag_18_tagged
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
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
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(9,0.001013514);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(10,0.001130902);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(11,0.00244898);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(12,0.00166113);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(13,0.005100595);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(14,0.005550416);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(15,0.00595632);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(16,0.006362275);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(17,0.008084074);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(18,0.005747126);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(19,0.003453379);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(20,0.005013928);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(21,0.001902346);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(22,0.00554785);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(23,0.008326395);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(24,0.009157509);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(25,0.005482456);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(26,0.008433735);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(27,0.005082592);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(28,0.008810573);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(29,0.01642036);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(30,0.008865248);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(31,0.001841621);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(32,0.002415459);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(33,0.01033592);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(34,0.01694915);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(35,0.003257329);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(36,0.006329114);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(37,0.00877193);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(38,0.008403361);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(39,0.004273504);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(40,0.009174312);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(41,0.01685393);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(42,0.02234637);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(44,0.007194245);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(46,0.01801802);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(48,0.009174312);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(49,0.01123596);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(51,0.01034483);
   _QuadJet_noTag_tagged_pt_jet0__58->SetEntries(0.2861262);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  316.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  106.4");
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

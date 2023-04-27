#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ideal/pt_jet0_2018_QuadJet_noTag_18_ideal
//=========  (Thu Apr 27 10:18:10 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ideal", "pt_jet0_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal->Range(-109.1764,-0.003609798,585.8166,0.02647185);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0__112 = new TH1D("_QuadJet_noTag_ideal_pt_jet0__112","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(9,0.003095975);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(10,0.002259036);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(11,0.004110997);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(12,0.001980198);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(13,0.005975395);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(14,0.005502063);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(15,0.006306938);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(16,0.006558642);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(17,0.008190008);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(18,0.005793226);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(19,0.00347567);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(20,0.005033557);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(21,0.001913265);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(22,0.005571031);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(23,0.008347245);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(24,0.009165903);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(25,0.005488474);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(26,0.008454106);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(27,0.005095541);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(28,0.008810573);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(29,0.01642036);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(30,0.008880995);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(31,0.001841621);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(32,0.002421308);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(33,0.01033592);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(34,0.01694915);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(35,0.003257329);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(36,0.006329114);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(37,0.00877193);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(38,0.008403361);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(39,0.004273504);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(40,0.009174312);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(41,0.01685393);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(42,0.02234637);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(44,0.007194245);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(46,0.01818182);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(48,0.009174312);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(49,0.01123596);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(51,0.01034483);
   _QuadJet_noTag_ideal_pt_jet0__112->SetEntries(0.2931734);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  311.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  109.9");
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
   pt_jet0_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ideal);
}

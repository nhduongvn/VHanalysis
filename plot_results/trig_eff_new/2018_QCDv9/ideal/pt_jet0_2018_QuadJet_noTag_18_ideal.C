#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ideal/pt_jet0_2018_QuadJet_noTag_18_ideal
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
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
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(9,0.001124016);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(10,0.001207365);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(11,0.002553191);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(12,0.001723148);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(13,0.005547445);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(14,0.005674653);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(15,0.005706613);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(16,0.006458967);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(17,0.008190008);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(18,0.005811354);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(19,0.003482587);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(20,0.005025126);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(21,0.001918159);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(22,0.005598321);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(23,0.008361204);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(24,0.009208103);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(25,0.00550055);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(26,0.008547009);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(27,0.005121639);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(28,0.008955224);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(29,0.01652893);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(30,0.008944544);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(31,0.001848429);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(32,0.002469136);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(33,0.01033592);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(34,0.01699717);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(35,0.003278689);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(36,0.006389776);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(37,0.008928571);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(38,0.004166667);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(40,0.00921659);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(41,0.01704545);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(42,0.02234637);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(44,0.007194245);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(46,0.01869159);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(48,0.009259259);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(49,0.01149425);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(51,0.01046512);
   _QuadJet_noTag_ideal_pt_jet0__112->SetEntries(0.2808503);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  314.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  107.9");
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

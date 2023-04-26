#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ideal/pt_jet0_2017_QuadJet_noTag_17_ideal
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ideal", "pt_jet0_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.003473945,585.8166,0.0254756);
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
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(8,0.001831502);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(9,0.001413428);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(10,0.003378378);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(11,0.003024194);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(12,0.005271481);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(13,0.005750131);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(14,0.006246451);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(15,0.006646526);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(16,0.001948052);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(17,0.00736377);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(18,0.004731861);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(19,0.005535055);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(20,0.006237006);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(21,0.01346389);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(22,0.005208333);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(23,0.004559271);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(24,0.00777605);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(25,0.007575758);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(26,0.004246285);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(27,0.005);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(28,0.01634877);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(29,0.00265252);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(30,0.004081633);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(31,0.007490637);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(32,0.003875969);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(33,0.01214575);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(34,0.005405405);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(36,0.006666667);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(38,0.01694915);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(39,0.0078125);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(41,0.01041667);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(42,0.02150538);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(51,0.001912046);
   _QuadJet_noTag_ideal_pt_jet0__112->SetEntries(0.2225585);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  270.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  98.32");
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

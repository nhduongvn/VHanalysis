#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17/pt_jet2_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17 = new TCanvas("pt_jet2_2017_QuadJet_noTag_17", "pt_jet2_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17->Range(-109.1764,-0.03230769,585.8166,0.2369231);
   pt_jet2_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2__64 = new TH1D("_QuadJet_noTag_pt_jet2__64","",50,0,500);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(5,0.0007284648);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(6,0.002370164);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(7,0.003845173);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(8,0.005585542);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(9,0.006821231);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(10,0.008011476);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(11,0.007555999);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(12,0.00747485);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(13,0.00753828);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(14,0.008057296);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(15,0.008667389);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(16,0.006763681);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(17,0.007611241);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(18,0.006336634);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(19,0.01159726);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(20,0.007087172);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(21,0.01164875);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(22,0.008323424);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(23,0.00317965);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(24,0.005813953);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(25,0.007832898);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(26,0.01204819);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(27,0.007692308);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(28,0.009345794);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(29,0.01694915);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(32,0.01052632);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(33,0.02631579);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(35,0.01886792);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(39,0.04166667);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(46,0.125);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(50,0.2);
   _QuadJet_noTag_pt_jet2__64->SetEntries(0.6112627);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  368.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  137.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet2__64->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet2__64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_pt_jet2__64->SetLineColor(ci);
   _QuadJet_noTag_pt_jet2__64->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet2__64->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_pt_jet2__64->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__64->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__64->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__64->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_pt_jet2__64->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__64->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__64->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__64->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__64->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__64->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17->Modified();
   pt_jet2_2017_QuadJet_noTag_17->cd();
   pt_jet2_2017_QuadJet_noTag_17->SetSelected(pt_jet2_2017_QuadJet_noTag_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17/pt_jet2_2017_QuadJet_noTag_17
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17 = new TCanvas("pt_jet2_2017_QuadJet_noTag_17", "pt_jet2_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17->Range(-109.1764,-0.02307692,585.8166,0.1692308);
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
   
   TH1D *_QuadJet_noTag_pt_jet2__16 = new TH1D("_QuadJet_noTag_pt_jet2__16","",50,0,500);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(5,0.0008090288);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(6,0.002343417);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(7,0.0037648);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(8,0.005778621);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(9,0.006744143);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(10,0.007763152);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(11,0.007556589);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(12,0.007555423);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(13,0.007094191);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(14,0.007684631);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(15,0.008866722);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(16,0.007678245);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(17,0.006958763);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(18,0.007352941);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(19,0.01078293);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(20,0.008186398);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(21,0.01352426);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(22,0.008492569);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(23,0.002832861);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(24,0.005235602);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(25,0.006849315);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(26,0.01078167);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(27,0.006920415);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(28,0.008510638);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(29,0.02083333);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(32,0.00952381);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(33,0.02380952);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(34,0.01724138);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(35,0.01666667);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(39,0.03846154);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(46,0.1111111);
   _QuadJet_noTag_pt_jet2__16->SetBinContent(50,0.1428571);
   _QuadJet_noTag_pt_jet2__16->SetEntries(0.5505718);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  351.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  137.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet2__16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet2__16);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_pt_jet2__16->SetLineColor(ci);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__16->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__16->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_pt_jet2__16->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__16->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__16->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2__16->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2__16->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2__16->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17->Modified();
   pt_jet2_2017_QuadJet_noTag_17->cd();
   pt_jet2_2017_QuadJet_noTag_17->SetSelected(pt_jet2_2017_QuadJet_noTag_17);
}

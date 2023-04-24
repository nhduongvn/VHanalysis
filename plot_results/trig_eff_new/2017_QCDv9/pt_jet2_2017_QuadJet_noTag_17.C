#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17/pt_jet2_2017_QuadJet_noTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
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
   
   TH1D *_QuadJet_noTag_pt_jet2__64 = new TH1D("_QuadJet_noTag_pt_jet2__64","",50,0,500);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(5,0.0008284318);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(6,0.002353839);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(7,0.003732316);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(8,0.005753304);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(9,0.006743738);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(10,0.007767038);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(11,0.00749221);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(12,0.007442145);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(13,0.006902998);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(14,0.007755102);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(15,0.008938706);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(16,0.007841673);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(17,0.006876488);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(18,0.007199424);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(19,0.01102589);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(20,0.007736944);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(21,0.01308258);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(22,0.00877193);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(23,0.002902758);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(24,0.005319149);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(25,0.004705882);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(26,0.01114206);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(27,0.006993007);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(28,0.008695652);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(29,0.02150538);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(32,0.009803922);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(33,0.02439024);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(34,0.01818182);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(35,0.01724138);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(39,0.03846154);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(46,0.1111111);
   _QuadJet_noTag_pt_jet2__64->SetBinContent(50,0.1428571);
   _QuadJet_noTag_pt_jet2__64->SetEntries(0.5515558);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    352");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  137.2");
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

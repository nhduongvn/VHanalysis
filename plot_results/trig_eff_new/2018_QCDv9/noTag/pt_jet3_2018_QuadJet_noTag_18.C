#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18/pt_jet3_2018_QuadJet_noTag_18
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18 = new TCanvas("pt_jet3_2018_QuadJet_noTag_18", "pt_jet3_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18->Range(-109.1764,-0.04038462,585.8166,0.2961538);
   pt_jet3_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3__22 = new TH1D("_QuadJet_noTag_pt_jet3__22","",50,0,500);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(5,0.001765461);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(6,0.003106964);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(7,0.00532527);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(8,0.006494832);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(9,0.006219886);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(10,0.006860998);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(11,0.007402163);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(12,0.006619038);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(13,0.006876228);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(14,0.00772098);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(15,0.0072845);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(16,0.004914005);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(17,0.006932409);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(18,0.006613757);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(19,0.005671078);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(20,0.01432665);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(21,0.004065041);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(22,0.005181347);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(23,0.006802721);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(24,0.0106383);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(25,0.01428571);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(26,0.02173913);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(28,0.02857143);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(35,0.25);
   _QuadJet_noTag_pt_jet3__22->SetEntries(0.4454179);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  275.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  90.83");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3__22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3__22);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_pt_jet3__22->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__22->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_pt_jet3__22->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__22->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__22->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__22->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__22->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__22->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18->Modified();
   pt_jet3_2018_QuadJet_noTag_18->cd();
   pt_jet3_2018_QuadJet_noTag_18->SetSelected(pt_jet3_2018_QuadJet_noTag_18);
}

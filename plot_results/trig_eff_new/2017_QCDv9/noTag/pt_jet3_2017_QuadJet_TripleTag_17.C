#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17/pt_jet3_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17", "pt_jet3_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__19 = new TH1D("_QuadJet_TripleTag_pt_jet3__19","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(5,0.01720443);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(6,0.03264159);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(7,0.05417439);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(8,0.07027419);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(9,0.07531094);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(10,0.0813253);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(11,0.08746967);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(12,0.08485194);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(13,0.08641975);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(14,0.09032847);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(15,0.09178082);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(16,0.1143187);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(17,0.08813559);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(18,0.09259259);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(19,0.04850746);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(20,0.1069519);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(21,0.06329114);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(22,0.07476636);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(23,0.07042254);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(24,0.1290323);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(25,0.05769231);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(26,0.04);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(27,0.09090909);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(28,0.1428571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(29,0.1428571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(30,0.08333333);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(32,0.1666667);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(33,0.1428571);
   _QuadJet_TripleTag_pt_jet3__19->SetBinContent(47,0.5);
   _QuadJet_TripleTag_pt_jet3__19->SetEntries(2.926973);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  245.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  123.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_pt_jet3__19->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__19->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_pt_jet3__19->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__19->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__19->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__19->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17->cd();
   pt_jet3_2017_QuadJet_TripleTag_17->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17);
}

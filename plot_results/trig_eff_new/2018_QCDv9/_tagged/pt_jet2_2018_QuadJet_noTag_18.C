#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18/pt_jet2_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18 = new TCanvas("pt_jet2_2018_QuadJet_noTag_18", "pt_jet2_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18->Range(-109.1764,-0.01346154,585.8166,0.09871795);
   pt_jet2_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18->SetFillStyle(4000);
   pt_jet2_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   pt_jet2_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   pt_jet2_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet2__70 = new TH1D("_QuadJet_noTag_tagged_pt_jet2__70","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(6,0.00106295);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(7,0.002907279);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(8,0.004793289);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(9,0.006796416);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(10,0.005758947);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(11,0.007863341);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(12,0.008371385);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(13,0.005130836);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(14,0.0056899);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(15,0.009852217);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(16,0.006622517);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(17,0.00952381);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(18,0.006864989);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(19,0.00617284);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(20,0.008658009);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(21,0.004901961);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(23,0.01886792);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(26,0.01754386);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(28,0.04878049);
   _QuadJet_noTag_tagged_pt_jet2__70->SetBinContent(34,0.08333333);
   _QuadJet_noTag_tagged_pt_jet2__70->SetEntries(0.2694963);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  237.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  86.68");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet2__70->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet2__70);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet2__70->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__70->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet2__70->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__70->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__70->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18->Modified();
   pt_jet2_2018_QuadJet_noTag_18->cd();
   pt_jet2_2018_QuadJet_noTag_18->SetSelected(pt_jet2_2018_QuadJet_noTag_18);
}

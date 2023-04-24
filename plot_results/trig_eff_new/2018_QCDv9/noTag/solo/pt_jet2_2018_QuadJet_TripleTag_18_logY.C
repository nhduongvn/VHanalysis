#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18/pt_jet2_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:55 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18", "pt_jet2_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18->Range(-100,-0.8650952,566.6667,4.775557);
   pt_jet2_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet2__14 = new TH1D("_QuadJet_TripleTag_pt_jet2__14","",50,0,500);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(5,281);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(6,2988);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(7,6695);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(8,8589);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(9,8400);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(10,6953);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(11,5286);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(12,3795);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(13,2739);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(14,2025);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(15,1434);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(16,1079);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(17,852);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(18,594);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(19,434);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(20,327);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(21,257);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(22,215);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(23,154);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(24,112);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(25,92);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(26,62);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(27,48);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(28,45);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(29,30);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(30,20);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(31,21);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(32,19);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(33,11);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(34,9);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(35,16);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(36,11);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(37,4);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(38,3);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(39,9);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(40,4);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(41,3);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(42,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(43,5);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(44,5);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(45,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(46,5);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(47,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(49,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(50,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(51,6);
   _QuadJet_TripleTag_pt_jet2__14->SetEntries(53646);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53646  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  98.53");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.04");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet2__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet2__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet2__14->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18->cd();
   pt_jet2_2018_QuadJet_TripleTag_18->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18);
}

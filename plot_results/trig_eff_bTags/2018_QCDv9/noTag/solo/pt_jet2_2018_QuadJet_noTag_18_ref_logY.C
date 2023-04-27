#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18_ref/pt_jet2_2018_QuadJet_noTag_18_ref
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet2_2018_QuadJet_noTag_18_ref", "pt_jet2_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18_ref->Range(-100,0.1792064,566.6667,6.168655);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet2_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2_ref__18 = new TH1D("_QuadJet_noTag_pt_jet2_ref__18","",50,0,500);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(5,42549);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(6,195957);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(7,192266);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(8,146735);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(9,104845);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(10,73090);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(11,50739);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(12,35614);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(13,24748);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(14,17651);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(15,12775);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(16,9489);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(17,6850);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(18,5173);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(19,3793);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(20,2907);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(21,2250);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(22,1734);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(23,1303);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(24,1042);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(25,784);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(26,622);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(27,473);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(28,397);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(29,312);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(30,247);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(31,192);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(32,187);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(33,148);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(34,128);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(35,102);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(36,102);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(37,74);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(38,57);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(39,46);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(40,49);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(41,33);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(42,25);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(43,31);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(44,25);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(45,24);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(46,15);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(47,16);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(48,14);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(49,12);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(50,13);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(51,67);
   _QuadJet_noTag_pt_jet2_ref__18->SetEntries(935705);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 935705 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  81.37");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   32.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet2_ref__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet2_ref__18);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet2_ref__18->SetLineColor(ci);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2_ref__18->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet2_ref__18->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet2_ref__18->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet2_ref__18->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet2_2018_QuadJet_noTag_18_ref->cd();
   pt_jet2_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet2_2018_QuadJet_noTag_18_ref);
}

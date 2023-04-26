#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18_ref/pt_jet2_2018_QuadJet_noTag_18_ref
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet2_2018_QuadJet_noTag_18_ref", "pt_jet2_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18_ref->Range(-100,0.1795139,566.6667,6.165887);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet2_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet2_ref__18 = new TH1D("_QuadJet_noTag_pt_jet2_ref__18","",50,0,500);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(5,42305);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(6,194850);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(7,191186);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(8,145928);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(9,104250);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(10,72680);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(11,50421);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(12,35413);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(13,24605);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(14,17552);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(15,12696);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(16,9433);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(17,6805);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(18,5143);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(19,3777);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(20,2883);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(21,2241);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(22,1724);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(23,1296);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(24,1033);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(25,780);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(26,618);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(27,471);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(28,395);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(29,311);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(30,245);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(31,189);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(32,184);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(33,147);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(34,127);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(35,102);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(36,101);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(37,74);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(38,54);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(39,46);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(40,48);
   _QuadJet_noTag_pt_jet2_ref__18->SetBinContent(41,32);
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
   _QuadJet_noTag_pt_jet2_ref__18->SetEntries(930387);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 930387 ");
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
